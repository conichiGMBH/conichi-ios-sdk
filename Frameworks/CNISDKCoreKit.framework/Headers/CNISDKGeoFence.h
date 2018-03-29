//
//  CNISDKGeoFence.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

#import "CNISDKObject.h"
#import "CNISDKMacros.h"

#define CNISDKGeoFenceKeypath(NAME) CNISDKKeypath(CNISDKGeoFence, NAME)

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKGeoFence` class is a representation geofence object from conichi's cloud.
 */
@interface CNISDKGeoFence : CNISDKObject

/**
 *  The name of the geofence area.
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 *  The latitude of the geofence area, to construct the geofence area circle together with the the longitude and the radius
 */
@property (nonatomic, strong, readonly) NSNumber *latitude;

/**
 *  The longitude of the geofence area, to construct the geofence area circle together with the latitude and the radius
 */
@property (nonatomic, strong, readonly) NSNumber *longitude;

/**
 *  The radius of the geofence area, to construct the geofence area circle together with the latitude and the longitude
 */
@property (nonatomic, strong, readonly) NSNumber *radius;

@end

NS_ASSUME_NONNULL_END

