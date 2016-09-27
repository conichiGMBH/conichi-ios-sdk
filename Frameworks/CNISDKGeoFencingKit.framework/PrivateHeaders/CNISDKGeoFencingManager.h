//
//  CNISDKGeoFencingManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CLLocationManager;
@class CNISDKGeoFenceRegion;
@class CNISDKGeoFencingManager;

NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKGeoFencingManagerDelegate <NSObject>

/**
 *  Calls when underlying location manager notifies about did enter region
 *
 *  @param manager instance of CNISDKGeoFencingManager
 *  @param region  discovered region
 */
- (void)geoFencingManager:(CNISDKGeoFencingManager *)manager didEnterRegion:(CNISDKGeoFenceRegion *)region;

/**
 *  Calls when underlying location manager notifies about did exist region
 *
 *  @param manager instance of CNISDKGeoFencingManager
 *  @param region  left region
 */
- (void)geoFencingManager:(CNISDKGeoFencingManager *)manager didExitRegion:(CNISDKGeoFenceRegion *)region;

/**
 *  Calls when underlying location manager fails
 *
 *  @param manager instance of CNISDKGeoFencingManager
 *  @param error   failure error object
 */
- (void)geoFencingManager:(CNISDKGeoFencingManager *)manager didFailWithError:(NSError *)error;

@end

/**
 *  The 'CNISDKGeoFencingManager' implements the logic to monitor regions
 */
@interface CNISDKGeoFencingManager : NSObject

/**
 *  Delegate of the geo fencing manager to handle callbacks
 */
@property (nonatomic, weak) id<CNISDKGeoFencingManagerDelegate> delegate;

/**
 *  Array of CNISDKGeoFenceRegion objects that geo fencing manager is currently geo fencing
 */
@property (nonatomic, strong, nullable, readonly) NSArray<CNISDKGeoFenceRegion *> *geofencingRegions;

/**
 *  Initializes new instance of the geo fencing manager
 *
 *  @param locationManager    core location manager to use system geo fencing
 *
 *  @return newly created geo fencing manager
 */
- (instancetype)initWithSystemLocationManager:(CLLocationManager *)locationManager NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

/**
 *  Requests to underlying location manager to start monitoring for the given regions
 *
 *  @param regions regions to be monitored
 */
- (void)startGeoFencingRegions:(NSArray<CNISDKGeoFenceRegion *> *)regions;

/**
 *  Requests ti underlying location manager to stop monitoring for the all currently monitored regions
 */
- (void)stopGeoFencing;

@end

NS_ASSUME_NONNULL_END
