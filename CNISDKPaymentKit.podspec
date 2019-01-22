Pod::Spec.new do |s|
  s.name         = 'CNISDKPaymentKit'
  s.version      = '4.1.33'
  s.summary      = "Payment kit extends the CNISDKCoreKit with payment functionality."

  s.description  = <<-DESC
                    Conichi SDK simplifies the use of Apple’s iBeacon technology with conichi's hardware. In only few steps, you will be able to communicate with our beacons and receive actions confirmation by a conichi venue. With paymentKit it also enables the mobile payment.
                   DESC

  s.license      = { :type => "Conichi License", :file => "LICENSE" }
  s.homepage     = 'https://github.com/conichiGMBH'
  s.author       = { 'conichiGMBH' => 'support@conichi.com' }

  s.source                = { :git => "https://github.com/conichiGMBH/conichi-ios-sdk.git", :tag => s.version.to_s}
  s.platform              = :ios, '9.0'
  s.ios.deployment_target = '9.0'
  s.source_files          = 'Frameworks/CNISDKPaymentKit.framework/Headers/*.h'
  s.requires_arc          = true
  s.module_name           = 'CNISDKPaymentKit'
  s.public_header_files   = 'Frameworks/CNISDKPaymentKit.framework/Headers/*.h'
  s.vendored_frameworks   = 'Frameworks/CNISDKPaymentKit.framework'
  s.preserve_paths        = 'Frameworks/CNISDKPaymentKit.framework'
  s.xcconfig              = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }

  s.dependency 'CNISDKCoreKit', "#{s.version}"
end
