//
//  CNISDKGeoFenciesCreator.h
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
 *  The 'CNISDKGeoFenciesCreator' creates a CNISDKGeoFenceRegion array from array of CNISDKVenue
 */
@interface CNISDKGeoFenciesCreator : NSObject

/**
 *  Radius for geo fence region
 *  Default value is 100m
 */
@property (nonatomic, assign) CLLocationDistance geoFenceRadiusInMeters;

/**
 *  Initializes new geo fencies creator
 *
 *  @param venuesArray array of venues to create regions based on
 *
 *  @return newly created instance of CNISDKGeoFenciesCreator
 */
- (instancetype)initWithVenues:(NSArray<CNISDKVenue *> *)venuesArray;

/**
 *  Returns sdk geo fence regions array based on the given venues array and parameters
 *
 *  @return NSArray of CNISDKGeoFenceRegion objects
 */
- (NSArray<CNISDKGeoFenceRegion *> *)createGeoFenceRegions;

@end

NS_ASSUME_NONNULL_END
