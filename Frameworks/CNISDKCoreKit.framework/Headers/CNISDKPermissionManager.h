//
//  CNISDKPermissionManager.h
//  CNISDKCoreKit
//
//  Created by Mourad on 4/28/17.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKPermissionsManager.h"
@protocol CNISDKDelegate;

NS_ASSUME_NONNULL_BEGIN

typedef void(^CNISDKPermissionCallbackBlock)(NSInteger state, BOOL success);

@protocol CNISDKPermissionManager <NSObject>

/**
 *  CNISDK instance to update it's delegate
 */
@property (nonatomic, weak, nullable) id<CNISDKDelegate> sdkDelegate;

/**
 *  The response block that's executed 1 time per askForPermissionWithResult: call
 */
@property (nullable, nonatomic, copy) CNISDKPermissionCallbackBlock responseBlock;

/**
 *  The permission changed call back block that's executed whenever the permission is changed
 */
@property (nullable, nonatomic, copy) CNISDKPermissionCallbackBlock permissionChangedCallbackBlock;

/**
 *  Checks whether permission is allowed or not
 *
 *  @return YES if permission is allowed, NO if permission is not allowed
 */
- (BOOL)isPermissionAllowed;

/**
 *  Asks for permission and executes the response block one time on main thread
 *
 *  @param result callback block with two parameters
 *                  1. Permission state
 *                  2. Success flag - whether giving permission is succeeded or not
 *
 */
- (void)askForPermissionWithResult:(CNISDKPermissionCallbackBlock)result;

/**
 *  Asks for permission and executes the callback block on main thread whenever the permission is changed
 *
 *  @param permissionChangedCallback callback block with two parameters
 *                  1. Permission state
 *                  2. Success flag - whether giving permission is
 *
 */
- (void)askAndListenForPermissionChangesWithCallback:(CNISDKPermissionCallbackBlock)permissionChangedCallback;

/**
 *  Removes the permission changed callback, so that the listenner callback block won't be fired again if permission is changed
 *
 */
- (void)stopListening;

@end

NS_ASSUME_NONNULL_END
