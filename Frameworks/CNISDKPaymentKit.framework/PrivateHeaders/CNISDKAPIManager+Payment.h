//
//  CNISDKAPIManager+Payment.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/4/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKGuest;


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKAPIManagerCreditCardPaylevenTokenKey;
extern NSString *const kCNISDKAPIManagerCreditCardLastFourDigitsKey;
extern NSString *const kCNISDKAPIManagerCreditCardBrandKey;
extern NSString *const kCNISDKAPIManagerCreditCardUseCaseKey;
extern NSString *const kCNISDKAPIManagerCreditCardCardHolderKey;
extern NSString *const kCNISDKAPIManagerCreditCardCountryCodeKey;
extern NSString *const kCNISDKAPIManagerCreditCardStreetNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardZipKey;
extern NSString *const kCNISDKAPIManagerCreditCardCityNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardBusinessNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardExternalIdentifierKey;


@interface CNISDKAPIManager (Payment)

/**
 * Fetches all given guest's credit cards
 * @param guest - CNISDKGuest object
 * @param completion - callback block with three parameters
 *                     1. Array of CNISDKCreditCard objects
 *                     2. NSError object if request failed
 */
- (void)fetchGuestCreditCards:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Adds new credit card with given parameter to the current guest
 * @param parameters - new Guest's credit card parameters. Possible keys are kCNISDKAPIManagerCreditCard*
 * @param guest - guest for whom we age gonna add credit card
 * @param completion - callback block with three parameters
 *                     1. Updated guest object
 *                     2. Added credit card object
 *                     3. NSError object if request failed
 */
- (void)addCreditCardForGuest:(CNISDKGuest *)guest withParameters:(NSDictionary *)parameters completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

/**
 * Deletes credit card with given conichiID from the current guest
 * @param creditCardID - credit card object conichi id
 * @param guest - guest which credit card we are gonna delete
 * @param completion - callback block with three parameters
 *                     1. Updated guest object
 *                     2. NSError object if request failed
 */
- (void)deleteCreditCardWithID:(NSString *)creditCardID fromGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 * Updates given credit card's billing address
 * @param creditCardID - credit card object conichi id
 * @param billingAddress - new billing address @see kCNISDKAPIManagerCreditCard...
 * @param guest - guest which credit card we are gonna update
 * @param completion - callback block with three parameters
 *                     1. Updated guest object
 *                     2. Updated card object
 *                     4. NSError object if request failed                  
 */
- (void)updateCreditCard:(NSString *)creditCardID billingAddress:(NSDictionary *)billingAddress forGuest:(CNISDKGuest *)guest completion:(nullable CNISDKGuestCreditCardErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
