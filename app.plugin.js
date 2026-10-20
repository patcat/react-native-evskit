const withEverysightBundleResources = require('./plugin/withEverysightBundleResources');
const withEvsScreens = require('./plugin/withEvsScreens');

module.exports = (config = {}, { bundleResources = [], screens = {} } = {}) => {
  let result = config;
  result = withEverysightBundleResources(result, { bundleResources });
  result = withEvsScreens(result, { screens });
  return result;
};