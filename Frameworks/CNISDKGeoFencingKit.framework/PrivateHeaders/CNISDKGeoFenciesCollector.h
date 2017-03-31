//
//  CNISDKGeoFenciesCollector.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
@import CoreLocation;

@class CNISDKGeoFenceRegion;
@class CNISDKVenue;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenciesCollector' creates a CNISDKGeoFenceRegion array from array of CNISDKVenue
 */
@interface CNISDKGeoFenciesCollector : NSObject

/**
 *  Radius for geo fence region
 *  Default value is kCNISDKGeoFencingKitDefaultGeoFenceRadiusInMeters
 */
@property (nonatomic, assign) CLLocationDistance geoFenceRadiusInMeters;

/**
 *  Maximum number of geo fence regions
 *  Default value is kCNISDKGeoFencingKitDefaultMaximumNumberOfGeoFenceRegions
 */
@property (nonatomic, assign) NSUInteger geoFenceRegionsLimit;

/**
 *  Initializes new geo fencies creator
 *
 *  @param venuesArray array of venues to create regions based on
 *  @param currentLocation current location to be used to sort venues by distance
 *
 *  @return newly created instance of CNISDKGeoFenciesCollector
 */
- (instancetype)initWithVenues:(NSArray<CNISDKVenue *> *)venuesArray currentLocation:(CLLocation *)currentLocation;

/**
 *  Returns sdk geo fence regions array based on the given venues array and parameters
 *
 *  @return NSArray of CNISDKGeoFenceRegion objects
 */
- (NSArray<CNISDKGeoFenceRegion *> *)createGeoFenceRegions;

@end

NS_ASSUME_NONNULL_END
