//
//  CNISDKAddCreditCardRequestInfo.h
//  CNISDKPaymentKit
//
//  Created by Anton Domashnev on 13.07.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKPaymentInstrument;
@class CNISDKPaymentBillingAddress;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


extern NSString *const kCNISDKAPIManagerCreditCardPaylevenTokenKey;
extern NSString *const kCNISDKAPIManagerCreditCardLastFourDigitsKey;
extern NSString *const kCNISDKAPIManagerCreditCardBrandKey;
extern NSString *const kCNISDKAPIManagerCreditCardUseCaseKey;
extern NSString *const kCNISDKAPIManagerCreditCardCountryCodeKey;
extern NSString *const kCNISDKAPIManagerCreditCardStreetNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardProviderKey;
extern NSString *const kCNISDKAPIManagerCreditCardZipKey;
extern NSString *const kCNISDKAPIManagerCreditCardCityNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardBusinessNameKey;
extern NSString *const kCNISDKAPIManagerCreditCardExternalIdentifierKey;


@interface CNISDKAddCreditCardRequestInfo : NSObject <CNISDKRequestInfo>

@property (nonatomic, copy) NSString *lastFourDigits;
@property (nonatomic, copy) NSString *externalIdentifier;

@property (nonatomic, assign) CNISDKCreditCardProvider provider;
@property (nonatomic, assign) CNISDKCreditCardUseCase useCase;
@property (nonatomic, assign) CNISDKCreditCardBrand brand;

@property (nonatomic, copy) NSString *billingAddressCountryCode;
@property (nonatomic, copy) NSString *billingAddressCity;
@property (nonatomic, copy) NSString *billingAddressStreet;
@property (nonatomic, copy) NSString *billingAddressZip;
@property (nonatomic, copy, nullable) NSString *billingAddressBusinessName;

@end


@interface CNISDKAddCreditCardRequestInfo (CNISDKPaymentInstrument)

- (instancetype)initWithPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)billingAddress;

@end

NS_ASSUME_NONNULL_END
