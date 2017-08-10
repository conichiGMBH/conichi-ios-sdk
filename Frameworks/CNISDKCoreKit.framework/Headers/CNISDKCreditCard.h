//
//  CNISDKCreditCard.h
//  conichiSDK
//
//  Created by Anton Domashnev on 7/20/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKAddress;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKCreditCardBrandVISA;
extern NSString *const kCNISDKCreditCardBrandAmex;
extern NSString *const kCNISDKCreditCardBrandMasterCard;
extern NSString *const kCNISDKCreditCardBrandDiscover;
extern NSString *const kCNISDKCreditCardBrandJCB;
extern NSString *const kCNISDKCreditCardBrandDinersClub;
extern NSString *const kCNISDKCreditCardBrandUnknown;

extern NSString *const kCNISDKCreditCardUseCasePrivate;
extern NSString *const kCNISDKCreditCardUseCaseBusiness;
extern NSString *const kCNISDKCreditCardUseCaseDefault;

extern NSString *const kCNISDKCreditCardProviderPayleven;
extern NSString *const kCNISDKCreditCardProviderSumUp;

/**
 *  Credit card provider
 */
typedef NS_ENUM(NSInteger, CNISDKCreditCardProvider) {
    /**
     *  Credit card is hosted in Payleven service
     */
    CNISDKCreditCardProviderPayleven,

    /**
     *  Credit card is hosted in SumUp service
     */
    CNISDKCreditCardProviderSumUp
};

/**
 *  Credit card brand
 */
typedef NS_ENUM(NSInteger, CNISDKCreditCardBrand) {
    CNISDKCreditCardBrandUnknown,
    CNISDKCreditCardBrandVISA,
    CNISDKCreditCardBrandAmex,
    CNISDKCreditCardBrandMasterCard,
    CNISDKCreditCardBrandDiscover,
    CNISDKCreditCardBrandJCB,
    CNISDKCreditCardBrandDinersClub
};

/**
 *  Credit card use case
 */
typedef NS_ENUM(NSInteger, CNISDKCreditCardUseCase) {
    /**
     *  Credit card use case is unknown
     */
    CNISDKCreditCardUseCaseUnknown,

    /**
     *  Credit card is private
     */
    CNISDKCreditCardUseCasePrivate,

    /**
     *  Credit card is business
     */
    CNISDKCreditCardUseCaseBusiness
};

extern NSString *convertCreditCardUseCaseEnum(CNISDKCreditCardUseCase useCase);
extern CNISDKCreditCardUseCase convertCreditCardUseCase(NSString *useCase);

extern NSString *convertCreditCardBrandEnum(CNISDKCreditCardBrand brand);
extern CNISDKCreditCardBrand convertCreditCardBrand(NSString *brand);

extern NSString *convertCreditCardProviderEnum(CNISDKCreditCardProvider provider);
extern CNISDKCreditCardProvider convertCreditCardProvider(NSString *provider);

//************************************************************//

/**
 *  The `CNISDKCreditCard` defines entity that represents guest credit card
 *
 *  @note This class is ABSTRACT
 *
 *  @see CNISDKPrivateCreditCard or CNISDKBusinessCreditCard
 */
@interface CNISDKCreditCard : CNISDKObject

/**
 *  Last 4 digits of credit card e.x. 1234
 */
@property (nonatomic, strong, readonly) NSString *lastFourDigits;

/**
 *  Credit card payment system brand
 *  Supported brands are kCNISDKCreditCardBrand...
 */
@property (nonatomic, strong, readonly) NSString *brand;

/**
 *  Enum representation of the brand property
 *  @see CNISDKCreditCardBrand
 */
@property (nonatomic, assign, readonly) CNISDKCreditCardBrand brandEnum;

/**
 *  Credit card use case
 *  Supported useCases are kCNISDKCreditCardUseCase...
 */
@property (nonatomic, strong, readonly) NSString *useCase;

/**
 *  Enum representation of the useCase property
 *  @see CNISDKCreditCardUseCase
 */
@property (nonatomic, assign, readonly) CNISDKCreditCardUseCase useCaseEnum;

/**
 *  Credit card provider
 *  Supported useCases are kCNISDKCreditCardProvider...
 */
@property (nonatomic, strong, readonly) NSString *provider;

/**
 *  Enum representation of the provider property
 *  @see CNISDKCreditCardProvider
 */
@property (nonatomic, assign, readonly) CNISDKCreditCardProvider providerEnum;

/**
 *  Returns card brand base on the given number
 *
 *  @param number credit card number
 *
 *  @discussion Number should not be formatted
 *
 *  @return kCNISDKCreditCardBrand... constants string for the given number
 */
+ (NSString *)cardBrandFromNumber:(NSString *)number;

@end

NS_ASSUME_NONNULL_END
