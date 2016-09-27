//
//  CNISDKAPIManager+Venue.h
//  conichiSDK
//
//  Created by linkov on 9/1/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+Venue` is a category on CNISDKAPIManager that extends it's functionality with venue related methods
 */
@interface CNISDKAPIManager (Venue)

/**
 *  Fetches an array of CNISDKVenueCard objects from the backend
 *
 *  @param conichiID id of venue
 *  @param completion callback block with three parameters
 *                    1. NSArray of CNISDKVenueCard objects
 *                    2. NSError object if request failed
 */
- (void)fetchCardsForVenueID:(NSString *)conichiID withCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches an array of CNISDKVenue objects from the backend and store it in local cache
 *  The venue array depends on ip address location
 *
 *  @note Authorization isn't neccessary to make this request
 *
 *  @param completion callback block with three parameters
 *                    1. NSArray of CNISDKVenue objects
 *                    2. NSError object if request failed
 */
- (void)fetchVenuesWithCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Fetch an array of CNISDKVenue objects that supports pre checkin
 * The venue array depends on ip address location
 * @param completion - callback block with three parameters
 *                     1. NSArray of CNISDKVenue objects
 *                     2. Success flag - whether request succeeded or not
 *                     3. NSError object if request failed
 */

/**
 *  Fetches an array of CNISDKVenue objects that supports pre checkin
 *  The venue array depends on ip address location
 *
 *  @param completion callback block with three parameters
 *                    1. NSArray of CNISDKVenue objects
 *                    2. NSError object if request failed
 */
- (void)fetchVenuesWithPreCheckinAvailableWithCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches an array of CNISDKVenue objects from the backend and store it in local cache
 *  The venue array depends on ip address location
 *
 *  @note Authorization isn't neccessary to make this request
 *
 *  @param latitude   latitude of the center of venues region
 *  @param longitude  longitude of the center of venues region
 *  @param completion callback block with three parameters
 *                    1. NSArray of CNISDKVenue objects
 *                    2. NSError object if request failed
 */
- (void)fetchVenuesNearLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches an up to date venue detail information
 *
 *  @param venueID    conichiID of the fetched object
 *  @param completion callback block with three parameters
 *                    1. CNISDKVenue object
 *                    2. NSError object if request failed
 */
- (void)fetchVenueWithID:(NSString *)venueID completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
