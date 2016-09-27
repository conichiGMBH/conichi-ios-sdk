//
//  CNIError.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/9/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const CNIErrorDeveloperErrorCodeKey;
extern NSString *const CNIErrorDeveloperMessageKey;
extern NSString *const CNIErrorArgumentNameKey;
extern NSString *const CNIErrorArgumentValueKey;
extern NSString *const CNIErrorFunctionNameKey;
extern NSString *const CNIErrorFileNameKey;
extern NSString *const CNIErrorResponseJSONKey;
extern NSString *const CNIErrorResponseKey;
extern NSString *const CNIErrorDomain;

/**
 * CNIErrorCode is the possible error codes
 */
typedef NS_ENUM(NSInteger, CNIErrorCode) {

    /**
     * Internal archiving objects error code
     */
    CNIErrorCodeCodingError = -20001,

    /**
     * Every error belongs to the local cache in sdk has this error code
     */
    CNIErrorCodeLocalCacheError = -20002,

    /**
     * The error code for errors for invalid arguments.
     */
    CNIErrorCodeInvalidArgumentError = -20003,

    /**
     * The error code when no internet connection
     */
    CNIErrorCodeNoInternetConnectionError = -20004,

    /**
     * The error code for invalid response JSON format
     */
    CNIErrorCodeCannotParseJSONError = -20005,

    /**
     * The error code for every core location framework errors
     */
    CNIErrorCodeCoreLocationError = -20006,

    /**
     * The error code for invalid payment instrument errors
     */
    CNIErrorCodeInvalidPaymentInstrumentError = -20007,

    /**
     * The error code for preference update operation
     */
    CNIErrorCodePreferenceDoesntExist = -20008,

    /**
     *  SDK has been initialized with the wrong API key you must reinitialized sdk with another API key
     */
    CNIErrorCodeInvalidAPIKey = -20009,

    /**
     *  Authorization credentials (such as auth token and auth key) is invalid for the current guest you must log in again
     */
    CNIErrorCodeInvalidAuthorizationCredentials = -20010,

    /**
     *  Session expired you must log in again
     */
    CNIErrorCodeSessionExpired = -20011,

    /**
     *  Email has invalid format
     */
    CNIErrorCodeInvalidEmailFormat = -20012,

    /**
     *  Email has already been taken by another user you must use different email
     */
    CNIErrorCodeEmailAlreadyTaken = -20013,

    /**
     *  Password for the account with the given email does not exists or account with the given email does not exist
     */
    CNIErrorCodeInvalidAccountCredentials = -20014,

    /**
     *  Account is temporarily locked due to an excessive number (10 attempts) of unsuccessful sign in attempts
     *  Account will be locked for 1 hour. Reset password doesn't unlock the account immediately.
     */
    CNIErrorCodeAccountLocked = -20015,

    /**
     *  Facebook does not give the email you must authorize with facebook and allow email permission
     */
    CNIErrorCodeFacebookEmailPermission = -20016,

    /**
     *  Facebook authorization error you must authorize with facebook again
     */
    CNIErrorCodeFacebookInvalidAccessToken = -20017,

    /**
     *  LinkedIn authorization error you must authorize with linkedin again
     */
    CNIErrorCodeLinkedInInvalidAccessToken = -20018,

    /**
     *  Xing authorization error you must authorize with xing again
     */
    CNIErrorCodeXingInvalidAccessToken = -20019,

    /**
     *  The server is currently unable to handle the request due to a temporary overloading or maintenance of the server.
     */
    CNIErrorCodeServerUnavailable = -20020,

    /**
     *  The server encountered an unexpected condition which prevented it from fulfilling the request.
     */
    CNIErrorCodeServerError = -20021,

    /**
     *  The requested operation is not allowed
     */
    CNIErrorCodeNotAllowedOperation = -20022,

    /**
     *  The server has not found anything matching the Request-URI.
     */
    CNIErrorCodeNotFound = -20023,

    /**
     *  General error code when request requires user authentication.
     */
    CNIErrorCodeUnauthorized = -20024,

    /**
     *  General error code when request could not be understood by the server due to malformed syntax. The client SHOULD NOT repeat the request
     *  without modifications.
     */
    CNIErrorCodeBadRequest = -20027,

    /**
     *  General error code when there is a timeout while sending the request
     */
    CNIErrorCodeRequestTimeout = -20028,

    /**
     *  Sending a request with a packagename/bundle id that is not registered
     */
    CNIErrorCodePaymentInvalidApplicationID = -20029,

    /**
     *  Sending a request with an invalid API Key
     */
    CNIErrorCodePaymentInvalidAPIKey = -20030,

    /**
     *  Sending a request with a null or empty user token
     */
    CNIErrorCodePaymentInvalidUserToken = -20031,

    /**
     *  Sending a request with a null or empty user token
     */
    CNIErrorCodePaymentUserTokenNotCreated = -20032,

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIErrorCodeUnknown = -20999
};

/**
 * `CNIError` is a class that represents conichi's SDK errors
 */
@interface CNIError : NSObject

/**
 *  Return sdk error domain string
 *
 *  @return error domain
 */
+ (NSString *)errorDomain;

@end

/**
 * `NSError+CNIError` is a category that extends NSError with custom getters
 */
@interface NSError (CNIError)

/**
 *  Error description for develop
 *
 *  @return optional string
 */
- (nullable NSString *)developerMessage;

/**
 *  Used in CNIErrorCodeInvalidArgumentError
 *
 *  @return argument name
 */
- (nullable NSString *)argumentName;

/**
 *  Used in CNIErrorCodeInvalidArgumentError
 *
 *  @return argument value
 */
- (nullable NSString *)argumentValue;

/**
 *  Function name where this error occures
 *
 *  @return function name
 */
- (nullable NSString *)functionName;

/**
 *  File name where this error occurs
 *
 *  @return file name
 */
- (nullable NSString *)fileName;

/**
 *  Used in HTTP response validation errors
 *
 *  @return response JSON object
 */
- (nullable NSDictionary *)responseJSON;

/**
 *  Used in HTTP respone errors
 *
 *  @return response object
 */
- (nullable NSURLResponse *)response;

@end

NS_ASSUME_NONNULL_END
