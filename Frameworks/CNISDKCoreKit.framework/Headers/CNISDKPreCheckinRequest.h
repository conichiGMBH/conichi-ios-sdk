//
//  CNISDKPreCheckinRequest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/10/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKVenue;
@class CNISDKDeliverableCountableItem;

#import "CNISDKEnums.h"


#define CNISDKPreCheckinRequestKeypath(NAME) CNISDKKeypath(CNISDKPreCheckinRequest, NAME)


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKPreCheckinRequestOpen;
extern NSString *const kCNISDKPreCheckinRequestClosed;
extern NSString *const kCNISDKPreCheckinRequestBusiness;
extern NSString *const kCNISDKPreCheckinRequestLeisure;

/**
 * The `CNISDKPreCheckinRequest` class represents the conichi's pre checkin request object
 * This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKPreCheckinRequest : CNISDKObject

///--------------------------------------------
/// @name PreCheckinRequest-specific Properties
///--------------------------------------------

@property (nonatomic, strong, readonly) NSDate *arriveDate;

@property (nonatomic, strong, readonly) NSDate *departureDate;

/**
 * The status of the pre checkin request.
 * see constants kCNISDKPreCheckinRequestOpen or kCNISDKPreCheckinRequestClosed
 */
@property (nonatomic, strong, readonly) NSString *status;

/**
 * The enum representation of the pre checkin request status
 * @see CNISDKPreCheckinRequestStatus
 */
@property (nonatomic, assign, readonly) CNISDKPreCheckinRequestStatus statusEnum;

/**
 * @see CNISDKPreCheckinRequestArriveTime
 */
@property (nonatomic, strong, readonly) NSNumber *arriveTime DEPRECATED_ATTRIBUTE;

/**
 *  Venue associated to the pre checkin
 */
@property (nonatomic, strong, readonly) CNISDKVenue *venue;

/**
 *  Reservation number of this pre checkin request
 */
@property (nonatomic, strong, readonly) NSNumber *reservationNumber;

/**
 *  Room type of this pre checkin request
 */
@property (nonatomic, strong, readonly) NSString *roomType;

/**
 *  Travel purpose of this pre checkin request.
 *  See constants kCNISDKPreCheckinRequestBusiness and kCNISDKPreCheckinRequestLeisure
 */
@property (nonatomic, strong, readonly) NSString *travelPurpose;

/**
 *  The enum representation of pre checkin travel purpose
 *  @see CNISDKPreCheckinRequestTravelPurpose
 */
@property (nonatomic, assign, readonly) CNISDKPreCheckinRequestTravelPurpose travelPurposeEnum;

/**
 *  Requested items by the guest
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKDeliverableCountableItem *> *requestedItems;

@end

NS_ASSUME_NONNULL_END
