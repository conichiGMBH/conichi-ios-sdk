//
//  CNISDKBeaconManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/11/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKRangedBeaconsHandler;
@class CNISDKBeaconsFilter;
@class CLLocationManager;
@class CLBeaconRegion;
@class CNISDK;

NS_ASSUME_NONNULL_BEGIN

/*!
 The `CNISDKBeaconManager` class contains methods that handle general network requests,
 methods that handle requests for concrete entities are located in categories
 */
@interface CNISDKBeaconManager : NSObject

/**
 *  SDK object to notify delegate about core location changes
 */
@property (nonatomic, weak, nullable) CNISDK *sdk;

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Creates beacon manager with specific managers
 *
 *  @param rangedBeaconsHandler given ranged beacons handler
 *  @param locationManager      given system location manager
 *
 *  @return New instance of beacon manager
 */
- (instancetype)initWithRandgedBeaconsHandler:(CNISDKRangedBeaconsHandler *)rangedBeaconsHandler
                        systemLocationManager:(CLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;

/**
 *  Start monitoring for conichi venues in the given beacon region
 *
 *  @param beaconRegion given beacon region to monitoring
 */
- (void)startRegionMonitoring:(CLBeaconRegion *)beaconRegion;

/**
 *  Stop monitoring for conichi venues
 */
- (void)stopRegionMonitoring;

@end

NS_ASSUME_NONNULL_END
