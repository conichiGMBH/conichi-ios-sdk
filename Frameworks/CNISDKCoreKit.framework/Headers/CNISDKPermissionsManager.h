//
//  CNISDKPermissionsManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;
@import UIKit;
@import CoreBluetooth;
@import CoreLocation;

@class CNISDKBeacon;
@class CNISDKVenue;
@class CLLocationManager;
@class CBCentralManager;
@class CNISDKApplication;
@class CNISDK;
@class CNISDKLocationPermissionManager;
@class CNISDKBluetoothPermissionManager;
@class CNISDKRemoteNotificationsPermissionManager;
#import "CNISDKConstants.h"


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPermissionsManager` class contains methods that handle asking for iOS permissions
 *  for bluetooth, background location and notifications.
 *  CNISDKPermissionsManager is deprecated, use CNISDKLocationPermissionManager, CNISDKBluetoothPermissionManager and CNISDKRemoteNotificationsPermissionManager instead.
 */
@interface CNISDKPermissionsManager : NSObject

@property (nonatomic, weak) CNISDK *sdk;

@property (nonatomic, assign, readonly) BOOL isBackgroundLocationAllowed;
@property (nonatomic, assign, readonly) BOOL isBluetoothAllowed;
@property (nonatomic, assign, readonly) BOOL isNotificationsAllowed;

@property (nonatomic, strong, readonly) CNISDKLocationPermissionManager *locationPermissionManager;
@property (nonatomic, strong, readonly) CNISDKBluetoothPermissionManager *bluetoothPermissionManager;
@property (nonatomic, strong, readonly) CNISDKRemoteNotificationsPermissionManager *notificationPermissionManager;

/**
 *  Convenience initializer that creates permissions manager with default system managers
 *
 *  @return new permission manager instance
 */
- (instancetype)init;

/**
 *  Designated initializer to create permission manager instance
 *
 *  @param locationManager system location manager to track background location permissions
 *  @param centralManager  system central manager to track bluetooth status
 *  @param application     application to track notifications permissions
 *
 *  @return new permission manager instance
 */
- (instancetype)initWithLocationManager:(CLLocationManager *)locationManager centralManager:(CBCentralManager *)centralManager application:(CNISDKApplication *)application NS_DESIGNATED_INITIALIZER;

/**
 *  Ask bluetooth permissions and return response in block
 *
 *  @param response callback block with two parameters
 *                  1. CBCentralManagerState
 *                  2. Success flag - whether request succeeded or not
 *
 */
- (void)askBluetoothWithResponse:(nullable void (^)(CBManagerState state, BOOL success))response __attribute((deprecated("use CNISDKBluetoothPermissionManager askAndListenForPermissionChangesWithCallback: instead")));

/**
 *  Ask notifications permissions and return response in block
 *
 *  @param response callback block with one parameter
 *                  1. Success flag - whether request succeeded or not
 */
- (void)askLocalNotificationsWithResponse:(nullable void (^)(BOOL success))response __attribute((deprecated("use CNISDKRemoteNotificationsPermissionManager askAndListenForPermissionChangesWithCallback: instead")));

/**
 *  Ask background location permission and return response in block
 *
 *  @param response callback block with two parameters
 *                  1. CLAuthorizationStatus
 *                  2. Success flag - whether request succeeded or not
 */
- (void)askBackgroundLocationWithResponse:(nullable void (^)(CLAuthorizationStatus status, BOOL success))response __attribute((deprecated("use CNISDKLocationPermissionManager askAndListenForPermissionChangesWithCallback: instead")));

@end

NS_ASSUME_NONNULL_END
