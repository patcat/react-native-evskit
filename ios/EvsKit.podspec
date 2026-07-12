require 'json'

package = JSON.parse(File.read(File.join(__dir__, '..', 'package.json')))

Pod::Spec.new do |s|
  s.name           = 'EvsKit'
  s.version        = package['version']
  s.summary        = package['description']
  s.author         = ''
  s.homepage       = 'https://github.com/your-org/react-native-evskit'
  s.platforms      = { ios: '15.1' }
  s.source         = { git: '' }
  s.static_framework = true

  s.dependency 'ExpoModulesCore'

  # Everysight's Maverick SDK is distributed only via Swift Package Manager
  # (https://github.com/everysight-maverick/m1-ios-spm.git — confirmed by
  # reading that repo: it's a Package.swift with two binaryTarget entries
  # for EvsKit.xcframework.zip / NativeEvsKit.xcframework.zip, no source).
  # CocoaPods can't consume SPM packages directly, so it's NOT declared as a
  # pod dependency here. Instead, the `withEverysightSPM` config plugin
  # (see /plugin) adds it to the host Xcode project automatically during
  # `expo prebuild`.

  s.source_files = "**/*.{h,m,swift}"
end
