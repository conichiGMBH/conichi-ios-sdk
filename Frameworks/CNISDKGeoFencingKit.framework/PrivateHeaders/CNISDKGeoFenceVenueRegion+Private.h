//
//  CNISDKGeoFenceVenueRegion+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKGeoFenceVenueRegion.h"

@class CLCircularRegion;
@class CNISDKVenue;

NS_ASSUME_NONNULL_BEGIN

@interface CNISDKGeoFenceVenueRegion (Private)

/**
 *  Underlying core location circular region
 */
@property (nonatomic, strong, readwrite) CLCircularRegion *clRegion;

/**
 *  Venue that has been discovered or left
 */
@property (nonatomic, strong, readwrite) CNISDKVenue *geoFencedVenue;

@end

NS_ASSUME_NONNULL_END

