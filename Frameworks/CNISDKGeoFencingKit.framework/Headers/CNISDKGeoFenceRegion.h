//
//  CNISDKGeoFenceRegion.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKVenue;

@class CLCircularRegion;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenceRegion' is the class that contains information about geo fence by conichi SDK region
 */
@interface CNISDKGeoFenceRegion : NSObject

/**
 *  Underlying core location circular region
 */
@property (nonatomic, strong, readonly) CLCircularRegion *clRegion;

/**
 *  Venue that has been discovered or left
 */
@property (nonatomic, strong, readonly) CNISDKVenue *geoFencedVenue;

@end

NS_ASSUME_NONNULL_END
