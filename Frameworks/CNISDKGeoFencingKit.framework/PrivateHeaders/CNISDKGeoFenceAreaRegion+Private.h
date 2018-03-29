//
//  CNISDKGeoFenceAreaRegion+Private.h
//  CNISDKGeoFencingKit
//
//  Created by Mourad on 11/7/17.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKGeoFenceAreaRegion.h"

@class CLCircularRegion;
@class CNISDKGeoFence;

NS_ASSUME_NONNULL_BEGIN

@interface CNISDKGeoFenceAreaRegion (Private)

/**
 *  Underlying core location circular region
 */
@property (nonatomic, strong, readwrite) CLCircularRegion *clRegion;

/**
 *  Geofence that has been discovered or left
 */
@property (nonatomic, strong, readwrite) CNISDKGeoFence *geofence;

@end

NS_ASSUME_NONNULL_END


