//
//  CNISDKAPIManager+PreCheckin.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/10/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKVenue;
@class CNISDKCreatePreCheckinRequestInfo;

#import "CNISDKPreCheckinRequest.h"
#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIManager (PreCheckin)

/**
 *  Creates pre checkin object on the conichi's backend
 *
 *  @param requestInfo create pre checkin request
 *  @param completion  callback block with two parameters
 *                     1. CNISDKPreCheckinRequest object
 *                     2. NSError object if request fails
 */
- (void)createPreCheckinRequestInVenueWithRequestInfo:(CNISDKCreatePreCheckinRequestInfo *)requestInfo completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Deletes pre checkin object form the conichi's backend
 *  Also removes this pre checkin from the given guest's pre checkins array
 *
 *  @param preCheckinRequest deleting pre checkin request
 *  @param guest             guest object
 *  @param completion        callback block with two parameters
 *                           1. BOOL flag whether it's succeeded or not
 *                           2. NSError object if request fails
 */
- (void)deletePreCheckinRequest:(CNISDKPreCheckinRequest *)preCheckinRequest fromGuest:(CNISDKGuest *)guest completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 *  Fetches all pre checkin requests for current guest and saves this info in the given guest object
 *
 *  @param guest      guest for which fetch pre checkin requests
 *  @param completion callback block with two parameters
 *                    1. NSArray<CNISDKPreCheckinRequest> objects
 *                    2. NSError object if request fails
 */
- (void)fetchPreCheckinRequestsForGuest:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
