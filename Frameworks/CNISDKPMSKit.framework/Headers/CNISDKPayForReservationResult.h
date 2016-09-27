//
//  CNISDKPayForReservationResult.h
//  conichiSDK
//
//  Created by Anton Domashnev on 27/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKPaymentTransaction;
@class CNISDKReservation;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPayForReservationResult` class representa the succeess result of pay for reservation request
 */
@interface CNISDKPayForReservationResult : NSObject

/**
 *  Result transaction object
 */
@property (nonatomic, strong, readonly) CNISDKPaymentTransaction *paymentTransaction;

/**
 *  Updated reservation object
 */
@property (nonatomic, strong, readonly) CNISDKReservation *reservation;

/**
 *  Initializes new `CNISDKPayForReservationResult` instance with the response objects
 *
 *  @param paymentTransaction result transaction object
 *  @param reservation        updated reservation object
 *
 *  @return newly created `CNISDKPayForReservationResult` instance
 */
- (instancetype)initWithTransaction:(CNISDKPaymentTransaction *)paymentTransaction reservation:(CNISDKReservation *)reservation;

@end

NS_ASSUME_NONNULL_END
