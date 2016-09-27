## conichiSDK for iOS

[![Requires](https://img.shields.io/badge/Requires-iOS%208+-blue.svg?style=flat)]()

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

#### Install as a framework

To use `conichiSDK`, head on over to the [releases](https://github.com/conichiGMBH/conichi-ios-sdk/releases) page, and download the latest build. Copy the extracted framework into your project.

#### Install via CocoaPods
The preferred way to integrate `conichiSDK` is via `CocoaPods`. Add the following lines to your `Podfile` depending on your kit configuration:
```ruby
source 'git@github.com:conichiGMBH/ios-specs.git'

pod 'CNISDKCoreKit'
pod 'CNISDKPMSKit'
pod 'CNISDKPaymentKit'
pod 'CNISDKGeoFencingKit'
```
Run `pod install`, and you should now have the latest `conichiSDK` release.

#### Update info plist
Then, you must add a NSLocationAlwaysUsageDescription or NSLocationWhenInUseUsageDescription key to your project’s Info.plist containing the message to be displayed to the user at the prompt.

```objective-c
    <key>NSLocationAlwaysUsageDescription</key>
    <string>This app needs your location so you can be recognized in the conichi Hotel</string>
```

And you're off! Take a look at the public documentation and start building.

## Documentation

Documentation for each kit is available at the following links:
* [CNISDKCoreKit](https://conichigmbh.github.io/ios/docs/CNISDKCoreKit/index.html)
* [CNISDKPaymentKit](https://conichigmbh.github.io/ios/docs/CNISDKPaymentKit/index.html)
* [CNISDKGeoFencingKit](https://conichigmbh.github.io/ios/docs/CNISDKGeoFencingKit/index.html)
* [CNISDKPMSKit](https://conichigmbh.github.io/ios/docs/CNISDKPMSKit/index.html)

## Changelog

To see what has changed in recent versions of `conichiSDK`, see the [CHANGELOG](https://github.com/conichiGMBH/conichi-ios-sdk/blob/master/CHANGELOG.yml).

## License

```
Copyright (c) 2014-present, сonichi GmbH.
All rights reserved.
```
