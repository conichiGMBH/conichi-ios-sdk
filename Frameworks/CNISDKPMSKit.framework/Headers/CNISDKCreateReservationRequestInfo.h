//
//  CNISDKCreateReservationRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKCreateReservationRequestInfo` class helps to build request to create reservation
 */
@interface CNISDKCreateReservationRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  Reservation ID that the guest got from the booking provider
 */
@property (nonatomic, copy) NSString *externalReservationID;

/**
 *  Venue conichi ID to create reservation in
 */
@property (nonatomic, copy) NSString *venueConichiID;

/**
 *  The last name of the person who made the reservation
 */
@property (nonatomic, copy) NSString *reservationistLastName;

@end

NS_ASSUME_NONNULL_END
