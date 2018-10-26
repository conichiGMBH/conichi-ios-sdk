//
//  CNISDKValidator.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/16/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKValidator` class contains methods that handle all validations needed for SDK,
 *  can be used by 3rd parties to ensure data is correct before passed to SDK
 */
@interface CNISDKValidator : NSObject

/**
 *  Validate credit card last four digits
 *
 *  @param lastFourDigits - email to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardLastFourDigits:(nullable NSString *)lastFourDigits error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardLastFourDigits:(nullable NSString *)lastFourDigits;

/**
 *  Validate credit card brand
 *
 *  @param brand - brand to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardBrand:(nullable NSString *)brand error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardBrand:(nullable NSString *)brand;

/**
 *  Validate credit card use case
 *
 *  @param useCase use case to validate
 *  @param error validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardUseCase:(nullable NSString *)useCase error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardUseCase:(nullable NSString *)useCase;

/**
 * Validate credit card pan digits
 *
 * @warning It's only validate that the string contains only digits.
 *          Don't rely on it if you need real validation
 *
 * @param panDigits credit card number to validate
 * @param error validation result error
 *
 * @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardPanDigits:(nullable NSString *)panDigits error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardPanDigits:(nullable NSString *)panDigits;

/**
 *  Validate credit cvv
 * 
 *  @param panDigits credit card number
 *  @param cvv cvv to validate
 *  @param error validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCVV:(nullable NSString *)cvv creditCardPanDigits:(nullable NSString *)panDigits error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCVV:(nullable NSString *)cvv creditCardPanDigits:(nullable NSString *)panDigits;

/**
 *  Validate credit expiry month
 *
 *  @param expiryMonth expiry month to validate
 *  @param error validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardExpiryMonth:(nullable NSString *)expiryMonth error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardExpiryMonth:(nullable NSString *)expiryMonth;

/**
 *  Validate credit expiry year
 *
 *  @param expiryYear expiry year to validate
 *  @param expiryMonth expiry month to help to validate expiry year
 *  @param error validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateCreditCardExpiryYear:(nullable NSString *)expiryYear expiryMonth:(nullable NSString *)expiryMonth error:(NSError *__nullable *)error;
+ (BOOL)validateCreditCardExpiryYear:(nullable NSString *)expiryYear expiryMonth:(nullable NSString *)expiryMonth;

@end

NS_ASSUME_NONNULL_END
