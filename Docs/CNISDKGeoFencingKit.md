## conichiSDK GeoFencing Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)

### Overview

The idea of the `conichiSDK GeoFencingKit` is to track the user and notify about something when it enters the one of the conichi's hotel. The official documentation from Apple can be found [there](https://developer.apple.com/library/ios/documentation/UserExperience/Conceptual/LocationAwarenessPG/RegionMonitoring/RegionMonitoring.html#//apple_ref/doc/uid/TP40009497-CH9-SW1).

### Getting Started

### Installation

#### Install as a framework

To use `CNISDKGeoFencingKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop `CNISDKCoreKit.framework`, `Conichi_Meta.framework`, `Conichi_Authentication.framework`, `CNISDKGeoFencingKit.framework` and `Conichi_Errors.framework` to the `Project target -> general -> Embedded Binaries`. 

#### Install via CocoaPods
The preferred way to integrate `CNISDKGeoFencingKit` is via `CocoaPods`. Add the following line to your `Podfile`:
```ruby
pod 'CNISDKGeoFencingKit'
```
Run `pod install`, and you should now have the latest `CNISDKGeoFencingKit` release.

#### Install via Carthage

To integrate `CNISDKGeoFencingKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKGeoFencingKit` in your Carthage folder.

### Getting Started

Sections below explain major and the most important parts of the `conichiSDK GeoFencingKit`. For the complete documentation please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKGeoFencingKit/apple_doc/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md).

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
