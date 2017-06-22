## conichiSDK Apple Push Notifications integration

### Overview

This document explains how to integrate conichiSDK into your app to be able to receive push notifications from conichi.

Each push notification contains following information:

| Value | Regular | Silence |
| ----- | ------- | ------- |
alert| message| -|
badge| 0| -|
sound| -| -|
content_available| true| true|
custom_data| `venue_id`, `venue_name`, + User Info| `venue_id`, `venue_name`, + User Info|
category| See category below| See category below|


List of push notifications that conichi sends to a user:

| Action | Category | Silence | Message | User Info |
| ------ | -------- | ------- | ------- | --------- |
Open Trackin| conichi| No| Venue Welcome message| -|
Open Checkin| conichi| Yes| -| -|
Closed Check-in| conichi| No| Venue Farewell message| -|
Completed Check-out request| payment| Yes| -| -|
Canceled Check-out request| payment| No| We can't process your check-out request right now, so please try again later| -|
Completed Transaction| payment| No| A payment of :currency :amount has been successfully made to :hotel.| `:payment_currency`, `:payment_amount`, `:payment_status`|
Aborted Transaction| payment| No| Your payment of `:currency` `:amount` at `:hotel` is denied.| `:payment_currency`, `:payment_amount`, `:payment_status`|
Refunded Transaction| payment| No| A refund of `:currency` `:amount` has been successfully made to you by `:hotel`| `:payment_currency`, `:payment_amount`, `:payment_status`|
PMS Check-in is available| mobile_checkin_ready| No| Your mobile Check-in is now available.| -|
Custom| conichi| No| Custom message.| -|

### Integration

The following steps are required to be able to receive APN in your app.

#### Enable push notifications capability.

Go to Target -> Capabilities -> Push Notifications -> Switch On  

<img src="https://monosnap.com/file/ySc30xRCXn7ubX57920TZLTcQJFWL6.png">

#### Provide conichi with production APN certificate

1. Issue the push notifications production certificate in [developer portal](developer.apple.com).
2. Load it and save in the keychain. Select saved certificate in the keychain and expand it with the arrow. Extract it in .p12 format __without password__.
3. Using the command below convert the .p12 file in .pem, please __set empty password__:
```
openssl pkcs12 -in cert.p12 -out apple_push_notification.pem -nodes -clcerts
```
4. Send the .pem file to the conichi team along with the `API KEY` and `API SECRET` that your app is using.

#### Save device token in guest

To be able device to receive the APN from conichi, it needs to be registered in out system.
To do so, please save `deviceToken` in a `[CNISDKGuest currentGuest]` object.

```
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
  CNISDKUpdateGuestRequestInfo *requestInfo = [CNISDKUpdateGuestRequestInfo new];
  requestInfo.apnToken = [self stringWithDeviceToken:deviceToken];
  [[CNISDKAPIManager manager] updateCurrentGuestWithRequest:requestInfo completion:^(CNISDKGuest *updatedGuest, NSError *error) {
      if (error) {
        // The token was not saved, please check the error for information and retry
      }
      else {
        // The token was saved, device now is able to receive push notifications from conichi
      }
  }];
}
```

Below are helper functions to convert `deviceToken` into string.

__Swift__
```swift
func stringWithDeviceToken(_ deviceToken: Data) -> String {
  return deviceToken.reduce("", {$0 + String(format: "%02X", $1)})
}
```

__Objective-C__
```swift
- (NSString *)stringWithDeviceToken:(NSData *)deviceToken {
  const char *data = [deviceToken bytes];
  NSMutableString *token = [NSMutableString string];
  for (NSUInteger i = 0; i < [deviceToken length]; i++) {
    [token appendFormat:@"%02.2hhX", data[i]];
  }
  return [token copy];
}
```

### Frequent Questions

*Q: Will the user receive the push notification on all devices where she is logged in into the system?*  
A: No, currently the system is designed that the push notification is sent only to the latest active device in conichi.  

*Q: Will conichi notifications conflict with the already integrated push notifications from other services?*  
A: No there won't be any conflict as long as the certificate is valid and the device is registered in our system by SDK.
