require 'json'

package = JSON.parse(File.read(File.join(__dir__, '..', 'package.json')))

Pod::Spec.new do |s|
  s.name           = 'RNEvsKit'
  s.version        = package['version']
  s.summary        = package['description']
  s.author         = ''
  s.homepage       = 'https://github.com/patcat/react-native-evskit'
  s.platforms      = { ios: '15.1' }
  s.source         = { git: '' }
  s.static_framework = true

  s.dependency 'ExpoModulesCore'

  # The Everysight SDK ships as prebuilt xcframeworks (EvsKit + NativeEvsKit)
  # published on GitHub releases — there is no CocoaPods distribution and
  # CocoaPods targets cannot consume Swift Package Manager packages. So we
  # vendor the SDK xcframeworks here and link them through CocoaPods.
  #
  # The pod also compiles EvsKitModule.swift itself, which is what Expo's
  # autolinking (ExpoModulesProvider.swift) expects: it does
  # `import RNEvsKit` and references the module class directly.
  s.source_files      = ['*.swift']
  s.vendored_frameworks = ['EvsKit.xcframework', 'NativeEvsKit.xcframework']
end