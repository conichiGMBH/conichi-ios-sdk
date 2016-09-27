//
//  CNISDKReachability.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/23/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;
@import SystemConfiguration;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const CNISDKReachabilityDidChangeReachabilityStateNotification;
extern NSString *const CNISDKReachabilityDidChangeReachabilityNotificationStateKey;
extern NSString *const CNISDKReachabilityDidChangeReachabilityNotificationPreviousStateKey;

typedef NS_ENUM(uint8_t, CNISDKReachabilityState) {
    CNISDKReachabilityStateNotReachable,
    CNISDKReachabilityStateReachableViaWiFi,
    CNISDKReachabilityStateReachableViaCell,
};


@interface CNISDKReachability : NSObject

@property (nonatomic, assign, readonly) CNISDKReachabilityState currentState;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;

/**
 * @return a shared singleton instance, that could be used to check if conichi API is reachable
 */
+ (instancetype)sharedReachability;

@end

NS_ASSUME_NONNULL_END
