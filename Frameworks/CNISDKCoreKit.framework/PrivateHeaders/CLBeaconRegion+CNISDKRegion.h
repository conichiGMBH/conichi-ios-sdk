//
//  CLBeaconRegion+CNISDKRegion.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/6/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN


@interface CLBeaconRegion (CNISDKRegion)

+ (CLBeaconRegion *)conichiBeaconRegion;

@end

NS_ASSUME_NONNULL_END
