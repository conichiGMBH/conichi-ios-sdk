//
//  CNIConichiAPIErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIConichiAPIErrorCodes_h
#define CNIConichiAPIErrorCodes_h

typedef NS_ENUM(NSInteger, CNIConichiAPIErrorCode) {

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIConichiAPIErrorCodeUnknown,

    /**
     *  User conichi session's becomes invalid (basically authorization error)
     */
    CNIConichiAPIErrorCodeInvalidSessionUUID,

    /**
     *  SDK has been initialized with the wrong API key you must reinitialized sdk with another API key
     */
    CNIConichiAPIErrorCodeInvalidAPIKey,

    /**
     *  Authorization credentials (such as auth token and auth key) is invalid for the current guest you must log in again
     */
    CNIConichiAPIErrorCodeInvalidAuthorizationCredentials,

    /**
     *  Session expired you must log in again
     */
    CNIConichiAPIErrorCodeSessionExpired,

    /**
     *  Email has invalid format
     */
    CNIConichiAPIErrorCodeInvalidEmailFormat,

    /**
     *  Email has already been taken by another user you must use different email
     */
    CNIConichiAPIErrorCodeEmailAlreadyTaken,

    /**
     *  Password for the account with the given email does not exists or account with the given email does not exist
     */
    CNIConichiAPIErrorCodeInvalidAccountCredentials,

    /**
     *  Account is temporarily locked due to an excessive number (10 attempts) of unsuccessful sign in attempts
     *  Account will be locked for 1 hour. Reset password doesn't unlock the account immediately.
     */
    CNIConichiAPIErrorCodeAccountLocked,

    /**
     *  Facebook does not give the email you must authorize with facebook and allow email permission
     */
    CNIConichiAPIErrorCodeFacebookEmailPermission,

    /**
     *  Facebook authorization error you must authorize with facebook again
     */
    CNIConichiAPIErrorCodeFacebookInvalidAccessToken,

    /**
     *  LinkedIn authorization error you must authorize with linkedin again
     */
    CNIConichiAPIErrorCodeLinkedInInvalidAccessToken,

    /**
     *  Xing authorization error you must authorize with xing again
     */
    CNIConichiAPIErrorCodeXingInvalidAccessToken,

    /**
     *  Trying to open a checkin that is already open in the same venue
     */
    CNIConichiAPIErrorCodeCheckinIsAlreadyOpenInThatVenue,

    /**
     *  Trying to open a checkin for the guest which has open check-in in another venue
     */
    CNIConichiAPIErrorCodeCheckinIsAlreadyOpenInAnotherVenue,

    /**
     *  Trying to open a checkin for the guest but it fails for unknown reason
     */
    CNIConichiAPIErrorCodeCheckinCanNotBePerformed,

    /**
     *  Check in can not be open earlier that arrival date from either pre-checkin or reservation
     */
    CNIConichiAPIErrorCodeCheckinDateIsInvalid,

    /**
     * The error code for preference update operation
     */
    CNIConichiAPIErrorCodePreferenceDoesntExist,

    /**
     * The error code whenever not allowed operation is performed against conichi API
     */
    CNIConichiAPIErrorCodeOperationNotAllowed,

    /**
     * The error code when the guest wants to delete last credit card and the action can not be done because there is an open checkin
     */
    CNIConichiAPIErrorCodeDeleteLastCreditCardWithOpenCheckinNotAllowed
};

#endif /* CNIConichiAPIErrorCodes_h */
