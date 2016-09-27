//
//  CNISDKAPIManager+Reservation.h
//  conichiSDK
//
//  Created by Anton Domashnev on 17/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKCreateReservationRequestInfo;
@class CNISDKPayForReservationRequestInfo;
@class CNISDKUpdateReservationMasterBillRequestInfo;


NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+Reservation` is a category on `CNISDKAPIManager` that extends it's functionality with working with reservation methods
 */
@interface CNISDKAPIManager (Reservation)

/**
 *  Creates a reservation object on the backend with guest's reservation identifier and for specific venue id
 *
 *  @param requestInfo create reservation request
 *  @param completion  completion block with two optional parameters:
 *                     1. CNISDKReservation object if created
 *                     2. NSError if request failed
 */
- (void)createReservationWithRequest:(CNISDKCreateReservationRequestInfo *)requestInfo completion:(nonnull CNISDKIDErrorBlock)completion;

/**
 *  Assigns room and changes checkin status from pending to open.
 *
 *  @param reservationConichiID reservation conichi id
 *  @param completion           completion block with two optional parameters:
 *                              1. CNISDKReservation object if created
 *                              2. NSError if request failed
 */
- (void)performMobileCheckinForReservationWithID:(NSString *)reservationConichiID completion:(CNISDKIDErrorBlock)completion;

/**
 *  Confirms reservation with the given id
 *
 *  @param reservationConichiID         confirming reservation id
 *  @param notifyAboutMobileCheckinOpen the flag whether the guest wants to be subscribed on the notification when mobile checkin is open
 *  @param completion                   completion block with two optional parameters:
 *                                      1. CNISDKReservation object if created
 *                                      2. NSError if request failed
 */
- (void)confirmReservationWithID:(NSString *)reservationConichiID notifyAboutMobileCheckinOpen:(BOOL)notifyAboutMobileCheckinOpen completion:(CNISDKIDErrorBlock)completion;

/**
 *  Sends the request to pay for the reservation with the given request info
 *
 *  @param requestInfo pay for reservation request info
 *  @param completion  completion block with two optional parameters:
 *                     1. CNISDKPayForReservationResult object if created
 *                     2. NSError if request failed
 */
- (void)payForReservationWithRequest:(CNISDKPayForReservationRequestInfo *)requestInfo completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches the reservation object from the conichi backend with the given conichi id
 *
 *  @param reservationID reservation's conichi id
 *  @param completion    completion block with two optional parameters:
 *                       1. CNISDKReservation object if created
 *                       2. NSError if request failed
 */
- (void)fetchReservationWithID:(NSString *)reservationID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches reservation's master bill. It can contain information about purchased items from PMS and also custom items provided by user or 
 *  conichi
 *
 *  @param reservationID conichiID of the associated reservation
 *  @param completion    completion block with two optional parameters:
 *                       1. CNISDKFolio if exist
 *                       2. NSError if request failed
 */
- (void)fetchReservationMasterBill:(NSString *)reservationID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Updates reservation's master bill
 *
 *  @param requestInfo request info with information to update master bill for the reservation
 *  @param completion  completion block with two optional parameters:
 *                     1. CNISDKFolio if exist
 *                     2. NSError if request failed
 */
- (void)updateReservationMasterBillWithRequest:(CNISDKUpdateReservationMasterBillRequestInfo *)requestInfo completion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Changes checkin status from open to closed.
 *
 *  @param reservationConichiID reservation conichi id
 *  @param completion           completion block with two optional parameters:
 *                              1. Boolean flag if succeeded
 *                              2. NSError if request failed
 */
- (void)performMobileCheckoutForReservationWithID:(NSString *)reservationConichiID completion:(CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
