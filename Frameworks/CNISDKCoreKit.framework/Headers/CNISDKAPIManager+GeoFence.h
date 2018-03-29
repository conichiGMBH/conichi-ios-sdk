//
//  CNISDKAPIManager+GeoFence.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

#import "CNISDKAPIManager.h"

@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+GeoFence` extends CNISDKAPIManager to provide fetching geofence areas, opening and closing geofence trackins.
 */
@interface CNISDKAPIManager (GeoFence)

/**
 *  Fetches an array of CNISDKGeoFence objects from the backend and store it in local cache
 *  The geofence array depends on address location
 *
 *  @param latitude   current location latitude
 *  @param longitude  current location longitude
 *  @param completion callback block with two parameters
 *                    1. NSArray of CNISDKGeoFence objects
 *                    2. NSError object if request failed
 */
- (void)fetchGeofenceAreasNearLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Creates a geofence trackin with open status and store the trackin in local cache
 *
 *  @param geofenceID geofence area id that the trackin will relate to
 *  @param completion callback block with two parameters
 *                    1. CNISDKGeoFenceTrackin object
 *                    2. NSError object if request failed
 */
- (void)createGeofenceTrackinWithGeofenceID:(NSString*)geofenceID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Closes a geofence trackin with open status and store the updated trackin in local cache
 *
 *  @param geofenceID geofence area id that the trackin relates to
 *  @param completion callback block with two parameters
 *                    1. CNISDKGeoFenceTrackin object
 *                    2. NSError object if request failed
 */
- (void)closeGeofenceTrackinWithGeofenceID:(NSString*)geofenceID completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END

