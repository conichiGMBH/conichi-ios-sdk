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
 *  Validate email with commonly used regex
 *
 *  @param email - email to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateEmail:(nullable NSString *)email error:(NSError *__autoreleasing *)error;
+ (BOOL)validateEmail:(nullable NSString *)email;

/**
 * Validate password for the length. It should be at least six characters
 *
 *  @param password - password to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validatePassword:(nullable NSString *)password error:(NSError *__nullable *)error;
+ (BOOL)validatePassword:(nullable NSString *)password;

/**
 *  Validate first name for the length. It should be at least one character
 *
 *  @param firstName - firstName to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateFirstName:(nullable NSString *)firstName error:(NSError *__nullable *)error;
+ (BOOL)validateFirstName:(nullable NSString *)firstName;

/**
 *  Validate second name for the length. It should be at least one character
 *
 *  @param lastName - lastName to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateLastName:(nullable NSString *)lastName error:(NSError *__nullable *)error;
+ (BOOL)validateLastName:(nullable NSString *)lastName;

/**
 *  Validate gender. It could be either kCNISDKGuestGenderMale or kCNISDKGuestGenderFemale
 *
 *  @param gender - gender to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateGender:(nullable NSString *)gender error:(NSError *__nullable *)error;
+ (BOOL)validateGender:(nullable NSString *)gender;

/**
 *  Validate nationality for the length. It should be at least one character
 *
 *  @param nationality - nationality to validate
 *  @param error - validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateNationality:(nullable NSString *)nationality error:(NSError *__nullable *)error;
+ (BOOL)validateNationality:(nullable NSString *)nationality;

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
 *  Validate credit expiry month
 *
 *  @param nationalityISO2Code guest nationality expressed as ISO2 code
 *  @param error               validation result error
 *
 *  @return validation result Boolean flag
 */
+ (BOOL)validateNationalityISOCode:(nullable NSString *)nationalityISO2Code error:(NSError *__nullable *)error;
+ (BOOL)validateNationalityISOCode:(nullable NSString *)nationalityISO2Code;

@end

NS_ASSUME_NONNULL_END
