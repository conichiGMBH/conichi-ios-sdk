## conichiSDK Payleven Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md)
* [Payleven iOS SDK](https://github.com/payleven/Mobile-API-iOS)

### Overview

The `CNISDKPaylevenKit` provides the way to manage guest's credit cards by using [Payleven](https://payleven.de/) as a payment provider.  

### Installation

#### Install as a framework

To use `CNISDKPaylevenKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop `CNISDKCoreKit.framework`, `Conichi_Meta.framework`, `Conichi_Authentication.framework`, `CNISDKPaymentKit.framework`, `CNISDKPaylevenKit.framework`,  `PaylevenFramework.framework` and `Conichi_Errors.framework` to the `Project target -> general -> Embedded Binaries`.

#### Install via CocoaPods
The preferred way to integrate `CNISDKPaylevenKit` is via `CocoaPods`. Add the following line to your `Podfile`:
```ruby
pod 'CNISDKPaylevenKit'
```
Run `pod install`, and you should now have the latest `CNISDKPaylevenKit` release.

#### Install via Carthage

To integrate `CNISDKPaylevenKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKPaylevenKit` in your Carthage folder.

### Getting Started

Sections below explain major and the most important parts of the `CNISDKPaylevenKit`. For the complete documentation please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKPaylevenKit/apple_doc/html/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md) and [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md).

#### Initialization

Example below shows the simplest setup `CNISDKPaylevenKit`

```objective-c
  //Create a configuration for the payment
  CNISDKPaylevenKitConfiguration *paylevenKitConfiguration = [CNISDKPaylevenKitConfiguration configurationWithBlock:^(id<CNISDKMutablePaylevenKitConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.paymentKey = "your-payment-key-from-payleven";
  }];

  //Create a payment kit bundle
  CNISDKKitBundle *paylevenKit = [CNISDKKitBundle bundleWithKit:CNISDKPaylevenKit configuration:paylevenKitConfiguration]

  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ paylevenKit ];
    mutableConfiguration.environment = CNISDKEnvironmentSandbox;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```

#### Managing of credit cards

__Important__ to manage credit cards guest has to be authorized.  
To manager credit cards for the specific `CNISDKGuest` please refer to `paymentInstrumentManager`:

```
[CNISDKPayleven sharedInstance].paymentInstrumentManager
```

The manager conforms to `CNISDKPaymentInstrumentManager` protocol that describes the all possible actions.
