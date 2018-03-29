//
//  CNISDKGeoFencingManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CLLocationManager;
@class CNISDKGeoFenceVenueRegion;
@class CNISDKGeoFenceAreaRegion;
@class CNISDKGeoFenceRegion;
@class CNISDKGeoFencingManager;
@class CNISDKAPIManager;

NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKGeoFencingManagerDelegate <NSObject>

/**
 *  Calls when underlying location manager notifies about did enter region
 *
 *  @param manager instance of CNISDKGeoFencingManager
 *  @param region  discovered region
 */
- (void)geoFencingManager:(CNISDKGeoFencingManager *)manager didEnterRegion:(CNISDKGeoFenceVenueRegion *)region;

/**
 *  Calls when underlying location manager notifies about did exist region
 *
 *  @param manager instance of CNISDKGeoFencingManager
 *  @param region  left region
 */
- (void)geoFencingManager:(CNISDKGeoFencingManager *)manager didExitRegion:(CNISDKGeoFenceVenueRegion *)region;

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
@property (nonatomic, strong, nullable, readonly) NSArray<CNISDKGeoFenceVenueRegion *> *geofencingVenueRegions;

@property (nonatomic, strong, nullable, readonly) NSArray<CNISDKGeoFenceAreaRegion *> *geofencingAreaRegions;

/**
 *  Initializes new instance of the geo fencing manager
 *
 *  @param locationManager core location manager to use system geo fencing
 *  @param apiManager api manager to update geofence status with the backend
 *
 *  @return newly created geo fencing manager
 */
- (instancetype)initWithSystemLocationManager:(CLLocationManager *)locationManager apiManager:(CNISDKAPIManager *)apiManager NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

/**
 *  Requests to underlying location manager to start monitoring for the given regions
 *
 *  @param regions regions to be monitored
 *
 *  @warning there is a limitation for up to 20 geo fencing regions at the same moment
 */
- (void)startGeoFencingRegions:(NSArray<CNISDKGeoFenceRegion *> *)regions;

/**
 *  Requests to underlying location manager to stop monitoring for the all currently monitored regions
 */
- (void)stopGeoFencing;

@end

NS_ASSUME_NONNULL_END
