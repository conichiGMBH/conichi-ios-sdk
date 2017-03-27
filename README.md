<img src="https://monosnap.com/file/wJq9ICcBftDMRBGEs6ksf7sNwojalz.png" height="150" width="479" />

## conichiSDK for iOS

[![Requires](https://img.shields.io/badge/Requires-iOS%208+-blue.svg?style=flat)]()
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/CNISDKCoreKit.svg)](https://img.shields.io/cocoapods/v/CNISDKCoreKit.svg)
[![Build Status](https://travis-ci.org/conichiGMBH/conichi-ios-sdk.svg?branch=master)](https://travis-ci.org/conichiGMBH/conichi-ios-sdk)


### Meta
* __Point People:__ [@antondomashnev](https://github.com/Antondomashnev)

### Overview
`conichiSDK` for iOS is a tool that allows users to be recognized around the Beacon through Bluetooth Low Energy (BLE). Operated as a Software-as-a-Service (SaaS) solution, conichi’s features focus on personal guest recognition, fast-forwarding check-in, enabling mobile payment (thus check-out), identifying personal preferences, rewarding loyalty.

#### Kits

`conichiSDK` is following the idea of splitting functionality into different modules (so called `kit`) and now there are 4 modules available.

* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md) - provides beacon recognition, simple check-in/check-out, and guest personalization
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md) - provides managing of payment instruments, checkout request with payment
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKGeoFencingKit.md) - provides conichi's venues tracking by apple geofencing
* [CNISDKPMSKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPMSKit.md) - provides mobile check-in/check-out with property management system integration  

### Getting Started

#### Installation

#### Install as a framework

To use `CNISDKCoreKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop all frameworks to the `Project target -> general -> Embedded Binaries`.

![Alt text](https://monosnap.com/file/hTEOYYDWNsL2KHqeVP9psO7aGU4ZRc.png)

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

#### Partial Installation

Following the links below you can find the instructions in the __Getting Started__ section how to install specific `kit`:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKGeoFencingKit.md)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md)
* [CNISDKPMSKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPMSKit.md)

#### Update info plist
Then, you must add a NSLocationAlwaysUsageDescription or NSLocationWhenInUseUsageDescription key to your project’s Info.plist containing the message to be displayed to the user at the prompt.

```objective-c
<key>NSLocationAlwaysUsageDescription</key>
<string>This app needs your location so you can be recognized in the conichi Hotel</string>
```

#### Enable some capabilities

Conichi cares about the security and therefore the SDK stores the authorization information in the iOS Keychain, but to be available to read and write values even if the SDK is not running, iOS system requires the `Keychain Sharing` capability.

`Target -> Capabilities -> Keychain Sharing - Turn the switch On`.

![Alt text](https://monosnap.com/file/Fgjm7ziUSjarcbDIRgJshGvXUiElh3.png)

And you're off! Take a look at the public documentation and start building.

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

## Documentation

Documentation for each kit is available at the following links:
* [CNISDKCoreKit](https://conichigmbh.github.io/ios/docs/CNISDKCoreKit/apple_doc/index.html)
* [CNISDKPaymentKit](https://conichigmbh.github.io/ios/docs/CNISDKPaymentKit/apple_doc/index.html)
* [CNISDKGeoFencingKit](https://conichigmbh.github.io/ios/docs/CNISDKGeoFencingKit/apple_doc/index.html)
* [CNISDKPMSKit](https://conichigmbh.github.io/ios/docs/CNISDKPMSKit/apple_doc/index.html)  

Documentation about Push Notifications integration can be found here:
* [Push Notifications](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/PushNotifications.md)

## Changelog

To see what has changed in recent versions of `conichiSDK`, see the [CHANGELOG](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/CHANGELOG.yml).

## License

```
Copyright (c) 2016-present, сonichi GmbH.
All rights reserved.
```
