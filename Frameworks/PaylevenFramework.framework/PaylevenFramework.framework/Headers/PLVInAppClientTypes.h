//
//  PLVInAppClientTypes.h
//  PaylevenInAppSDK
//
//  Created by ploenne on 30.10.14.
//  Copyright (c) 2014 payleven. All rights reserved.
//

@import Foundation;

#define     PLVPITypeCC         @"CC"
//#define     PLVPITypeDD         @"DD"
//#define     PLVPITypeSEPA       @"SEPA"
//#define     PLVPITypePAYPAL     @"PAYPAL"

typedef NS_ENUM(NSInteger, PLVPaymentInstrumentState) {
    PLVPaymentInstrumentOK = 0,       // The Payment Instrument can be used.
    PLVPaymentInstrumentDisabled,     // The Payment Instrument is disabled by @see disablePaymentInstrument:forUserToken:andCompletion.
    PLVPaymentInstrumentInvalid       // The Payment Instrument is is set to invalid.
};

/**
 *  Base class of Payment Instruments
 *
 */

@interface PLVPaymentInstrument : NSObject

@property (readonly,strong) NSString* type;
/** Identifier of Payment Instrument (readonly) */
@property (readonly,strong) NSString* identifier;
/** Internal state of Payment Instrument (readonly) */
@property (readonly) NSString* status;
/** Identifies the state of the Payment Instrument (readonly) */
@property (readonly) PLVPaymentInstrumentState state;
/** Identifies if the Payment Instrument is blocked (readonly) */
@property (nonatomic) BOOL blocked;

/**
 *  createCreditCardPaymentInstrumentWithPan:expiryMonth:expiryYear:cvv:andCardHolder:
 *
 *  Creates a Payment Instrument representing a Credit Card
 *
 *  @param pan         PAN of this credit card
 *  @param expiryMonth expiry month for this creditcard payment instrument (M or MM)
 *  @param expiryYear  expiry year for this creditcard payment instrument (YYYY)
 *  @param cvv         CVV for this creditcard payment instrument
 *  @param cardHolder  Name of the card holder of this credit card payment instrument as visible on the card
 *
 *  @return a Payment Instrument of class PLVPayInstrumentCC representing this Credit card
 */

+ (id)createCreditCardPaymentInstrumentWithPan:(NSString*)pan
                                   expiryMonth:(NSString*)expiryMonth
                                    expiryYear:(NSString*)expiryYear
                                           cvv:(NSString*)cvv
                                 andCardHolder:(NSString*)cardHolder;



/**
 *  createDebitCardPaymentInstrumentWithAccountNo:andRoutingNo:
 *
 *  Creates a Payment Instrument representing a Debit account
 *
 *  @param accountNo Account number of this debit account
 *  @param routingNo Routing number of this debit account
 *
 *  @return  a Payment Instrument of class PLVPayInstrumentDD presenting this Debit account
 */
//+ (id)createDebitCardPaymentInstrumentWithAccountNo:(NSString*)accountNo
//                                       andRoutingNo:(NSString*)routingNo;



/**
 *  createSEPAPaymentInstrumentWithIBAN:andBIC:
 *
 *  Creates a PaymentInstrument representing a SEPA account
 *
 *  @param iban       IBAN of this SEPA account
 *  @param bic        BIC of this SEPA account (optional)
 *
 *  @return  a Payment Instrument of class PLVPayInstrumentSEPA representing this SEPA account
 */

//+ (id)createSEPAPaymentInstrumentWithIBAN:(NSString*)iban
//                                   andBIC:(NSString*)bic;



/**
 *  createPAYPALPaymentInstrumentWithToken:
 *
 *  Creates a Payment Instrument representing a PayPal account
 *
 *  @param token       Token to get access to the PayPal account
 *
 *  @return   a Payment Instrument of class PLVPayInstrumentPAYPAL representing this PayPal account
 */

//+ (id)createPAYPALPaymentInstrumentWithToken:(NSString*)token;



@end

/**
 *  Credit Card Payment Instrument
 *
 *
 */
@interface PLVCreditCardPaymentInstrument : PLVPaymentInstrument

/** PAN of Credit card */
@property (readonly,strong) NSString* pan;
/** Card Brand of Credit card */
@property (readonly,strong) NSString* cardBrand;
/** Expiry month of Credit card, Format M or MM (valid Range from 01, 2, ... 12) */
@property (readonly,nonatomic) NSString * expiryMonth;
/** Expiry year of Credit card, Format YYYY (valid Range from 2010 ... 2050) */
@property (readonly,nonatomic) NSString * expiryYear;
/** Card Verification Value of Credit card */
@property (readonly,strong) NSString* cvv;
/** Card holder name of Credit card as visible on card*/
@property (readonly,strong) NSString* cardHolder;

/**
 *  validatePan:withError:
 *
 *  Validates if the card number of this card is valid or not.
 *
 *  @param pan   PAN value to validate
 *
 *  @param error            resulting validation error, will be nil if PAN passes the validation
 *
 *  @return TRUE for a valid PAN string ... otherwise FALSE
 */

+ (BOOL) validatePan:(NSString*)pan withError:(NSError **)error;

