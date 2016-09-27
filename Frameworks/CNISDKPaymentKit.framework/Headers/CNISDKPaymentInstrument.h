//
//  CNISDKPaymentInstrument.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/4/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Use case for payment instrument. Use case is supposed to be a unique identificator for payment instrument type
 *  Conichi currently support you two use cases below and one unknown
 */
typedef NS_ENUM(NSInteger, CNISDKPaymentInstrumentUseCase) {
    /**
     *  Use case is used when user provided unsupported use case or does not provide use case at all
     */
    CNISDKPaymentInstrumentUseCaseUnknown,
    /**
     *  Use this use case to mean personal or private payment instrument for the guest
     */
    CNISDKPaymentInstrumentUseCasePrivate,
    /**
     *  Use this use case to mean business or company's payment instrument for the guest
     */
    CNISDKPaymentInstrumentUseCaseBusiness
};

/**
 *  The `CNISDKPaymentInstrument` class represents a creating payment instrument for the guest (now it represents credit card). This class is used only to create payment instrument (@see `CNISDKPaymentManager`)
 */
@interface CNISDKPaymentInstrument : NSObject

///--------------------------------------
/// @name PaymentInstrument-specific Properties
///--------------------------------------

/**
 *  The use case of the payment instrument
 *
 *  @see CNISDKPaymentInstrumentUseCase
*/
@property (nonatomic, assign) CNISDKPaymentInstrumentUseCase instrumentUseCase;

/**
 *  The string representation of the payment instrument use case
 *
 *  @warning It can return nil in case of instrumentUseCase is CNISDKPaymentInstrumentUseCaseUnknown
 */
@property (nonatomic, copy, readonly, nullable) NSString *instrumentUseCaseString;

/**
 *  The primary account number of the payment instrument (for credit card it's a credit card number)
 *
 *  @note Value must be without any formatting - just digits
 */
@property (nonatomic, copy) NSString *pan;

/**
 *  The expiry month of the payment instrument
 *
 *  @note Format: MM
 */
@property (nonatomic, copy) NSString *expiryMonth;

/**
 *  The expiry year of the payment instrument
 *
 *  @note Format: YYYY
 */
@property (nonatomic, copy) NSString *expiryYear;

/**
 *  The cvv of the payment instrument
 *
 *  @note Value must be without any formatting
 */
@property (nonatomic, copy) NSString *cvv;

/**
 *  The card holder of the payment instrument. Full name
 */
@property (nonatomic, copy) NSString *cardHolder;

/**
 *  External payment system instrument identifier
 */
@property (nonatomic, copy) NSString *externalIdentifier;

@end

NS_ASSUME_NONNULL_END
