Pod::Spec.new do |s|
  s.name         = 'CNISDKCoreKit'
  s.version      = '4.1.1'
  s.summary      = "Official conichi SDK for iOS to access core functionality of conichi Platform."

  s.description  = <<-DESC
                    Conichi SDK simplifies the use of Apple’s iBeacon technology with conichi's hardware. In only few steps, you will be able to communicate with our beacons and receive actions confirmation by a conichi venue.
                   DESC

  s.license      = { :type => "Conichi License", :file => "LICENSE" }
  s.homepage     = 'https://github.com/conichiGMBH'
  s.author       = { 'conichiGMBH' => 'support@conichi.com' }

  s.source                = { :git => "https://github.com/conichiGMBH/conichi-ios-sdk.git", :tag => s.version.to_s}
  s.platform              = :ios, '8.0'
  s.ios.deployment_target = '8.0'
  s.source_files          = 'Frameworks/CNISDKCoreKit.framework/Headers/*.h'
  s.requires_arc          = true
  s.module_name           = 'CNISDKCoreKit'
  s.public_header_files   = 'Frameworks/CNISDKCoreKit.framework/Headers/*.h'
  s.vendored_frameworks   = 'Frameworks/CNISDKCoreKit.framework', 'Frameworks/Conichi_Authentication.framework', 'Frameworks/Conichi_Errors.framework', 'Frameworks/Conichi_Meta.framework'
  s.preserve_paths        = 'Frameworks/CNISDKCoreKit.framework', 'Frameworks/Conichi_Authentication.framework', 'Frameworks/Conichi_Errors.framework', 'Frameworks/Conichi_Meta.framework'

  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }
end
