//
//  CNISDKRemoteNotificationsPermissionManager.h
//  CNISDKCoreKit
//
//  Created by Mourad on 4/28/17.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKPermissionManager.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Local notification identifier fired by the SDK when the remote notification permission is enabled/disabled
 */
extern NSString *const kCNISDKRemoteNotificationsPermissionDidChange;

/**
 Notifications permission states
 *
 - CNISDKRemoteNotificationsPermissionStateDisabled: Notifications are disabled
 - CNISDKRemoteNotificationsPermissionStateEnabled: Notifications are enabled
 */
typedef NS_ENUM(NSInteger, CNISDKRemoteNotificationsPermissionState) {
    CNISDKRemoteNotificationsPermissionStateDisabled = 0,
    CNISDKRemoteNotificationsPermissionStateEnabled
};

@class CNISDKApplication;

/**
 Responsible for enabling the notifications permission and for notifying about the notifications state in call back blocks that are fired on main thread
 */
@interface CNISDKRemoteNotificationsPermissionManager : NSObject<CNISDKPermissionManager>

/**
 *  Creates notifications permission manager with default dependencies
 *  By default this initializer internally uses UIApplication sharedApplication
 *
 *  @return new notifications permission manager
 */
- (instancetype)init;

/**
 *  Creates notifications permission manager with provided application
 *
 *  @param application that notifications permission manager to edit permissions
 *
 *  @return new notifications permission manager
 */
- (instancetype)initWithApplication:(CNISDKApplication *)application;

@end

NS_ASSUME_NONNULL_END
