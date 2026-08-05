const { withXcodeProject } = require('@expo/config-plugins');
const fs = require('fs');
const path = require('path');

/**
 * Adds Everysight's Maverick SDK (EvsKit + NativeEvsKit) as a Swift Package
 * Manager dependency of the iOS app target during `expo prebuild`.
 *
 * Why this exists: CocoaPods can't consume SPM packages, and the SDK is
 * only distributed via SPM (github.com/everysight-maverick/m1-ios-spm),
 * which itself is just a `Package.swift` pointing at two prebuilt
 * `EvsKit.xcframework.zip` / `NativeEvsKit.xcframework.zip` binary targets
 * (confirmed by reading that repo directly — there's no source in it).
 * Without this plugin you'd have to re-add the package by hand in Xcode
 * every time you run a clean prebuild, which defeats the point of managed
 * config.
 *
 * Implementation note: `@expo/config-plugins` / the underlying `xcode` npm
 * package has no first-class API for SPM package references (it predates
 * SPM support landing in most versions of that library), so this writes the
 * `XCRemoteSwiftPackageReference` / `XCSwiftPackageProductDependency`
 * pbxproj objects directly. That's inherently more fragile than a proper
 * API — it's been structured to be idempotent (safe to run on every
 * prebuild) and defensive about missing sections, but if a future Xcode
 * project format changes the relevant object shapes, this may need
 * updating. If it ever misbehaves, the fallback is adding the package by
 * hand via Xcode's File > Add Packages... using the same URL/version below,
 * then removing this plugin.
 *
 * @param {import('@expo/config-plugins').ExportedConfig} config
 * @param {{ version?: string }} [options]
 */
function withEverysightSPM(config, options = {}) {
  const packageURL = 'https://github.com/everysight-maverick/m1-ios-spm.git';
  const versionRequirement = options.version ?? '2.6.1';
  const products = ['EvsKit', 'NativeEvsKit'];

  config = withXcodeProject(config, (config) => {
    const project = config.modResults;
    addSwiftPackage(project, packageURL, versionRequirement, products);
    addModuleSourcesToAppTarget(project, config.modRequest.projectRoot);
    return config;
  });

  return config;
}

/**
 * Registers a remote Swift package (with an exact-version requirement) and
 * links the given product names against the app's first native target.
 * Safe to call repeatedly — checks for an existing reference/dependency
 * before adding a duplicate.
 */
function addSwiftPackage(project, repositoryURL, exactVersion, productNames) {
  const objects = project.hash.project.objects;
  objects.XCRemoteSwiftPackageReference = objects.XCRemoteSwiftPackageReference || {};
  objects.XCSwiftPackageProductDependency = objects.XCSwiftPackageProductDependency || {};

  // --- 1. Find or create the XCRemoteSwiftPackageReference ------------------
  let packageRefUuid = Object.keys(objects.XCRemoteSwiftPackageReference).find(
    (key) =>
      !key.endsWith('_comment') &&
      objects.XCRemoteSwiftPackageReference[key].repositoryURL === JSON.stringify(repositoryURL)
  );

  if (!packageRefUuid) {
    packageRefUuid = project.generateUuid();
    objects.XCRemoteSwiftPackageReference[packageRefUuid] = {
      isa: 'XCRemoteSwiftPackageReference',
      repositoryURL: JSON.stringify(repositoryURL),
      requirement: {
        kind: 'exactVersion',
        version: exactVersion,
      },
    };
    objects.XCRemoteSwiftPackageReference[`${packageRefUuid}_comment`] =
      'XCRemoteSwiftPackageReference "m1-ios-spm"';

    // Register the reference on the project object itself
    // (Xcode reads packageReferences off PBXProject, not just the target).
    const rootObjectUuid = project.hash.project.rootObject;
    const rootObject = objects.PBXProject[rootObjectUuid];
    rootObject.packageReferences = rootObject.packageReferences || [];
    if (!rootObject.packageReferences.some((ref) => ref.value === packageRefUuid)) {
      rootObject.packageReferences.push({
        value: packageRefUuid,
        comment: 'XCRemoteSwiftPackageReference "m1-ios-spm"',
      });
    }
  }

  // --- 2. Find or create a XCSwiftPackageProductDependency per product ------
  const target = project.getFirstTarget();
  const nativeTarget = objects.PBXNativeTarget[target.uuid];
  nativeTarget.packageProductDependencies = nativeTarget.packageProductDependencies || [];

  // Also link SPM products to the pod target (RNEvsKit) so that the Swift
  // module can import EvsKit and NativeEvsKit. The pod is compiled as a
  // separate target and needs the SPM products linked to it.
  const podTargetUuid = Object.keys(objects.PBXNativeTarget).find(
    (key) =>
      !key.endsWith('_comment') &&
      objects.PBXNativeTarget[key].productReference &&
      objects.PBXNativeTarget[key].buildConfigurationList
  );
  const podTarget = podTargetUuid ? objects.PBXNativeTarget[podTargetUuid] : null;

  const frameworksBuildPhaseUuid = nativeTarget.buildPhases.find((phase) =>
    /Frameworks/i.test(phase.comment || '')
  )?.value;
  const frameworksPhase = frameworksBuildPhaseUuid
    ? objects.PBXFrameworksBuildPhase[frameworksBuildPhaseUuid]
    : undefined;

  for (const productName of productNames) {
    let productDepUuid = Object.keys(objects.XCSwiftPackageProductDependency).find(
      (key) =>
        !key.endsWith('_comment') &&
        objects.XCSwiftPackageProductDependency[key].productName === productName
    );

    if (!productDepUuid) {
      productDepUuid = project.generateUuid();
      objects.XCSwiftPackageProductDependency[productDepUuid] = {
        isa: 'XCSwiftPackageProductDependency',
        package: packageRefUuid,
        productName,
      };
      objects.XCSwiftPackageProductDependency[`${productDepUuid}_comment`] = productName;
    }

    // Add to app target
    if (
      !nativeTarget.packageProductDependencies.some((dep) => dep.value === productDepUuid)
    ) {
      nativeTarget.packageProductDependencies.push({
        value: productDepUuid,
        comment: productName,
      });
    }

    // Also add to pod target (RNEvsKit) so the Swift module can import these
    if (podTarget) {
      podTarget.packageProductDependencies = podTarget.packageProductDependencies || [];
      if (
        !podTarget.packageProductDependencies.some((dep) => dep.value === productDepUuid)
      ) {
        podTarget.packageProductDependencies.push({
          value: productDepUuid,
          comment: productName,
        });
      }
    }

    // Link the product into the app binary via the Frameworks build phase,
    // same as Xcode would if you added it through the UI.
    if (frameworksPhase) {
      objects.PBXBuildFile = objects.PBXBuildFile || {};
      const alreadyLinked = Object.keys(objects.PBXBuildFile).some(
        (key) =>
          !key.endsWith('_comment') &&
          objects.PBXBuildFile[key].productRef === productDepUuid
      );

      if (!alreadyLinked) {
        const buildFileUuid = project.generateUuid();
        objects.PBXBuildFile[buildFileUuid] = {
          isa: 'PBXBuildFile',
          productRef: productDepUuid,
          productRef_comment: productName,
        };
        objects.PBXBuildFile[`${buildFileUuid}_comment`] = `${productName} in Frameworks`;

        frameworksPhase.files = frameworksPhase.files || [];
        frameworksPhase.files.push({
          value: buildFileUuid,
          comment: `${productName} in Frameworks`,
        });
      }
    }
  }
}

