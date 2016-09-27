//
//  CNISDKTrackingNotifier.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKMacros.h"

@class CNISDKBeacon;
@class CNISDKVenue;
@class CNISDKRegion;
@class CNISDKTrackin;
@class CNISDKGuest;
@class CNISDKAPIManager;
@class CNISDK;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKTrackingNotifier : NSObject

- (instancetype)initWithGuest:(CNISDKGuest *)guest apiManager:(CNISDKAPIManager *)apiManager sdk:(CNISDK *)sdk;

/**
 * Notify CNISDKDelegate with conichiSDKDidDiscoverVenue:
 * Send notification with name kCNISDKDidDiscoverVenueNotification for internal usage
 * @param venue - discovered venue
 */
- (void)notifyAboutDiscoveredVenue:(CNISDKVenue *)venue;

/**
 * Notify CNISDKDelegate with conichiSDKDidDiscoverRegion:inVenue:
 * Send notification with name kCNISDKDidDiscoverRegionInVenueNotification for internal usage
 * Create trackin for the current guest in the given beacon
 * @param region - discovered region
 * @param venue - venue belongs to the discovered region
 */
- (void)notifyAboutDiscoveredRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue;

/**
 * Notify CNISDKDelegate with conichiSDKDidLeaveVenue:
 * Send notification with name kCNISDKDidLeaveVenueNotification for internal usage
 * @param venue - left venue
 */
- (void)notifyAboutLeftVenue:(CNISDKVenue *)venue;

/**
 * Notify CNISDKDelegate with conichiSDKDidLeaveRegion:inVenue::
 * Send notification with name kCNISDKDidLeaveRegionInVenueNotification for internal usage
 * Close given trackin object
 * @param region - left region
 * @param trackin - trackin associated with left region
 * @param venue - venue belong to the left region
 */
- (void)notifyAboutLeftRegion:(CNISDKRegion *)region withTrackin:(nullable CNISDKTrackin *)trackin inVenue:(CNISDKVenue *)venue;

@end

NS_ASSUME_NONNULL_END
