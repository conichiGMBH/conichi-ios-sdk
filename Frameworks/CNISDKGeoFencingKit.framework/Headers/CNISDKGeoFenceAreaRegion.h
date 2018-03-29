//
//  CNISDKGeoFenceAreaRegion.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

#import "CNISDKGeoFenceRegion.h"

@class CNISDKGeoFence;
@class CLCircularRegion;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenceArea' is the class that contains information about geo fence by conichi SDK region
 */
@interface CNISDKGeoFenceAreaRegion : CNISDKGeoFenceRegion

/**
 *  Geofence area that has been discovered or left
 */
@property (nonatomic, strong, readonly) CNISDKGeoFence *geofence;

/**
 *  Default constructor to create new instance of `CNISDKGeoFenceAreaRegion`
 *
 *  @param geofence `CNISDKGeoFence` object
 *  @param region core location geo fence region
 *  @return newly created instance of `CNISDKGeoFenceAreaRegion`
 */
- (instancetype)initWithGeoFence:(CNISDKGeoFence *)geofence clRegion:(CLCircularRegion *)region;

@end

NS_ASSUME_NONNULL_END


