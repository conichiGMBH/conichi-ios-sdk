//
//  CNISDKGeoFenceVenuesFetcher.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/3/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CLLocation;
@class CLLocationManager;
@class CNISDKAPIManager;
@class CNISDKVenue;
@class CNISDKGeoFencingLocationValidator;

#import <CNISDKCoreKit/CNISDKConstants.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^CNISDKGeoFenceVenuesFetcherCallback)(CLLocation *_Nullable location, NSArray<CNISDKVenue *> *_Nullable venues, NSError *_Nullable error);

/**
 *  The 'CNISDKGeoFenceVenuesFetcher' fetches the CNISDKVenue from the API depending on the current location
 */
@interface CNISDKGeoFenceVenuesFetcher : NSObject

/**
 *  Initializes new instance of CNISDKGeoFenceVenuesFetcher
 *
 *  @param locationManager location manager to fetch current location
 *  @param apiManager      api manager to fetch venues from the backend
 *  @param validator       validator to validate the location
 *
 *  @return newly created CNISDKGeoFenceVenuesFetcher
 */
- (instancetype)initWithLocationManager:(CLLocationManager *)locationManager apiManager:(CNISDKAPIManager *)apiManager validator:(CNISDKGeoFencingLocationValidator *)validator;

/**
 *  Fetches venues from the backend based on the current location
 *
 *  @param completion block with two parameters:
 *                    1. Location object around that venues were fetched
 *                    1. Array of CNISDKVenue around the given location
 *                    2. NSError opbject if fails
 */
- (void)fetchGeoFenceVenues:(nullable CNISDKGeoFenceVenuesFetcherCallback)completion;

@end

NS_ASSUME_NONNULL_END