/**
 * Adds the EvsKitModule.swift source files directly to the app target's
 * Sources build phase so they can import SPM products (EvsKit, NativeEvsKit).
 * CocoaPods targets cannot consume SPM packages, so the podspec has empty
 * source_files and the actual sources are compiled via the app target instead.
 */
function addModuleSourcesToAppTarget(project, projectRoot) {
  const objects = project.hash.project.objects;
  const target = project.getFirstTarget();
  const nativeTarget = objects.PBXNativeTarget[target.uuid];

  // Find the Sources build phase
  const sourcesPhaseUuid = nativeTarget.buildPhases.find((phase) =>
    /Sources/i.test(phase.comment || '')
  )?.value;
  const sourcesPhase = sourcesPhaseUuid
    ? objects.PBXSourcesBuildPhase[sourcesPhaseUuid]
    : undefined;
  if (!sourcesPhase) return;

  const moduleDir = path.join(path.dirname(__dirname), 'ios');
  const sourceFiles = fs.readdirSync(moduleDir).filter((f) => f.endsWith('.swift'));

  // The Xcode project lives in <projectRoot>/ios, so the file reference path
  // must be relative to that directory (e.g. "../../react-native-evskit/ios").
  const iosDir = path.join(projectRoot, 'ios');
  const moduleDirRelativeToIos = path.relative(iosDir, moduleDir);

  for (const fileName of sourceFiles) {
    // Check if already added
    const alreadyAdded = Object.keys(objects.PBXBuildFile || {}).some(
      (key) =>
        !key.endsWith('_comment') &&
        objects.PBXBuildFile[key].fileRef &&
        objects.PBXBuildFile[key].fileRef_comment === fileName
    );
    if (alreadyAdded) continue;

    // Add file reference
    const fileRefUuid = project.generateUuid();
    objects.PBXFileReference = objects.PBXFileReference || {};
    objects.PBXFileReference[fileRefUuid] = {
      isa: 'PBXFileReference',
      explicitFileType: 'sourcecode.swift',
      fileEncoding: 4,
      name: fileName,
      path: path.join(moduleDirRelativeToIos, fileName),
      // Quotes must be embedded in the string: the `xcode` lib's pbxWriter
      // does not add quotes itself, and angle brackets (<>) are invalid
      // unquoted in the pbxproj format (e.g. `sourceTree = "<group>";`).
      sourceTree: '"<group>"',
    };
    objects.PBXFileReference[`${fileRefUuid}_comment`] = fileName;

    // Add build file
    const buildFileUuid = project.generateUuid();
    objects.PBXBuildFile = objects.PBXBuildFile || {};
    objects.PBXBuildFile[buildFileUuid] = {
      isa: 'PBXBuildFile',
      fileRef: fileRefUuid,
    };
    objects.PBXBuildFile[`${buildFileUuid}_comment`] = `${fileName} in Sources`;

    // Add to Sources build phase
    sourcesPhase.files = sourcesPhase.files || [];
    sourcesPhase.files.push({
      value: buildFileUuid,
      comment: `${fileName} in Sources`,
    });
  }
}

module.exports = withEverysightSPM;
