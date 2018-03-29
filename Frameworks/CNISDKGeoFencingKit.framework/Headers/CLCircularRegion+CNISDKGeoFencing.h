//
//  CLCircularRegion+CNISDKGeoFencing.h
//  CNISDKGeoFencingKit
//
//  Created by Anton Domashnev on 18.06.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import CoreLocation;

@class CNISDKVenue;
@class CNISDKGeoFence;


NS_ASSUME_NONNULL_BEGIN


extern NSString *const kCLCircularRegionSDKGeoFencingIdentifierPrefix;

/**
 *  `CLCircularRegion` category `CNISDKGeoFencing` adds a convinience initializer to create
 *  geo fence regions based on the given `CNISDKVenue` and parameters
 */
@interface CLCircularRegion (CNISDKGeoFencing)

/**
 *  Initializes a new instance of `CLCircularRegion` based on the given parameters
 
 @param venue `CNISDKVenue` to create a geo fence region for
 @param radius geo fence region radius
 @return newly created instance of `CLCircularRegion`
 */
+ (CLCircularRegion *)cnisdk_regionWithVenue:(CNISDKVenue *)venue radius:(CLLocationDistance)radius;

/**
 *  Initializes a new instance of `CLCircularRegion` based on the given parameters
 
 @param geofence `CNISDKGeoFence` to create a geo fence region for
 @param radius geo fence region radius
 @return newly created instance of `CLCircularRegion`
 */
+ (CLCircularRegion *)cnisdk_regionWithGeofence:(CNISDKGeoFence *)geofence radius:(CLLocationDistance)radius;

@end

NS_ASSUME_NONNULL_END

