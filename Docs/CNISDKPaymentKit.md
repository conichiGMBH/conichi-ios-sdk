## conichiSDK Payment Kit

### Dependency

This `kit` is dependent on the following:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)
* [Payleven iOS SDK](https://github.com/payleven/Mobile-API-iOS)

### Overview

The `conichiSDK PaymentKit` provides the way to manage guest's credit cards - add, edit or delete. Also, it adds the ability to add additional items for the guest's pre check-in or checkout request.  
__Important__ currently the `kit` supports only the [Payleven](https://payleven.de/) as a payment provider.

### Installation

#### Install as a framework

To use `CNISDKPaymentKit`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop `CNISDKCoreKit.framework`, `Conichi_Meta.framework`, `Conichi_Authentication.framework`, `CNISDKPaymentKit.framework`, `PaylevenFramework.framework` and `Conichi_Errors.framework` to the `Project target -> general -> Embedded Binaries`. 

#### Install via CocoaPods
The preferred way to integrate `CNISDKPaymentKit` is via `CocoaPods`. Add the following line to your `Podfile`:
```ruby
pod 'CNISDKPaymentKit'
```
Run `pod install`, and you should now have the latest `CNISDKPaymentKit` release.

#### Install via Carthage

To integrate `CNISDKPaymentKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKPaymentKit` in your Carthage folder.

### Getting Started

Sections below explain major and the most important parts of the `conichiSDK PaymentKit`. For the complete documentation please refer to this [page](https://conichigmbh.github.io/ios/docs/CNISDKPaymentKit/apple_doc/index.html). Also, it can be useful to read the overview about [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md).

#### Initialization

Example below shows the simplest setup `conichiSDK PaymentKit`

```objective-c
  //Create a configuration for the payment
  CNISDKPaymentKitConfiguration *paymentKitConfiguration = [CNISDKPaymentKitConfiguration configurationWithBlock:^(id<CNISDKMutablePaymentKitConfiguration> \_Nonnull mutableConfiguration) {
        mutableConfiguration.paymentKey = "your-payment-key-from-payleven";
  }];

  //Create a payment kit bundle
  CNISDKKitBundle *paymentKit = [CNISDKKitBundle bundleWithKit:CNISDKPaymentKit configuration:paymentKitConfiguration]

  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ paymentKit ];
    mutableConfiguration.environment = CNISDKEnvironmentSandbox;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```

#### Managing of credit cards

__Important__ to manage credit cards guest has to be authorized.  
The logic of managing credit cards is inside `CNISDKPaymentManager` and it's ready to work right after the `sdk` initialization. Please refer to the [documentation](https://conichigmbh.github.io/ios/docs/CNISDKPaymentKit/apple_doc/Classes/CNISDKPaymentManager.html) to see how to add/edit/delete credit card.
