## conichiSDK for iOS

[![Requires](https://img.shields.io/badge/Requires-iOS%208+-blue.svg?style=flat)]()

### Meta
* __Point People:__ [@antondomashnev](https://github.com/Antondomashnev)

### Overview
`conichiSDK` for iOS is a tool that allows users to be recognized around the Beacon through Bluetooth Low Energy (BLE). Operated as a Software-as-a-Service (SaaS) solution, conichi’s features focus on personal guest recognition, fast-forwarding check-in, enabling mobile payment (thus check-out), identifying personal preferences, rewarding loyalty.

#### Kits

`conichiSDK` is following the idea of splitting functionality into different modules (so called `kit`) and now there are 4 modules available.

* [CNISDKCoreKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKCoreKit/docs/CNISDKCoreKit.md) - provides beacon recognition, simple check-in/check-out, and guest personalization
* [CNISDKPaymentKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPaymentKit/docs/CNISDKPaymentKit.md) - provides managing of payment instruments, checkout request with payment
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKGeoFencingKit/docs/CNISDKGeoFencingKit.md) - provides conichi's venues tracking by apple geofencing
* [CNISDKPMSKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPMSKit/docs/CNISDKPMSKit.md) - provides mobile check-in/check-out with property management system integration  

### Getting Started

#### Install as a framework

To use `conichiSDK`, head on over to the [releases](https://github.com/conichiGMBH/ios-sdk/releases) page, and download the latest build. Copy the extracted framework into your project.

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
* [CNISDKCoreKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKCoreKit/docs/apple_doc/html/index.html)
* [CNISDKPaymentKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPaymentKit/docs/apple_doc/html/index.html)
* [CNISDKGeoFencingKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKGeoFencingKit/docs/apple_doc/html/index.html)
* [CNISDKPMSKit](https://github.com/conichiGMBH/ios-sdk/blob/master/CNISDKPMSKit/docs/apple_doc/html/index.html)

## Development

#### Get started
To start contributing into project run `make bootstrap`. This will setup all dependencies you need to start 🚀.

#### Guidelines
The project is following [obj-c guidelines](https://github.com/conichiGMBH/ios-team-guidelines/blob/master/docs/objective_c_style_guide.md).

#### New release
To make a new release follow the next steps:
* Make sure you're in `develop` branch otherwise you'll get an error
* Run `make release` and enjoy your ☕

## Changelog

To see what has changed in recent versions of `conichiSDK`, see the [CHANGELOG](https://github.com/conichiGMBH/ios-sdk/blob/master/CHANGELOG.yml).

## License

```
Copyright (c) 2014-present, сonichi GmbH.
All rights reserved.
```
