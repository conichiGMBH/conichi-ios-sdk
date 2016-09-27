//
//  CNISDKPayForReservationRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 27/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPayForReservationRequestInfo` class helps to build request to pay for reservation
 */
@interface CNISDKPayForReservationRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  Conichi id of the reservation to pay for
 */
@property (nonatomic, copy) NSString *reservationID;

/**
 *  Amount to be paid
 */
@property (nonatomic, strong) NSNumber *amount;

/**
 *  Currency code for the payment transaction
 */
@property (nonatomic, copy) NSString *currencyCode;

/**
 *  Credit card conichi id that should be used for payment
 */
@property (nonatomic, copy) NSString *creditCardID;

@end

NS_ASSUME_NONNULL_END
