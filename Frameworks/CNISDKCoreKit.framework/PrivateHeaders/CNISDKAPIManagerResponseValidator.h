//
//  CNISDKAPIManagerResponseValidator.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/8/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKEnums.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKAPIManagerResponseValidator` validates response, outputs log messages for response (it's failed or succeeded)
 * It can validate for error
 * It can validate for required keys in response's JSON
 * This class was created to simplify the patter for every response in conichi SDK:
 * There is a JSON, and error - we should validate the required keys in JSON and show log messages in case of error or success
 */
@interface CNISDKAPIManagerResponseValidator : NSObject

/**
 * @param response - validating response object
 * @param json - validating response JSON
 * @param error - existed response error
 */
+ (instancetype)validatorForResponse:(nullable NSURLResponse *)response responseJSON:(nullable id)json responseError:(nullable NSError *)error;

/**
 * What keys are required in response's JSON
 * @note It accepts simple key or even key pathes (E.x. @[@"user", @"authorization.token"]);
 */
- (void)setRequiredJSONKeys:(NSArray *)requiredJSONKeys;

/**
 * Basically checks that the validating json object is a required class.
 * For CNISDKJSONTypeObject it requires json object to be NSDictionary or it's subclass
 * For CNISDKJSONTypeCollection it requires json object to be NSArray or it's subclass
 *
 * @see CNISDKJSONType
 *
 * @param jsonType - excpected type of validating json
 *
 * @note By default there is no validation by this rule
 */
- (void)setRequiredJSONToBeOfType:(CNISDKJSONType)jsonType;

/**
 * If set and validation is passed validator will output log message
 * @param message - log message
 */
- (void)setPassesLogMessage:(NSString *)message;

/**
 * If set and validation is failed validator will output log message
 * @param message - log message
 */
- (void)setFailsLogMessage:(NSString *)message;

/**
 * Performs validation
 * If an error occurs or validation doesn't pass, returns NO and sets 'error'.
 * @param error - validation result error
 * @return validation Boolean result
 */
- (BOOL)validate:(NSError *__autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END