/**
 *  validateExpiryMonth:withError:
 *
 *  Validates if the expiry Month of this card is valid or not.
 *
 *  @param month                Month value to validate
 *
 *  @param error                resulting validation error, will be nil if values pass the validation
 *
 *  @return TRUE for a valid Month ... otherwise FALSE
 */

+ (BOOL) validateExpiryMonth:(NSString*)month withError:(NSError **)error;

/**
 *  validateExpiryYear:withError:
 *
 *  Validates if the expiry Year of this card is valid or not.
 *
 *  @param year                 Year value to validate
 *
 *  @param error                resulting validation error, will be nil if values pass the validation
 *
 *  @return TRUE for a valid Year ... otherwise FALSE
 */

+ (BOOL) validateExpiryYear:(NSString*)year withError:(NSError **)error;


/**
 *  validateExpiryMonth:andYear:withError:
 *
 *  Validates if the expiry date of this card is valid or not.
 *
 *  @param month                Month value to validate
 *
 *  @param year                 Year value to validate
 *
 *  @param error                resulting validation error, will be nil if values pass the validation
 *
 *  @return TRUE for a valid Month/Year combination  ... otherwise FALSE
 */

+ (BOOL) validateExpiryMonth:(NSString*)month andYear:(NSString*)year withError:(NSError **)error;

/**
 *  validateCVV:withError:
 *
 *  Does a partial validation of the CVV independent on the card number.
 *
 *  @param cvv                  CVV value to validate
 *
 *  @param error                resulting validation error, will be nil if CVV passes the validation
 *
 *  @return                     TRUE for a valid CVV string ... otherwise FALSE
 *
 *  Attention: Final CVV validation will also take PAN into consideration. Even though validation returns TRUE here it might get rejected later during addPaymentInstrument method, please refer to it's Error in this case.
 */

+ (BOOL) validateCVV:(NSString*)cvv withError:(NSError **)error;

/**
 *  validateCardHolder:withError:
 *
 *  Validates if the card holder of this card is valid or not.
 *
 *  @param cardHolder           cardHolder value to validate
 *  @param error                resulting validation error, will be nil if Card holder passes the validation
 *
 *  @return                     TRUE for a valid cardHolder string ... otherwise FALSE
 */

+ (BOOL) validateCardHolder:(NSString*)cardHolder withError:(NSError **)error;

@end




/**
 *  Debit Card Payment Instrument
 *
 *
 */

//@interface PLVDebitCardPaymentInstrument : PLVPaymentInstrument
///** Account number for this debit account */
//@property (readonly,strong) NSString* accountNo;
///** Routing number for this debit account */
//@property (readonly,strong) NSString* routingNo;
//
///**
// *  validateAccountNo:withError:
// *
// *  Check whether an account number is valid or not
// *
// *  @param accountNo            the accountNo value to validate
// *  @param error                resulting validation error, will be nil if Account number passes the validation
// *
// *  @return                     TRUE for a valid accountNumber string ... otherwise FALSE
// */
//
//+ (BOOL) validateAccountNo:(NSString*)accountNo withError:(NSError **)error;
//
///**
// *  validateRoutingNo:withError:
// *
// *  Check whether a routing number is valid or not
// *
// *  @param routingNo            the routingNo value to validate
// *  @param error                resulting validation error, will be nil if Routing number passes the validation
// *
// *  @return                     TRUE for a valid routingNumber string ... otherwise FALSE
// */
//
//+ (BOOL) validateRoutingNo:(NSString*)routingNo withError:(NSError **)error;
//
//@end

/**
 *  SEPA Account Payment Instrument
 *
 *
 */

//@interface PLVSEPAPaymentInstrument : PLVPaymentInstrument
//
///** IBAN for this SEPA account */
//@property (readonly,strong) NSString* iban;
///** BIC for this SEPA account */
//@property (readonly,strong) NSString* bic;
//
///**
// *  validateIBAN:withError:
// *
// *  Check whether the IBAN for this instance of the SEPA payment instrument is valid or not
// *
// *  @param iban                 IBAN value to validate
// *  @param error                resulting validation error, will be nil if IBAN passes the validation
// *
// *  @return                     TRUE for a valid IBAN string ... otherwise FALSE
// */
//
//+ (BOOL) validateIBAN:(NSString*)iban withError:(NSError **)error;
//
///**
// *  validateBIC:withError:
// *
// *  Check whether a BIC is valid or not
// *
// *  @param bic                  BIC value to validate
// *  @param error                resulting validation error, will be nil if BIC passes the validation
// *
// *  @return                     TRUE for a valid BIC string ... otherwise FALSE
// */
//
//+ (BOOL) validateBIC:(NSString*)bic withError:(NSError **)error;
//
//@end

/**
 *  PayPal Account Payment Instrument
 *
 *
 */

//@interface PLVPAYPALPaymentInstrument : PLVPaymentInstrument
//
///** Authentication Token for this PayPal Account */
//@property (readonly,strong) NSString* authToken;
//
///**
// *  validateAuthToken:withError:
// *
// *  Check whether an Authentication Token is valid or not
// *
// *  @param authToken            authToken value to validate
// *  @param error                resulting validation error, will be nil if Auth Token passes the validation
// *
// *  @return                     TRUE for a valid authToken string ... otherwise FALSE
// */
//
//+ (BOOL) validateAuthToken:(NSString*)authToken withError:(NSError **)error;
//
//@end