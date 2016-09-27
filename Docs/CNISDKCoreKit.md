## conichiSDK Core Kit

### Overview

This is a heart of the `conichiSDK`. It contains the base models, base helpers and managers. This `kit` is also a parent dependency for any of the other available kits.

### Installation

#### Install as a framework

To use `conichiSDK CoreKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the latest build of `CNISDKCoreKit.framework.zip`. Copy the extracted framework into your project.

#### Install via CocoaPods
The preferred way to integrate `conichiSDK CoreKit` is via `CocoaPods`. Add the following lines to your `Podfile` depending on your kit configuration:
```ruby
source 'git@github.com:conichiGMBH/ios-specs.git'

pod 'CNISDKCoreKit'
```
Run `pod install`, and you should now have the latest `conichiSDK CoreKit` release.

### Getting Started

Sections below explain major and the most important parts of the `sdk`, for the complete documentation of the kit please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKCoreKit/index.html)

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
