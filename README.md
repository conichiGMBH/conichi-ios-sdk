<img src="https://www.conichi.com/wp-content/uploads/2018/01/conichi-logo-150px.png" height="137" width="480" />

## conichiSDK for iOS

[![Requires](https://img.shields.io/badge/Requires-iOS%208+-blue.svg?style=flat)]()
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/CNISDKCoreKit.svg)](https://img.shields.io/cocoapods/v/CNISDKCoreKit.svg)
[![Build Status](https://travis-ci.org/conichiGMBH/conichi-ios-sdk.svg?branch=master)](https://travis-ci.org/conichiGMBH/conichi-ios-sdk)


### Meta
* __Point People:__ [@David-Henner](https://github.com/David-Henner)
* __Point People:__ [@ShengHuaWu](https://github.com/ShengHuaWu)
* __Point People:__ [@vincentjacquesson](https://github.com/vincentjacquesson)

### Overview
`conichiSDK` for iOS is a tool that allows users to be recognized around the Beacon through Bluetooth Low Energy (BLE). Operated as a Software-as-a-Service (SaaS) solution, conichi’s features focus on personal guest recognition, fast-forwarding check-in, enabling mobile payment (thus check-out), identifying personal preferences, rewarding loyalty.

#### Kits

`conichiSDK` is following the idea of splitting functionality into different modules (so called `kit`) and now there are 6 modules available.

* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md) - provides beacon recognition, simple check-in/check-out, and guest personalization
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md) - provides abstract layer for managing of payment instruments, checkout request with payment
* [CNISDKPaylevenKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaylevenKit.md) - provides abstract layer for managing payment through Payleven
* [CNISDKSumUpKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKSumUpKit.md) - provides abstract layer for managing payment through SumUp
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKGeoFencingKit.md) - provides conichi's venues tracking by apple geofencing
* [CNISDKPMSKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPMSKit.md) - provides mobile check-in/check-out with property management system integration  

### Getting Started

#### Installation

<details>
<summary>Install as a framework</summary>

To use `Conichi SDK`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the `CNISDK.framework.zip`. Extract the zip file and drag and drop all frameworks to the `Project target -> general -> Embedded Binaries`.

![Alt text](https://monosnap.com/file/hTEOYYDWNsL2KHqeVP9psO7aGU4ZRc.png)
</details>
<details>
<summary>Install via CocoaPods</summary>

The preferred way to integrate `CNISDKCoreKit` is via `CocoaPods`. Add the following lines to your `Podfile`:

```ruby
use_frameworks!

pod 'CNISDKCoreKit'
```

Run `pod install`, and you should now have the latest `CNISDKCoreKit` release.
</details>
<details>
<summary>Install via Carthage</summary>

To integrate `CNISDKCoreKit` via Carthage add the following line to your `Cartfile`:
```
github "conichiGMBH/conichi-ios-sdk"
```
Run `carthage update`, and you should now have the latest version of `CNISDKCoreKit` in your Carthage folder.
</details>
<details>
<summary>Partial Installation</summary>

Following the links below you can find the instructions in the __Getting Started__ section on how to install a specific `kit`:
* [CNISDKCoreKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKCoreKit.md)
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKGeoFencingKit.md)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaymentKit.md)
* [CNISDKPaylevenKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPaylevenKit.md)
* [CNISDKSumUpKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKSumUpKit.md)
* [CNISDKPMSKit](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/Docs/CNISDKPMSKit.md)
</details>

#### Update info plist
Then, you must add the `NSLocation` keys to your project’s Info.plist containing the message to be prompted to the user.

```objective-c
<key>NSLocationAlwaysAndWhenInUseUsageDescription</key>
 <string>This app needs your location so you can be recognized in conichi Hotels</string>
<key>NSLocationAlwaysUsageDescription</key>
 <string>This app needs your location so you can be recognized in conichi Hotels</string>
<key>NSLocationUsageDescription</key>
 <string>This app needs your location so you can be recognized in conichi Hotels</string>
<key>NSLocationWhenInUseUsageDescription</key>
 <string>This app needs your location so you can be recognized in conichi Hotels</string>
```

Be careful, if you decide not to use all the keys, The app may not work properly.
If you wish to know why those keys are necessary, you can check out [this link](Docs/LocationPermission.md)

If you're going to use our `development` or `staging` environment, you'll need to add the following lines to your `info.plist`

```
<key>NSAppTransportSecurity</key>
<dict>
	<key>NSAllowsArbitraryLoads</key>
	<true/>
</dict>
```

#### Enable some capabilities

Conichi cares about the security and therefore the SDK stores the authorization information in the iOS Keychain, but to be able to read and write values even if the SDK is not running, iOS system requires the `Keychain Sharing` capability.

`Target -> Capabilities -> Keychain Sharing - Turn the switch On`.

![Alt text](https://monosnap.com/file/Fgjm7ziUSjarcbDIRgJshGvXUiElh3.png)

#### Initialization

Example below shows the simplest setup for `conichiSDK CoreKit` that points to our `development` server.

<details>
<summary>Objective-C</summary>

```objective-c
  //Create a configuration for the sdk instance
  CNISDKConfiguration *configuration = [CNISDKConfiguration configurationWithBlock:^(id<CNISDKMutableConfiguration> \_Nonnull mutableConfiguration) {
    mutableConfiguration.logLevel = CNISDKLogLevelInfo;
    mutableConfiguration.apiKey = @"your-api-key";
    mutableConfiguration.apiSecret = @"your-api-secret";
    mutableConfiguration.kits = @[ ];
    mutableConfiguration.environment = CNISDKEnvironmentDevelopment;
  }];

  //Setups the sdk delegate - it can be any object that conforms to CNISDKDelegate protocol
  id<CNISDKDelegate> delegate = [self yourMethodToSetupSDKDelegate];

  //Start the sdk with the given configuration
  [CNISDK startWithConfiguration:configuration delegate:delegate];
```
</details>

<details>
<summary>Swift</summary>

```swift
  //Create configuration for the sdk instance
  let config: CNISDKConfiguration = CNISDKConfiguration() {
    (mutableConfig: CNISDKMutableConfiguration) in
    mutableConfig.logLevel = CNISDKLogLevel.info
    mutableConfig.apiKey = "your-api-key"
    mutableConfig.apiSecret = "your-api-secret"
    mutableConfig.kits = []
    mutableConfig.environment = CNISDKEnvironment.development
  }

  //Setups the sdk delegate - make sure that you conform to the CNISDKDelegate protocol
  let delegate: CNISDKDelegate = self

  //Start the sdk with given configuration
  CNISDK.start(with: config, delegate: delegate)
```

</details>  

After this setup you have an access to the instance of the `[CNISDK sharedInstance]` in **Obj-C** or  `CNISDK.sharedInstance()` in **Swift**.

#### Authorization

To start any real actions with the guest, the `sdk` requires the guest to be authorized. All methods related to `authorization` are in `CNISDKAPIManager+Authentication` category. The example below shows how to do a sign up for a new guest.

<details>
<summary>Objective-C</summary>

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
</details>

<details>
<summary>Swift</summary>

```swift
// Create a signup request
let info = CNISDKSignUpRequestInfo()
info.firstName = "Jenessa"
info.lastName = "Gretta"
info.email = "jenessa.gretta@gmail.com"
info.password = "strongestpasswordever=)"

// Instantiate APImanager
let apiManager = CNISDKAPIManager()

// Perform signup
apiManager.signUp(withRequest: info) {
  	(guest, error) in
  	if let error = error {
    	//handle error during the sign up
    	return
  	}
  	//handle authorized guest
}
```
</details>

You can also use the `CNISDKExternalSignUpRequestInfo` object to provide an external ID instead of the `email` `password` combination and perform the signup by using `- (void)signUpWithExternalIDRequestInfo:(CNISDKExternalSignUpRequestInfo *)requestInfo completion:(nullable CNISDKGuestErrorBlock)completion;
`

#### Monitoring

If the guest is authorized, the following code will enable beacon monitoring

<details>
<summary>Objective-C</summary>

`[[CNISDK sharedInstance] startMonitoring];`
</details>

<details>
<summary>Swift</summary>

`CNISDK.sharedInstance().startMonitoring()`
</details>  

Now, when a guest gets in range of a conichi beacon, the following callback should be fired:

`- (void)conichiSDKDidDiscoverVenue:(CNISDKVenue *)venue;`

Depending on the scenario, different callbacks can be called. All callbacks can be found in `CNISDKDelegate.h`

#### Trackins

Trackins can be created by guests when they enter a beacon region in a given venue.
Trackins can be fetched using the web API.

Merchant apps can use trackins to display a list of users around a beacon region.

The following code shows how to start a trackin after a venue has been discovered
<details>
<summary>Objective-C</summary>

```objective-c
- (void)conichiSDKDidDiscoverVenue:(CNISDKVenue *)venue {
	// Get the region ID
    NSString *regionID = venue.regions.firstObject.conichiID;

	// Start tracking guest in region
    [[CNISDKAPIManager manager] startTrackingGuestInRegionWithID:regionID completion:^(id trackin, NSError *error) {
        if error {
            // Handle error
        } else {
            // Do something with trackin
        }
    }];
}
```
</details>

<details>
<summary>Swift</summary>

```swift
func conichiSDKDidDiscover(_ venue: CNISDKVenue) {
	// Get the region ID
  	guard let regionID = currentVenue?.regions?.first?.conichiID else {
    	return
  	}

	// Instantiate API Manager if needed
	let apiManager = CNISDKAPIManager()

	// Start tracking guest in region
  	apiManager.startTrackingGuestInRegion(withID: regionID) { (trackin, error) in
 	   	if let unwrappedError = error {
    	  	// Handle error
    	} else {
      		// Do something with trackin
    	}
  	}
}
```

</details>  

#### Checkins

Checkins are associated to venues. They allow users to perform different actions related to a venue, such as payments or receiving messages from the venue.
Checkins can be created manually by using the web API, or automatically via PMS integration.

#### Checkout requests

Checkout requests allow guests to request their checkin to be closed (checking out). They can be created with or without deliverable items (items to be paid such as minibar items).

As for checkins, they are associated to venues. They can be created using the SDK and fetched using the web API.

The example below shows how to do a checkout request without deliverables for a guest, using `CNISDKCoreKit`

<details>
<summary>Objective-C</summary>

```objective-c
// Get the guest's credit card
CNISDKCreditCard *creditCard = guest.creditCards.firstObject;

// Create checkout request
[[CNISDKAPIManager manager] createCheckoutRequestWithDeliverableCountableItems:nil selectedCreditCard:creditCard completion:^(id checkoutRequest, NSError *error) {
  	if (error) {
    	// Handle error
  	} else {
    	// Do something with checkoutRequest
  	}
}];
```
</details>

<details>
<summary>Swift</summary>

```Swift
// Get the guest's credit card
let creditCard = guest.creditCards.first

// Instantiate API Manager if needed
let apiManager = CNISDKAPIManager()

// Create checkout request
apiManager.createCheckoutRequest(with: nil, selectedCreditCard: creditCard.conichiID ) { (checkoutRequest, error) in
	if error {
    	// Handle error
  	} else {
    	// Do something with checkoutRequest
  	}
}
```

</details>

#### Fetching the guest's status

You can use the following code to fetch the guest from conichi's cloud.

<details>
<summary>Objective-C</summary>

```objective-c
// Fetch guest status
[[CNISDK sharedInstance] fetchGuestStatus];
```

```objective-c
// Implement delegate method of CNISDKDelegate
- (void)conichiSDKDidUpdateGuestStatus:(CNISDKGuest *)guest {
    // do something with guest
}
```

</details>

<details>
<summary>Swift</summary>

```Swift
// Fetch guest status
CNISDK.sharedInstance().fetchGuestStatus()
```

```Swift
// Implement delegate method of CNISDKDelegate
func conichiSDKDidUpdateGuestStatus(_ guest: CNISDKGuest) {
	// do something with guest
}
```
</details>

---
#### Note

While the above documentation should be enough to get you started, it only covers a small part of the SDK's functionalities. If you have any questions regarding it's use, please don't hesitate to contact us.

---

## Documentation

Documentation for each kit is available at the following links:
* [CNISDKCoreKit](https://conichigmbh.github.io/ios/docs/CNISDKCoreKit/apple_doc/index.html)
* [CNISDKPaymentKit](https://conichigmbh.github.io/ios/docs/CNISDKPaymentKit/apple_doc/html/index.html)
* [CNISDKPaylevenKit](https://conichigmbh.github.io/ios/docs/CNISDKPaylevenKit/apple_doc/html/index.html)
* [CNISDKSumUpKit](https://conichigmbh.github.io/ios/docs/CNISDKSumUpKit/apple_doc/html/index.html)
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
