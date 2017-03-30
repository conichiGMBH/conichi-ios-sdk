//
//  CNISDKReservation.h
//  conichiSDK
//
//  Created by Anton Domashnev on 17/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKReservationGuest;


#define CNISDKReservationKeypath(NAME) CNISDKKeypath(CNISDKReservation, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  Possible reservation statuses
 */
typedef NS_ENUM(NSInteger, CNISDKReservationStatus) {
    /**
     *  Reservation has unexpected status
     */
    CNISDKReservationStatusUnknown,

    /**
     *  Checkin is not open in PMS, but the guest has a reservation.
     */
    CNISDKReservationStatusReserved,

    /**
     *  The guest is checked in in the PMS and has a open checkin in conichi.
     */
    CNISDKReservationStatusInHouse,

    /**
     *  The guest is checked out in PMS (checkin closed in conichi)
     */
    CNISDKReservationStatusCheckedOut
};

/**
 *  The `CNISDKReservation` defines entity that represents information about the guests reservation in the hotel
 */
@interface CNISDKReservation : CNISDKObject

/**
 *  Reservation's status
 */
@property (nonatomic, assign, readonly) CNISDKReservationStatus status;

/**
 *  Reservationist's conichi id
 */
@property (nonatomic, copy, readonly) NSString *guestConichiID;

/**
 *  Venue with the reservation in conichi id
 */
@property (nonatomic, copy, readonly) NSString *venueConichiID;

/**
 *  Associated checkin reservation id, can be nil is there is no associated checkin yet
 */
@property (nonatomic, copy, readonly, nullable) NSString *checkinConichiID;

/**
 *  External reservation id that guest knows about
 */
@property (nonatomic, copy, readonly) NSString *externalReservationID;

/**
 *  Client side ID holds the valid of the guest typed reservation ID
 *  The use case behind is that the guest can find a reservation by various IDs and
 *  the UI has to show exact the same string as the guest has used
 */
@property (nonatomic, copy, readonly) NSString *clientSideID;

/**
 *  The date in UTC time zone of the checkin
 */
@property (nonatomic, strong, readonly) NSDate *checkinDate;

/**
 *  The date in UTC time zone of the checkout
 */
@property (nonatomic, strong, readonly) NSDate *checkoutDate;

/**
 *  ISO 8601 code of the currency to be paid for the reservation
 */
@property (nonatomic, copy, readonly) NSString *priceCurrencyCode;

/**
 *  Total amount reservation costs
 */
@property (nonatomic, strong, readonly) NSNumber *totalStayPriceAmount;

/**
 *  Total amount guest has already paid but it has not been synced with PMS yet
 */
@property (nonatomic, strong, readonly) NSNumber *notSyncedPaidPriceAmount;

/**
 *  Reserved room number. Can be nil if it's still unassigned
 */
@property (nonatomic, copy, readonly, nullable) NSString *roomNumber;

/**
 *  Guests for this reservation
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKReservationGuest *> *guests;

/**
 *  The flag shows whether the mobile checkin is open and can be done or not
 */
@property (nonatomic, assign, getter=isMobileCheckinOpen, readonly) BOOL mobileCheckinOpen;

/**
 *  Information about the reservation that can be displayed to the user (it's formatted and in human readable format)
 */
@property (nonatomic, copy, readonly) NSString *reservationInfo;

/**
 *  The remained price amount to be paid by the guest
 */
@property (nonatomic, strong, readonly) NSNumber *remainPriceAmountToPay;

@end

@interface CNISDKReservation (Deprecated)

/**
 *  Internal reservation id that guest does not know about and only Propert Management System knows about it
 */
@property (nonatomic, copy, readonly) NSString *internalReservationID __deprecated_msg("the field as deprecated and will be removed in next major release");

@end

NS_ASSUME_NONNULL_END
