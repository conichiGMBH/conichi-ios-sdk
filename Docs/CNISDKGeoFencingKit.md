## conichiSDK GeoFencing Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)

### Overview

The idea of the `conichiSDK GeoFencingKit` is to track the user and notify about something when it enters the one of the conichi's hotel. The official documentation from Apple can be found [there](https://developer.apple.com/library/ios/documentation/UserExperience/Conceptual/LocationAwarenessPG/RegionMonitoring/RegionMonitoring.html#//apple_ref/doc/uid/TP40009497-CH9-SW1).

### Getting Started

#### Install as a framework

To use `conichiSDK CoreKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the latest build of `CNISDKCoreKit.framework.zip` and `CNISDKGeoFencingKit.framework.zip`. Copy the extracted frameworks into your project.

#### Install via CocoaPods

The preferred way to integrate `conichiSDK GeoFencingKit` is via `CocoaPods`. Add the following lines to your `Podfile` depending on your kit configuration:
```ruby
source 'git@github.com:conichiGMBH/ios-specs.git'

pod 'CNISDKGeoFencingKit'
```
Run `pod install`, and you should now have the latest `conichiSDK GeoFencingKit` release.

### Getting Started

Sections below explain major and the most important parts of the `conichiSDK GeoFencingKit`. For the complete documentation please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKGeoFencingKit/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md).

#### Initialization

Example below shows the simplest setup `conichiSDK GeoFencingKit`

```objective-c
  //Create a configuration for the geo fencing
  CNISDKGeoFencingKitConfiguration *geoFencingKitConfiguration = [CNISDKGeoFencingKitConfiguration configurationWithBlock:^(id<CNISDKMutableGeoFencingKitConfiguration> \_Nonnull mutableConfiguration) {
        mutableConfiguration.geoFenceRadiusInMeters = 50;
  }];

  //Create a geo fencing kit bundle
  CNISDKKitBundle *geoFencingKit = [CNISDKKitBundle bundleWithKit:CNISDKGeoFencingKit configuration:geoFencingKitConfiguration]

  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ geoFencingKit ];
    mutableConfiguration.environment = CNISDKEnvironmentSandbox;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```

After succeeded setup `sdk` could send to it's `delegate` following messages:
* `conichiSDKGeofencing:didFailWithError:`
* `conichiSDKGeofencing:didEnterRegion:`
* `conichiSDKGeofencing:didExitRegion:`
