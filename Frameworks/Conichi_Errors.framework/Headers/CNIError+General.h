//
//  CNIError+General.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/9/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNIError.h"

#import "CNIErrorCodeConverter.h"

NS_ASSUME_NONNULL_BEGIN

#define CNIRequiredArgumentError(argumentName, developerMessage) [CNIError requiredArgumentErrorWithName:argumentName message:developerMessage functionName:__PRETTY_FUNCTION__ fileName:__FILE__]

/**
 * `CNIError+General` that contains all general methods to create error for conichi SDK
 */
@interface CNIError (General)

/**
 *  Ceates NSError object with CNIErrorDomain
 *
 *  @param code - code for error
 *  @param message - will be stored in user info under CNIErrorDeveloperMessageKey
 *  @param underlyingError - will be stored in user info under NSUnderlyingErrorKey
 *  @param userInfo - information about error
 * 
 *  @return new error object
 */
+ (NSError *)errorWithCode:(NSInteger)code message:(nullable NSString *)message underlyingError:(nullable NSError *)underlyingError userInfo:(nullable NSDictionary *)userInfo;

/**
 *  Creates NSError object with CNIErrorDomain
 *
 *  @param code - code for error
 *  @param message - will be stored in user info under CNIErrorDeveloperMessageKey
 *  @param error - will be stored in user info under NSUnderlyingErrorKey
 */
+ (NSError *)errorWithCode:(NSInteger)code message:(nullable NSString *)message underlyingError:(nullable NSError *)error;

/**
 *  Creates NSError object with CNIErrorDomain
 *
 *  @param code - code for error
 *  @param message - will be stored in user info under CNIErrorDeveloperMessageKey
 */
+ (NSError *)errorWithCode:(NSInteger)code message:(nullable NSString *)message;

/**
 *  Creates an error with CNIErrorCodeInvalidArgumentError code.
 *  Use it when the argument with name expects value diffrent from the given value
 *  @param name - argument name
 *  @param value - given value
 *  @param message - message for developer
 *  @param userInfo - information about error
 */
+ (NSError *)invalidArgumentErrorWithName:(NSString *__nonnull)name value:(nullable id)value message:(nullable NSString *)message userInfo:(nullable NSDictionary *)userInfo;

/**
 *  Creates an error with CNIErrorCodeInvalidArgumentError code.
 *  Use it when the argument with name expects value diffrent from the given value
 *  @param name - argument name
 *  @param value - given value
 *  @param message - message for developer
 */
+ (NSError *)invalidArgumentErrorWithName:(NSString *)name value:(nullable id)value message:(nullable NSString *)message;

/**
 *  Creates an error with CNIErrorCodeInvalidArgumentError code.
 *  Use it when the argument with name expected to be existed but it's nil
 *
 *  @param name - argument name
 *  @param message - message for developer. It will be stored in user info under CNIErrorDeveloperMessageKey
 *  @param functionName - function name for developer to easily recognize the exact place of the error.
 *                       It will be stored under CNIErrorFunctionNameKey
 *  @param fileName - file name for developer to easily recognize the exact place of the error.
 *                       It will be stored under CNIErrorFileNameKey
 */
+ (NSError *)requiredArgumentErrorWithName:(NSString *)name message:(nullable NSString *)message functionName:(const char *)functionName fileName:(const char *)fileName;

/**
 *  Creates an error with CNIErrorCodeInvalidArgumentError code.
 *  Use it when the json must have object for key but it's nil
 *
 *  @param name - json key
 *  @param message - message for developer. It will be stored in user info under CNIErrorDeveloperMessageKey
 *  @param json - repsonse's json object
 *  @param response - response object
 */
+ (NSError *)requiredJSONObjectErrorWithName:(NSString *)name message:(nullable NSString *)message json:(nullable NSDictionary *)json response:(nullable NSURLResponse *)response;

@end


@interface CNIError (Messages)

/**
 * Creates localized description for the given error code
 *
 * @param code - error code
 * @param originalErrorDescription - original error's localized description
 *
 * @return localized description for error with the given code
 */
+ (NSString *)localizedDescriptionForErrorCode:(CNIErrorCode)code originalErrorDescription:(nullable NSString *)originalErrorDescription;

@end


@interface CNIError (Code)

/**
 *  Converts given error code to the known CNIErrorCode
 *
 *  @param code - original error code to convert
 *
 *  @return converted CNIErrorCode
 */
+ (CNIErrorCode)convertErrorCodeToCNIErrorCode:(NSInteger)code;

/**
 *  Adds given code converter to all converters. Added converter has the highest priority to convert given error code
 *
 *  @param converter new converter
 */
+ (void)addCodeConvertor:(Class<CNIErrorCodeConverter>)converter;

@end

NS_ASSUME_NONNULL_END
