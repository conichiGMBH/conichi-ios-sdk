//
//  CNISDKLocationBasedGeoFencesAreasCreator.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

@import Foundation;
@import CoreLocation;

@class CNISDKGeoFenceRegion;
@class CNISDKVenue;

#import "CNISDKGeoFencesAreasCreator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKLocationBasedGeoFencesAreasCreator' creates a CNISDKGeoFenceAreaRegion array from array of CNISDKVenue
 */
@interface CNISDKLocationBasedGeoFencesAreasCreator : NSObject <CNISDKGeoFencesAreasCreator>

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
 *  @return newly created instance of CNISDKGeoFencesCreator
 */
- (instancetype)initWithCurrentLocation:(CLLocation *)currentLocation;

@end

NS_ASSUME_NONNULL_END


