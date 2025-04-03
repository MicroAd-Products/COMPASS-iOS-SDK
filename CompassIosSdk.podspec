Pod::Spec.new do |spec|
  spec.name         = "CompassIosSdk"
  spec.version      = "2.0.1"
  spec.summary      = "COMPASS iOS SDK"
  spec.description  = <<-DESC
    COMPASS iOS SDK is an iOS framework developed and maintained by MicroAd, Inc. for displaying advertisements in native applications.
                   DESC
  spec.homepage     = "https://www.microad.co.jp/"
  spec.license      = { :type => "Custom", :file => "LICENSE" }
  spec.author       = "MicroAd"
  spec.ios.deployment_target = "15.0"
  spec.source       = { :git => "https://github.com/MicroAd-Products/COMPASS-iOS-SDK.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "CompassIosSdk.xcframework"
end
