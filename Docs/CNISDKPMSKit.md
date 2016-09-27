## conichiSDK PMS Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKCoreKit/docs/CNISDKCoreKit.md)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPaymentKit/docs/CNISDKPaymentKit.md)

### Overview

PMS is an abbreviation of Property Management System. The `conichiSDK PMSKit` extends the `conichiSDK CoreKit` with the ability to do a mobile check-in/check-out through the PMS. The guest with this `kit` is able to find reservation, checkin into hotel and checkout from hotel.

### Getting Started

#### Install as a framework

To use `conichiSDK CoreKit`, head on over to the [releases](https://github.com/conichiGMBH/ios-sdk/releases) page, and download the latest build of `CNISDKCoreKit.framework.zip`, `CNISDKPaymentKit.framework.zip` and `CNISDKPMSKit.framework.zip`. Copy the extracted frameworks into your project.

#### Install via CocoaPods

The preferred way to integrate `conichiSDK PMSKit` is via `CocoaPods`. Add the following lines to your `Podfile` depending on your kit configuration:
```ruby
source 'git@github.com:conichiGMBH/ios-specs.git'

pod 'CNISDKPMSKit'
```
Run `pod install`, and you should now have the latest `conichiSDK PMSKit` release.

### Getting Started

Sections below explain major and the most important parts of the `conichiSDK PMSKit`. For the complete documentation please refer to this [page](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKGeoFencingKit/docs/apple_doc/html/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKCoreKit/docs/CNISDKCoreKit.md) and [CNISDKPaymentKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPaymentKit/docs/CNISDKPaymentKit.md).

#### Initialization

Example below shows the simplest setup `conichiSDK PMSKit`

```objective-c
  //Create a pms kit bundle
  CNISDKKitBundle *pmsKit = [CNISDKKitBundle bundleWithKit:CNISDKPMSKit configuration:nil]

  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ pmsKit ];
    mutableConfiguration.environment = CNISDKEnvironmentSandbox;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```

#### Managing reservation

__Important__ to manage a reservation the guest has to be authorized.  
The logic of managing guest's reservation is inside `CNISDKAPIManager+Reservation` category. Please refer to the [documentation](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPMSKit/docs/apple_doc/html/index.html) to see the whole public interface.
