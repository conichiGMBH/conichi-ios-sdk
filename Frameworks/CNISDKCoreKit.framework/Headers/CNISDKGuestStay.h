//
//  CNISDKGuestStay.h
//  CNISDKCoreKit
//
//  Created by ShengHua Wu on 06/11/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKVenue;
@class CNISDKPreCheckinRequest;

#import "CNISDKMacros.h"


#define CNISDKGuestStayKeypath(NAME) CNISDKKeypath(CNISDKGuestStay, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKGuestStay` class represents the stay of a conichi guest.
 * This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKGuestStay : CNISDKObject

@property (nonatomic, strong, readonly, nullable) NSDate *arrivalDate;
@property (nonatomic, strong, readonly) NSDate *departureDate;

/**
 *  The flag shows whether the stay is mobile checkin or not
 */
@property (nonatomic, assign, readonly, getter=isMobileCheckin) BOOL mobileCheckin;

/**
 *  The flag shows whether the stay is completed or not
 */
@property (nonatomic, assign, readonly, getter=isCompleted) BOOL completed;

/**
 *  The rating of the stay, can be nil if the guest hasn't rated this stay yet
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *rating;

/**
 *  The reservation number associated with the stay, can be nil if the stay isn't mobile checkin
 */
@property (nonatomic, strong, readonly, nullable) NSString *reservationNumber;

/**
 *  The checkin reservation id associated with the stay,
 *  can be nil if there is no associated checkin yet
 */
@property (nonatomic, strong, readonly, nullable) NSString *checkinConichiID;

/**
 *  The venue associated with the stay
 */
@property (nonatomic, strong, readonly) CNISDKVenue *associatedVenue;

/**
 *  The pre-checkin request associated with the stay, can be nil if the stay is mobile chekin
 */
@property (nonatomic, strong, readonly, nullable) CNISDKPreCheckinRequest *preCheckinRequest;

@end

NS_ASSUME_NONNULL_END
