Pod::Spec.new do |s|
  s.name         = 'CNISDKPMSKit'
  s.version      = '3.1.0'
  s.summary      = "PMS kit extends the CNISDKCoreKit with property management system functionality."

  s.description  = <<-DESC
                    Conichi SDK simplifies the use of Apple’s iBeacon technology with conichi's hardware. In only few steps, you will be able to communicate with our beacons and receive actions confirmation by a conichi venue. With paymentKit it also enables the mobile payment.
                   DESC

  s.license      = { :type => "Conichi License", :file => "LICENSE" }
  s.homepage     = 'https://github.com/conichiGMBH'
  s.author       = { 'conichiGMBH' => 'support@conichi.com' }

  s.source                = { :git => "https://github.com/conichiGMBH/conichi-ios-sdk.git", :tag => s.version.to_s}
  s.platform              = :ios, '8.0'
  s.ios.deployment_target = '8.0'
  s.source_files          = 'Frameworks/CNISDKPMSKit.framework/Headers/*.h'
  s.requires_arc          = true
  s.module_name           = 'CNISDKPMSKit'
  s.public_header_files   = 'Frameworks/CNISDKPMSKit.framework/Headers/*.h'
  s.vendored_frameworks   = 'Frameworks/CNISDKPMSKit.framework'
  s.preserve_paths        = 'Frameworks/CNISDKPMSKit.framework'
  s.xcconfig              = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }

  s.dependency 'CNISDKCoreKit', "#{s.version}"
  s.dependency 'CNISDKPaymentKit', "#{s.version}"
end
