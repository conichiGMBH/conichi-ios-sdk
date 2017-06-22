//
//  CNISDKBluetoothPermissionManager.h
//  CNISDKCoreKit
//
//  Created by Mourad on 4/28/17.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKPermissionManager.h"

NS_ASSUME_NONNULL_BEGIN

/*-------Models-------*/

/**
 Permission states which hold CBManagerState
 *
 CBManagerStateUnknown,
	CBManagerStateResetting,
	CBManagerStateUnsupported,
	CBManagerStateUnauthorized,
	CBManagerStatePoweredOff,
	CBManagerStatePoweredOn
 *
 - CNISDKBluetoothPermissionStateUnknown: Bluetooth status is unknown
 - CNISDKBluetoothPermissionStateResetting: Bluetooth status is resetting
 - CNISDKBluetoothPermissionStateUnsupported: Bluetooth status is unspported
 - CNISDKBluetoothPermissionStateUnauthorized: Bluetooth status is unauthorized
 - CNISDKBluetoothPermissionStatePoweredOff: Bluetooth status is powered off
 - CNISDKBluetoothPermissionStatePoweredOn: Bluetooth status is powered on
 */
typedef NS_ENUM(NSInteger, CNISDKBluetoothPermissionState) {
    CNISDKBluetoothPermissionStateUnknown = 0,
    CNISDKBluetoothPermissionStateResetting,
    CNISDKBluetoothPermissionStateUnsupported,
    CNISDKBluetoothPermissionStateUnauthorized,
    CNISDKBluetoothPermissionStatePoweredOff,
    CNISDKBluetoothPermissionStatePoweredOn,
};

@class CBCentralManager;

/**
 Responsible for enabling the bluetooth permission and for notifying about the bluetooth state in call back blocks that are fired on main thread
 */
@interface CNISDKBluetoothPermissionManager : NSObject<CNISDKPermissionManager>

/**
 *  Creates bluetooth permission manager with default dependencies
 *  By default this initializer disables CBCentralManagerOptionShowPowerAlertKey and uses dispatch_get_main_queue() for CBCentralManager queue
 *
 *  @return new bluetooth permission manager
 */
- (instancetype)init;

/**
 *  Creates bluetooth permission manager with the provided centralManager
 *
 *  @param centralManager that bluetooth permission manager uses to edit permissions
 *
 *  @return new bluetooth permission manager
 */
- (instancetype)initWithCentralManager:(CBCentralManager *)centralManager;

@end

NS_ASSUME_NONNULL_END
