//
//  CNISDKRangedBeaconsHandler.h
//  conichiSDK
//
//  Created by Anton Domashnev on 5/21/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;
@class CNISDKAPIManager;
@class CLBeacon;
@class CNISDKBeaconsFilter;
@class CNISDK;

extern NSUInteger const kCNISDKRangedBeaconsHandlerMaximumNumberOfConsequentNoBeaconsNearby;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKRangedBeaconsHandler : NSObject

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Creates an instance of CNISDKRangedBeaconsHandler object
 *
 *  @param guest         current guest
 *  @param apiManager    api manager instance
 *  @param beaconsFilter beaconsFilter instance to find conichi beacon from core location beacons array
 *  @param sdk           sdk shared instance  
 *
 *  @return new instance of CNISDKRangedBeaconsHandler
 */
- (instancetype)initWithGuest:(CNISDKGuest *)guest
                   apiManager:(CNISDKAPIManager *)apiManager
                beaconsFilter:(CNISDKBeaconsFilter *)beaconsFilter
                          sdk:(CNISDK *)sdk NS_DESIGNATED_INITIALIZER;

/**
 *  Use this method to handle ranged by location manager beacons and do the tracking work
 *
 *  @param beacons CLBeacon objects array
 */
- (void)handleBeacons:(nullable NSArray<CLBeacon *> *)beacons;

/**
 *  Use this method to enable or disable the delay before notifying that there are no beacons around
 *  The delay is the number of consequent no beacons nearby calls and by default is 
 *  kCNISDKRangedBeaconsHandlerMaximumNumberOfConsequentNoBeaconsNearby
 *
 *  @param enabled if enabled or not
 */
- (void)setBeaconsHandlerConsequencyDelayEnabled:(BOOL)enabled;

@end

NS_ASSUME_NONNULL_END
