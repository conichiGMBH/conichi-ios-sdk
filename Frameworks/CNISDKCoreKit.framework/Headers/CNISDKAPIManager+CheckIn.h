//
//  CNISDKAPIManager+CheckIn.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/11/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKGuest;
@class CNISDKCheckin;

NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKCheckInFilter` is a class used to filter and sort NSArray with CNISDKCheckin objects
 */
@interface CNISDKCheckInFilter : NSObject

/**
 *  Filters given checkins array by venue, select the newest one
 *
 *  @param guest    given guest
 *  @param venue    in which venue we are looking for checkin
 *  @param checkIns array of CNISDKCheckin objects to filter
 *
 *  @return the newest checkin in the given venue from the given checkIns array
*/
- (nullable CNISDKCheckin *)lastGuestCheckIn:(CNISDKGuest *)guest inVenue:(CNISDKVenue *)venue fromCheckIns:(NSArray<CNISDKCheckin *> *)checkIns;

/**
 *  Filters given checkins array by status 'closed' and get last
 *
 *  @param checkIns array of CNISDKCheckin objects
 *
 *  @return the newest checkin from the given checkIns array with 'closed' status
 */
- (nullable CNISDKCheckin *)lastClosedCheckInfromCheckIns:(NSArray<CNISDKCheckin *> *)checkIns;

/**
 *  Filters given checkins array by status 'open' and get last
 *
 *  @param checkIns array of CNISDKCheckin objects
 *
 *  @return the newest checkin from the given checkIns array with 'open' status
 */
- (nullable CNISDKCheckin *)lastOpenCheckInfromCheckIns:(NSArray<CNISDKCheckin *> *)checkIns;

/**
 *  Sorts given checkins array by createdAt and get last
 *
 *  @param guest    given guest
 *  @param checkIns array of CNISDKCheckin objects
 *
 *  @return the newest checkin from the given checkIns array
 */
- (nullable CNISDKCheckin *)lastGuestCheckIn:(CNISDKGuest *)guest fromCheckIns:(NSArray<CNISDKCheckin *> *)checkIns;

@end

/**
 *  `CNISDKAPIManager+CheckIn` is a category on CNISDKAPIManager that extends it's functionality with checkin related methods
 */
@interface CNISDKAPIManager (CheckIn)

/**
 * Fetch all given guest's checkins
 * 
 * @param guest for which guest should fetch checkins
 * @param completion - callback block with three parameters
 *                     1. Array of CNISDKCheckin objects
 *                     2. NSError object if request failed
 */
- (void)fetchCheckInsForGuest:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Fetch detail checkin information for the given checkin object
 *
 * @param checkin    checkin object to be filled with detail information out
 * @param completion callback block with three parameters
 *                     1. CNISDKCheckin object if succeeded
 *                     2. NSError object if request failed
 */
- (void)fetchDetailCheckInInformation:(CNISDKCheckin *)checkin completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Add rating for the provided checkin. This method will update the given checkin object instead of creating a new one
 * 
 *  @param rating new checkin rating
 *  @param checkin checkin object to rate
 *  @param completion - callback block with three parameters
 *                      1. up to date CNISDKCheckin object
 *                      2. NSError object if request failed                 
 */
- (void)addRating:(NSNumber *)rating toCurrentVenueCheckin:(CNISDKCheckin *)checkin completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Add rating for the checkin with the given id
 *
 *  @param rating     new checkin rating
 *  @param checkinID  checkin conichi id to rate
 *  @param completion - callback block with three parameters
 *                      1. new CNISDKCheckin object
 *                      2. NSError object if request failed
 */
- (void)addRating:(NSNumber *)rating toCheckinWithID:(NSString *)checkinID completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
