//
//  CNISDKBeaconsFilter.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/10/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;
@import CoreLocation;

@class CNISDKBeacon;
@class CNISDKRegion;
@class CNISDKDiskStorageManager;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKBeaconsFilter : NSObject

- (instancetype)initWithLocalCacheManager:(CNISDKDiskStorageManager *)diskStorageManager;

/**
 * @param currentRegion - 
 * @param beaconsArray - ranged beacons from Apple framework
 * @return closest beacon object. Can be nil.
 */
- (nullable CNISDKBeacon *)getTheClosestBeaconFromBeaconsArray:(NSArray<CLBeacon *> *)beaconsArray currentRegion:(nullable CNISDKRegion *)currentRegion;

@end

NS_ASSUME_NONNULL_END
