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
@property (nonatomic, strong, readonly) NSNumber *arriveTime;

/**
 *  Venue associated to the pre checkin
 */
@property (nonatomic, strong, readonly) CNISDKVenue *venue;

/**
 *  Requested items by the guest
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKDeliverableCountableItem *> *requestedItems;

@end

NS_ASSUME_NONNULL_END
