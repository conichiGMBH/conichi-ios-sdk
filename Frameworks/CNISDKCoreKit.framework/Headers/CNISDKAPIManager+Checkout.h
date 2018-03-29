//
//  CNISDKAPIManager+Checkout.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKDeliverableCheckoutItem;
@class CNISDKDeliverableCountableItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+Checkout` is a category in CNISDKAPIManager that extends it's functionality with methods related to checkout functional
 */
@interface CNISDKAPIManager (Checkout)

/**
 *  Fetches all deliverable categories with items inside for the given venue
 *
 *  @param conichiID  venue's' conichiID
 *  @param completion callback block with two parameters
 *                    1. Categories array
 *                    2. NSError object if request failed
*/
- (void)fetchDeliverableCategoriesForVenueID:(NSString *)conichiID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Creates checkout request for the current guest and current open checkin. Open checkin presents is a required condition
 *
 *  @param items        array of CNISDKDeliverableCountableItem objects
 *  @param creditCardID selected payment instrument id
 *  @param completion   callback block with two parameters
 *                      1. CNISDKCheckoutRequest object
 *                      2. NSError object if request failed
 */
- (void)createCheckoutRequestWithDeliverableCountableItems:(nullable NSArray<CNISDKDeliverableCountableItem *> *)items selectedCreditCard:(NSString *)creditCardID completion:(nullable CNISDKIDErrorBlock)completion;

- (void)createAdHocCheckoutRequestWithVenueID:(NSString *)venueID roomNumber:(NSString *)roomNumber deliverableCountableItems:(nullable NSArray<CNISDKDeliverableCountableItem *> *)items selectedCreditCard:(NSString *)creditCardID completion:(nullable CNISDKIDErrorBlock)completion;

- (void)fetchCheckoutRequestsSinceTimeStamp:(nullable NSString *)sinceTimeStamp untilTimeStamp:(nullable NSString *)untilTimeStamp limit:(nullable NSNumber *)limit completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
