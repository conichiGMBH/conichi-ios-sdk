## conichiSDK PMS Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md)

### Overview

PMS is an abbreviation of Property Management System. The `conichiSDK PMSKit` extends the `conichiSDK CoreKit` with the ability to do a mobile check-in/check-out through the PMS. The guest with this `kit` is able to find reservation, checkin into hotel and checkout from hotel.

### Getting Started

#### Install as a framework

To use `CNISDKPMSKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop `CNISDKCoreKit.framework`, `Conichi_Meta.framework`, `Conichi_Authentication.framework`, `CNISDKPMSKit.framework`, `CNISDKPaymentKit.framework`, `PaylevenFramework.framework` and `Conichi_Errors.framework` to the `Project target -> general -> Embedded Binaries`. 

#### Install via CocoaPods
The preferred way to integrate `CNISDKPMSKit` is via `CocoaPods`. Add the following line to your `Podfile`:
```ruby
pod 'CNISDKPMSKit'
```
Run `pod install`, and you should now have the latest `CNISDKPMSKit` release.

#### Install via Carthage

To integrate `CNISDKPMSKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKPMSKit` in your Carthage folder.

### Getting Started

Sections below explain major and the most important parts of the `conichiSDK PMSKit`. For the complete documentation please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKPMSKit/apple_doc/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md) and [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md).

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
The logic of managing guest's reservation is inside `CNISDKAPIManager+Reservation` category. Please refer to the [documentation](https://conichigmbh.github.io/ios/docs/CNISDKPMSKit/apple_doc/Categories/CNISDKAPIManager+Reservation.html) to see the whole public interface.
