//
//  CNISDKPaymentInstrumentManager.h
//  CNISDKPaymentKit
//
//  Created by Anton Domashnev on 06.07.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKPaymentInstrument;
@class CNISDKPaymentBillingAddress;
@class CNISDKGuest;

#import <CNISDKCoreKit/CNISDKCoreKit.h>
#import "CNISDKPaymentKitConstants.h"


NS_ASSUME_NONNULL_BEGIN

/**
 * Describes the object that manages payment instrumets for guest
 */
@protocol CNISDKPaymentInstrumentManager <NSObject>

/**
 *  Adds payment instrument for the given guest
 *
 *  @param paymentInstrument adding payment instrument
 *  @param address           billing address
 *  @param guest             for whom we are adding payment instrument
 *  @param completion        callback block with three parameters
 *                           1. Updated guest object
 *                           2. Added credit card object
 *                           3. NSError object if request failed
 */
- (void)addPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)address forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

/**
 *  Deletes credit card with given conichiID from the current guest
 *
 *  @param conichiID  credit card object conichi id
 *  @param useCase    payment instrument use case
 *  @param guest      guest which credit card we are gonna delete
 *  @param completion callback block with three parameters
 *                    1. Updated guest object
 *                    2. NSError object if request failed
 */
- (void)deletePaymentInstrumentWithID:(NSString *)conichiID useCase:(NSString *)useCase fromGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 * Updates given payment istrument's billing address
 * @param conichiID - credit card object conichi id
 * @param billingAddress - new billing address @see kCNISDKAPIManagerCreditCard...
 * @param guest - guest which credit card we are gonna update
 * @param completion - callback block with three parameters
 *                     1. Updated guest object
 *                     2. Updated card object
 *                     4. NSError object if request failed
 */

/**
 *  Updates given payment istrument's billing address
 *
 *  @param conichiID      credit card object conichi id
 *  @param billingAddress new billing address @see kCNISDKAPIManagerCreditCard...
 *  @param guest          guest which credit card we are gonna update
 *  @param completion     callback block with three parameters
 *                        1. Updated guest object
 *                        2. Updated card object
 *                        3. NSError object if request failed
 */
- (void)updatePaymentInstrument:(NSString *)conichiID billingAddress:(CNISDKPaymentBillingAddress *)billingAddress forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
