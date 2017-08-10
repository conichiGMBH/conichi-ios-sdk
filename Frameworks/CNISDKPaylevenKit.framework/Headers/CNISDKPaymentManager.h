//
//  CNISDKPaymentManager.h
//  CNISDKPaylevenKit
//
//  Created by Anton Domashnev on 07.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


NS_ASSUME_NONNULL_BEGIN


/**
 *  Deprecated version of CNISDKPaylevenPaymentInstrumentManager
 */
@interface CNISDKPaymentManager : NSObject

/**
 *  Singleton object for payment manager
 *
 *  @return shared payment manager
 */
+ (id<CNISDKPaymentInstrumentManager>)sharedManager __deprecated_msg("use [CNISDKPayleven sharedInstance].paymentInstrumentManager instead");

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
- (void)addPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)address forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion __deprecated_msg("use same method on [CNISDKPayleven sharedInstance].paymentInstrumentManager instead");

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
- (void)deletePaymentInstrumentWithID:(NSString *)conichiID useCase:(NSString *)useCase fromGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestErrorBlock)completion __deprecated_msg("use same method on [CNISDKPayleven sharedInstance].paymentInstrumentManager instead");

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
- (void)updatePaymentInstrument:(NSString *)conichiID billingAddress:(CNISDKPaymentBillingAddress *)billingAddress forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion __deprecated_msg("use same method on [CNISDKPayleven sharedInstance].paymentInstrumentManager instead");

@end

NS_ASSUME_NONNULL_END
