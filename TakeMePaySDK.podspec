Pod::Spec.new do |s|
  s.name         = "TakeMePaySDK"
  s.version      = "0.0.19"
  s.summary      = "TakeMe Pay SDK"
  s.description  = <<-DESC
  TakeMe Pay SDK provides payments integration service for developers.
                   DESC

  s.homepage     = "https://takemepay.fun"
  s.license      = "MIT"
  s.author       = "TakeMePay"
  s.source       = { :git => "https://github.com/takeme-pay/TakeMePaySDK-Core.git" }
  s.source_files = "TakeMePaySDK/**/*"
  s.requires_arc = true
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'TakeMePaySDK.framework'
end
