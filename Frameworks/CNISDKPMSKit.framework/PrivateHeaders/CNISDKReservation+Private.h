//
//  CNISDKReservation+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 17/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKReservation.h"

#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKReservation+Private` exposes the entity property with readwrite access
 */
@interface CNISDKReservation (Properties)

/**
 *  Reservation status string representation
 *  This is a private property which is public as a CNISDKReservationStatus enumeration
 */
@property (nonatomic, copy, readwrite) NSString *statusStringRepresentation;

/**
 *  Reservationist's conichi id
 */
@property (nonatomic, copy, readwrite) NSString *guestConichiID;

/**
 *  Venue with the reservation in conichi id
 */
@property (nonatomic, copy, readwrite) NSString *venueConichiID;

/**
 *  Associated checkin reservation id, can be nil is there is no associated checkin yet
 */
@property (nonatomic, copy, readwrite, nullable) NSString *checkinConichiID;

/**
 *  External reservation id that guest knows about
 */
@property (nonatomic, copy, readwrite) NSString *externalReservationID;

/**
 *  Internal reservation id that guest does not know about and only Propert Management System knows about it
 */
@property (nonatomic, copy, readwrite) NSString *internalReservationID;

/**
 *  The date in UTC time zone of the checkin
 */
@property (nonatomic, strong, readwrite) NSDate *checkinDate;

/**
 *  The date in UTC time zone of the checkout
 */
@property (nonatomic, strong, readwrite) NSDate *checkoutDate;

/**
 *  ISO 8601 code of the currency to be paid for the reservation
 */
@property (nonatomic, copy, readwrite) NSString *priceCurrencyCode;

/**
 *  Total amount reservation costs
 */
@property (nonatomic, strong, readwrite) NSNumber *totalStayPriceAmount;

/**
 *  Reserved room number. Can be nil if it's still unassigned
 */
@property (nonatomic, copy, readwrite, nullable) NSString *roomNumber;

/**
 *  Total amount guest has already paid but it has not been synced with PMS yet
 */
@property (nonatomic, strong, readwrite) NSNumber *notSyncedPaidPriceAmount;

/**
 *  Guests for this reservation
 */
@property (nonatomic, strong, readwrite) NSArray<CNISDKReservationGuest *> *guests;

/**
 *  The flag shows whether the mobile checkin is open and can be done or not
 */
@property (nonatomic, assign, getter=isMobileCheckinOpen, readwrite) BOOL mobileCheckinOpen;

/**
 *  Information about the reservation that can be displayed to the user (it's formatted and in human readable format)
 */
@property (nonatomic, copy, readwrite) NSString *reservationInfo;

/**
 *  The remained price amount to be paid by the guest
 */
@property (nonatomic, strong, readwrite) NSNumber *remainPriceAmountToPay;

@end


/**
 *  The `CNISDKReservation+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKReservation (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
