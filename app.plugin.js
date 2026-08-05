const withEverysightBundleResources = require('./plugin/withEverysightBundleResources');

module.exports = (config = {}, { bundleResources = [] } = {}) => {
  let result = config;
  result = withEverysightBundleResources(result, { bundleResources });
  return result;
};