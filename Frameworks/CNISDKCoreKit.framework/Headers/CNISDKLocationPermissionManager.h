//
//  CNISDKLocationPermissionManager.h
//  CNISDKCoreKit
//
//  Created by Mourad on 4/28/17.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKPermissionManager.h"

NS_ASSUME_NONNULL_BEGIN

@class CLLocationManager;

/**
 Permission states which CLAuthorizationStatus
 *
 kCLAuthorizationStatusNotDetermined,
	kCLAuthorizationStatusRestricted,
	kCLAuthorizationStatusDenied,
	kCLAuthorizationStatusAuthorizedAlways,
	kCLAuthorizationStatusAuthorizedWhenInUse,
	kCLAuthorizationStatusAuthorized
 *
 - CNISDKLocationPermissionStateNotDetermined: Core Location authorization is not determined
 - CNISDKLocationPermissionStateRestricted: Core Location authorization is restricted
 - CNISDKLocationPermissionStateDenied: Core Location authorization is is denied
 - CNISDKLocationPermissionStateAuthorizedAlways: Core Location authorization is always
 - CNISDKLocationPermissionStateAuthorizedWhenInUse: Core Location authorization is when in use
 */
typedef NS_ENUM(NSInteger, CNISDKLocationPermissionState) {
    CNISDKLocationPermissionStateNotDetermined = 0,
    CNISDKLocationPermissionStateRestricted,
    CNISDKLocationPermissionStateDenied,
    CNISDKLocationPermissionStateAuthorizedAlways,
    CNISDKLocationPermissionStateAuthorizedWhenInUse,
};

/**
 Responsible for enabling the location permission (always) and for notifying about the location state in call back blocks that are fired on main thread
 For conichi SDK, location permission is allowed only when it's enabled always (CNISDKLocationPermissionStateAuthorizedAlways)
 */
@interface CNISDKLocationPermissionManager : NSObject<CNISDKPermissionManager>

/**
 *  Creates location permission manager with default dependencies
 *  By default this initializer uses kCLHeadingFilterNone and kCLLocationAccuracyKilometer for CLLocationManager
 *
 *  @return new location permission manager
 */
- (instancetype)init;

/**
 *  Creates location permission manager with the provided locationManager
 *
 *  @param locationManager that location permission manager uses to edit permissions
 *
 *  @return new location permission manager
 */
- (instancetype)initWithLocationManager:(CLLocationManager *)locationManager;

@end

NS_ASSUME_NONNULL_END
