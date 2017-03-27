## conichiSDK Core Kit

### Overview

This is a heart of the `conichiSDK`. It contains the base models, base helpers and managers. This `kit` is also a parent dependency for any of the other available kits.

### Installation

#### Install as a framework

To use `CNISDKCoreKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop `CNISDKCoreKit.framework`, `Conichi_Meta.framework`, `Conichi_Authentication.framework` and `Conichi_Errors.framework` to the `Project target -> general -> Embedded Binaries`.

#### Install via CocoaPods
The preferred way to integrate `CNISDKCoreKit` is via `CocoaPods`. Add the following line to your `Podfile`:
```ruby
pod 'CNISDKCoreKit'
```
Run `pod install`, and you should now have the latest `CNISDKCoreKit` release.

#### Install via Carthage

To integrate `CNISDKCoreKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKCoreKit` in your Carthage folder.

### Getting Started

Sections below explain major and the most important parts of the `sdk`, for the complete documentation of the kit please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKCoreKit/apple_doc/index.html)

#### Initialization

Example below shows the simplest setup `conichiSDK CoreKit` that points our `sandbox` server.

```objective-c
  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ ];
    mutableConfiguration.environment = CNISDKEnvironmentSandbox;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```

After this setup you have an access to the instance of the `[CNISDK sharedInstance]`.

#### Error handling

Conichi provides the unify error codes for each error comes from `sdk`. All error codes can be found in `CNIError.h` class.
To make `sdk` able to convert different error codes into `CNIErrorCode` there is a protocol `CNIErrorCodeConverter`. Out of the box there are 4 predefined converters:
* CNINSURLErrorConverter
* CNIHTTPResponseErrorConverter
* CNIConichiResponseErrorConverter
* CNIPaymentProviderErrorConverter
During the initialization state, client __has to__ add required converters and order of adding means the priority - first is highest. The suggested flow is:
```objective-c
[CNIError addCodeConvertor:[CNIConichiResponseErrorConverter class]];
[CNIError addCodeConvertor:[CNINSURLErrorConverter class]];
[CNIError addCodeConvertor:[CNIHTTPResponseErrorConverter class]];
```
And `CNIPaymentProviderErrorConverter` will be used automatically when working with Payment.

#### Authorization

To start any real actions with guest `sdk` requires the guest to be authorized. All methods related to `authorization` are in `CNISDKAPIManager+Authentication` category. The example below shows how to do a sign up for a new guest.

```objective-c
  //Create a sign up request
  CNISDKSignUpRequestInfo *info = [[CNISDKSignUpRequestInfo alloc] init];
  info.firstName = @"Jenessa";
  info.lastName = @"Gretta";
  info.email = @"jenessa.gretta@gmail.com";
  info.password = @"strongestpasswordever=)";

  //Perform sign up
  [CNISDKAPIManager manager] signUpWithRequest:info completion:^(CNISDKGuest *guest, NSError *error){
    if (error) {
      //handle error during the sign up
    }
    else {
      //handle authorized guest
    }
  }];
```

`sdk` could send it's `delegate` following messages regarding the authorization:
* `conichiSDKDidChangeAuthorizationStatus:reason:`

#### Guest recognition

To make guest visible for our beacons the `sdk` has to start monitoring those beacons.  
Prerequisites to start monitoring:
* Guest is authorized
* Background location tracking is enabled
* Bluetooth is on

The example below shows how to start/stop monitoring, assuming all the prerequisites are ready
```objective-c
  CNISDK *sdk = [CNISDK sharedInstance];
  [sdk startMonitoring];
  [sdk stopMonitoring]
```

During the monitoring state `sdk` could send it's `delegate` following messages:
* `conichiSDKDidDiscoverVenue:`
* `conichiSDKDidDiscoverRegion:inVenue:`
* `conichiSDKDidStartTrackingGuestInRegion:inVenue:trackin:`
* `conichiSDKDidFailToStartTrackingGuestInRegion:inVenue:withError:`
* `conichiSDKDidStopTrackingGuestInRegion:inVenue:`
* `conichiSDKDidFailToStopTrackingGuestInRegion:inVenue:withError:`
* `conichiSDKDidLeaveRegion:inVenue:`
* `conichiSDKDidLeaveVenue:`
* `conichiSDKDidFailTrackingLocationWithError:`
* `conichiSDKShouldOpenTrackinInRegion:venue:callback:`
