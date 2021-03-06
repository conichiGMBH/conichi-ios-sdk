//
//  CNISDKGeoFenceRegion.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKGeoFenceRegion.h"

@class CNISDKVenue;
@class CLCircularRegion;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenceVenueRegion' is the class that contains information about geo fence by conichi SDK region
 */
@interface CNISDKGeoFenceVenueRegion : CNISDKGeoFenceRegion

/**
 *  Venue that has been discovered or left
 */
@property (nonatomic, strong, readonly) CNISDKVenue *geoFencedVenue;

/**
 *  Default constructor to create new instance of `CNISDKGeoFenceVenueRegion`
 *
 *  @param venue `CNISDKVenue` objects
 *  @param region core location geo fence region
 *  @return newly created instance of `CNISDKGeoFenceVenueRegion`
 */
- (instancetype)initWithVenue:(CNISDKVenue *)venue clRegion:(CLCircularRegion *)region;

@end

NS_ASSUME_NONNULL_END

