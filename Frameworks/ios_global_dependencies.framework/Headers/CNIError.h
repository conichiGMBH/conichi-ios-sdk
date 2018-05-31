// MARK: Formatter Exempt
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
extern NSString *const CNIErrorDomain __attribute__((deprecated("use specific error domain instead")));

/**
 * CNIErrorCode is the possible error codes
 */
__attribute__((deprecated("use error code enum for specific domain instead")))
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
     *  Trying to open a checkin that is already open in the same venue
     */
    CNIErrorCodeCheckinIsAlreadyOpenInThatVenue = -20033,

    /**
     *  Trying to open a checkin for the guest which has open check-in in another venue
     */
    CNIErrorCodeCheckinIsAlreadyOpenInAnotherVenue = -20034,

    /**
     *  Trying to open a checkin for the guest but it fails for unknown reason
     */
    CNIErrorCodeCheckinCanNotBePerformed = -20035,

    /**
     *  Check in can not be open earlier that arrival date from either pre-checkin or reservation
     */
    CNIErrorCodeCheckinDateIsInvalid = -20036,

    /**
     *  ASSA Abloy: An internal error occured. Recommended user action is to restart app or reboot device.
     */
    CNIErrorCodeASSAAbloyInternal = -20037,

    /**
     *  ASSA Abloy: Attempt to invoke a method which requires an endpoint that is setup. Recommended user action is to contact the key administrator and request an invitation code.
     */
    CNIErrorCodeASSAAbloyEndpointNotSetup = -20038,

    /**
     *  ASSA Abloy: One asynchrounous method of the API is already running. Recommended user action is to retry the action.
     */
    CNIErrorCodeASSAAbloySDKBusy = -20039,

    /**
     *  ASSA Abloy: The TSM replied NOT ELIGIBLE (FATAL during Setup, Invitation code is consumed and can no longer be used). Recommended user action is to contact the key administrator.
     */
    CNIErrorCodeASSAAbloyDeviceNotEligible = -20040,

    /**
     *  ASSA Abloy: Server replied API INCOMPATIBLE. Recommended user action is to upgrade the application. Recommended developer is to upgrade the SDK.
     */
    CNIErrorCodeASSAAbloySDKIncompatible = -20041,

    /**
     *  ASSA Abloy: The server communication failed. This is normally because of a network problem. Recommended user action is to check internet connectivity or try again later.
     */
    CNIErrorCodeASSAAbloyServerUnreachable = -20042,

    /**
     *  ASSA Abloy: The TSM failed to install the endpoint with a fatal error (FATAL, Invitation code no longer useful). Recommended user action is to contact the key administrator.
     */
    CNIErrorCodeASSAAbloySetupFailed = -20043,

    /**
     *  ASSA Abloy: The TSM Reported that the invitation code was not valid. Recommended user action is to retype or contact the key administrator.
     */
    CNIErrorCodeASSAAbloyInvalidInvitationCode = -20044,

    /**
     *  ASSA Abloy: Unable to serve the request to open the specified reader since the request contained an OpeningType that was not in the list of permitted OpeningTypes. Recommended user/developer action is to reconfigure reader.
     */
    CNIErrorCodeASSAAbloyOpeningTypeNotPermitted = -20045,

    /**
     *  ASSA Abloy: Unable to serve the request since Bluetooth Low Energy is unavailable. Recommended user action is to change permissions.
     */
    CNIErrorCodeASSAAbloyBluetoothLENotAvailable = -20046,

    /**
     *  Messerschmitt: There were no Messerschmitt devices found during the scanning process.
     */
    CNIErrorCodeMesserschmittScanTimeout = -20047,

    /**
     *  Messerschmitt: Keydata were invalid.
     */
    CNIErrorCodeMesserschmittOpenDoorFailed = -20048,

    /**
     *  Messerschmitt: The door is locked after opening.
     */
    CNIErrorCodeMesserschmittDoorIsLocked = -20049,

    /**
     *  Messerschmitt: Authentication failed, happens if keydata and/or device id are incorrect.
     */
    CNIErrorCodeMesserschmittAuthenticationFailed = -20050,

    /**
     *  Messerschmitt: The door is not ready.
     */
    CNIErrorCodeMesserschmittDoorIsNotReady = -20051,

    /**
     *
     */

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIErrorCodeUnknown = -20999
}__attribute__((deprecated("use error code enum for specific domain instead")));


/**
 * `CNIError` is a class that represents conichi's SDK errors
 */
//__attribute__((deprecated("use specific conichi defined error domain")))
//@interface CNIError : NSObject 

/**
 *  Return sdk error domain string
 *
 *  @return error domain
 */
//+ (NSString *)errorDomain;

//@end

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
