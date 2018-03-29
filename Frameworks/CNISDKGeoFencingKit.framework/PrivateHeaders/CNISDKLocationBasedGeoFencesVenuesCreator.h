//
//  CNISDKLocationBasedGeoFencesVenuesCreator.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
@import CoreLocation;

@class CNISDKGeoFenceRegion;
@class CNISDKVenue;

#import "CNISDKGeoFencesVenuesCreator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKLocationBasedGeoFencesVenuesCreator' creates a CNISDKGeoFenceRegion array from array of CNISDKVenue
 */
@interface CNISDKLocationBasedGeoFencesVenuesCreator : NSObject <CNISDKGeoFencesVenuesCreator>

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
 *  Initializes new geo Fences creator
 *
 *  @param currentLocation current location to be used to sort venues by distance
 *
 *  @return newly created instance of CNISDKLocationBasedGeoFencesVenuesCreator
 */
- (instancetype)initWithCurrentLocation:(CLLocation *)currentLocation;

@end

NS_ASSUME_NONNULL_END

