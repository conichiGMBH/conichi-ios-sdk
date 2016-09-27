//
//  CNISDKGeoFenceVenuesFetcher.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/3/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKLocationManager;
@class CNISDKAPIManager;

#import <CNISDKCoreKit/CNISDKConstants.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenceVenuesFetcher' fetches the CNISDKVenue from the API depending on the current location
 */
@interface CNISDKGeoFenceVenuesFetcher : NSObject

/**
 *  Initializes new instance of CNISDKGeoFenceVenuesFetcher
 *
 *  @param locationManager location manager to fetch current location
 *  @param apiManager      api manager to fetch venues from the backend
 *
 *  @return newly created CNISDKGeoFenceVenuesFetcher
 */
- (instancetype)initWithLocationManager:(CNISDKLocationManager *)locationManager apiManager:(CNISDKAPIManager *)apiManager;

/**
 *  Fetches venues from the backend based on the current location
 *
 *  @param completion block with two parameters:
 *                    1. Array of CNISDKVenue if exists
 *                    2. NSError opbject if fails
 */
- (void)fetchGeoFenceVenues:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
