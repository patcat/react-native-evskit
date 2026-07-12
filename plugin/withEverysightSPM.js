const { withXcodeProject } = require('@expo/config-plugins');

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

  return withXcodeProject(config, (config) => {
    const project = config.modResults;
    addSwiftPackage(project, packageURL, versionRequirement, products);
    return config;
  });
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

    if (
      !nativeTarget.packageProductDependencies.some((dep) => dep.value === productDepUuid)
    ) {
      nativeTarget.packageProductDependencies.push({
        value: productDepUuid,
        comment: productName,
      });
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

module.exports = withEverysightSPM;
