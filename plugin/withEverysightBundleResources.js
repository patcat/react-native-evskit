const { withXcodeProject } = require("@expo/config-plugins");
const path = require("path");

/**
 * Config plugin that adds files (e.g. sdk.key, app.key) as Xcode bundle
 * resources so they are included in the app binary.
 *
 * Usage in app.config.ts:
 *   plugins: [
 *     ['react-native-evskit', { bundleResources: ['./sdk.key'] }],
 *   ]
 *
 * Adds PBXBuildFile + PBXFileReference entries directly to the pbxproj
 * objects, avoiding the pbxFile constructor which produces undefined values
 * that CocoaPods cannot parse.
 */
function withEverysightBundleResources(config, { bundleResources = [] } = {}) {
  if (!bundleResources.length) {
    return config;
  }

  return withXcodeProject(config, (config) => {
    const project = config.modResults;
    const objects = project.hash.project.objects;

    // Initialize required object sections
    objects.PBXBuildFile = objects.PBXBuildFile || {};
    objects.PBXFileReference = objects.PBXFileReference || {};

    for (const relativePath of bundleResources) {
      const resolvedPath = path.join(
        config.modRequest.projectRoot,
        relativePath,
      );
      const fileName = path.basename(resolvedPath);

      // Skip if already exists
      const existingRef = Object.keys(objects.PBXFileReference).find(
        (key) =>
          !key.endsWith("_comment") &&
          objects.PBXFileReference[key].name === fileName,
      );
      if (existingRef) continue;

      // The Xcode project lives in <projectRoot>/ios, so the file reference
      // path must be relative to that directory (e.g. "../sdk.key").
      const iosDir = path.join(config.modRequest.projectRoot, "ios");
      const relativeToIos = path.relative(iosDir, resolvedPath);

      // Create PBXFileReference
      const fileRefUuid = project.generateUuid();
      objects.PBXFileReference[fileRefUuid] = {
        isa: "PBXFileReference",
        name: `"${fileName}"`,
        path: `"${relativeToIos}"`,
        // Quotes must be embedded in the string: the `xcode` lib's pbxWriter
        // does not add quotes itself, and angle brackets (<>) are invalid
        // unquoted in the pbxproj format (e.g. `sourceTree = "<group>";`).
        sourceTree: '"<group>"',
      };
      objects.PBXFileReference[`${fileRefUuid}_comment`] = fileName;

      // Create PBXBuildFile
      const buildFileUuid = project.generateUuid();
      objects.PBXBuildFile[buildFileUuid] = {
        isa: "PBXBuildFile",
        fileRef: fileRefUuid,
      };
      objects.PBXBuildFile[`${buildFileUuid}_comment`] =
        `${fileName} in Resources`;

      // Add to Resources build phase
      const target = project.getFirstTarget();
      const nativeTarget = objects.PBXNativeTarget[target.uuid];
      const resourcesPhaseUuid = nativeTarget.buildPhases.find((phase) =>
        /Resources/i.test(phase.comment || ""),
      )?.value;
      if (resourcesPhaseUuid && objects.PBXResourcesBuildPhase) {
        const resourcesPhase =
          objects.PBXResourcesBuildPhase[resourcesPhaseUuid];
        if (resourcesPhase) {
          resourcesPhase.files = resourcesPhase.files || [];
          resourcesPhase.files.push({
            value: buildFileUuid,
            comment: `${fileName} in Resources`,
          });
        }
      }

      // Add to Resources group
      const resourcesGroupKey = Object.keys(objects.PBXGroup || {}).find(
        (key) =>
          !key.endsWith("_comment") &&
          objects.PBXGroup[key].name === "Resources",
      );
      if (resourcesGroupKey) {
        objects.PBXGroup[resourcesGroupKey].children =
          objects.PBXGroup[resourcesGroupKey].children || [];
        objects.PBXGroup[resourcesGroupKey].children.push({
          value: fileRefUuid,
          comment: fileName,
        });
      }
    }

    return config;
  });
}

module.exports = withEverysightBundleResources;
