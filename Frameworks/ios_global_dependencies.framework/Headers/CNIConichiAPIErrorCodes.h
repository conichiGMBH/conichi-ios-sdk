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
     *  Authorization information is corrupted or invalid
     */
    CNIConichiAPIErrorCodeInvalidHMAC,

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
     * The error code when updating avatar failure
     */
    CNIConichiAPIErrorCodeUnableToUpdateAvatar,

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
     * The error code when folio request is failed
     */
    CNIConichiAPIErrorCodeFolioRequestFailed,

    /**
     * The error code when service is not available
     */
    CNIConichiAPIErrorCodeServiceNotAvailable,

    /**
     * The error code for invalid request
     */
    CNIConichiAPIErrorCodeInvalidRequest,

    /**
     * The error code when reservation cannot be proceeded
     */
    CNIConichiAPIErrorCodeReservationCannotBeProceeded,

    /**
     * The error code when payment is not synced
     */
    CNIConichiAPIErrorCodePaymentNotSynced,

    /**
     * The error code when passport is expired
     */
    CNIConichiAPIErrorCodePassportExpired,

    /**
     * The error code when user hasn't been found
     */
    CNIConichiAPIErrorCodeUserNotFound,

    /**
     * The error code when venue hasn't beed found
     */
    CNIConichiAPIErrorCodeVenueNotFound,

    /**
     * The error code when credit card hasn't been found
     */
    CNIConichiAPIErrorCodeCreditCardNotFound,

    /**
     * The error code when you already have an open checkin
     */
    CNIConichiAPIErrorCodeCheckinAlreadyOpen,

    /**
     * The error code when user aleady registered
     */
    CNIConichiAPIErrorCodeUserAlreadyRegistered,

    /**
     * The error code for preference update operation
     */
    CNIConichiAPIErrorCodePreferenceDoesntExist,

    /**
     * The error code whenever not allowed operation is performed against conichi API
     */
    CNIConichiAPIErrorCodeOperationNotAllowed,

    /**
     * The error code for there is nothing to update
     */
    CNIConichiAPIErrorCodeNothingToUpdate,

    /**
     * The error code when trackin status is invalid for this action
     */
    CNIConichiAPIErrorCodeInvalidTrackinStatus,

    /**
     * The error code when trackin cannot be found
     */
    CNIConichiAPIErrorCodeTrackinNotFound,

    /**
     * The error code when the guest wants to delete last credit card and the action can not be done because there is an open checkin
     */
    CNIConichiAPIErrorCodeDeleteLastCreditCardWithOpenCheckinNotAllowed,

    /**
     * The error code when the guest wants to delete last credit card and the action can not be done because there is a pending checkout
     */
    CNIConichiAPIErrorCodeDeleteLastCreditCardWithPendingCheckoutNotAllowed,

    /**
     *  Error code when tries to do mobile checkin for given reservation
     */
    CNIConichiAPICodeMobileCheckinIsNotAvailableForReservation,

    /**
     *  Error code when reservation can not be found
     */
    CNIConichiAPICodeReservationNotFound,

    /**
     * The error code for invalid checkin date
     */
    CNIConichiAPICodeInvalidCheckinDate,

    /**
     *  Error code when there is no available room for reservation
     */
    CNIConichiAPICodeRoomIsNotAvailableForReservation,

    /**
     *  Error code when room can not be assigned to the given reservation
     */
    CNIConichiAPICodeRoomCanNotBeAssignedToReservation,

    /**
     * The error code when venue doesn't support PMS integration
     */
    CNIConichiAPIErrorCodeVenueNotSupportPMS,

    /**
     * The error code for invalid last name
     */
    CNIConichiAPIErrorCodeInvalidLastName,

    /**
     * The error code for invalid payment profile code
     */
    CNIConichiAPIErrorCodeInvalidPaymentProfileCode,

    /**
     * The error code for invalid guest profile code
     */
    CNIConichiAPIErrorCodeInvalidGuestProfileCode,

    /**
     * The error code when PMS guest profile cannot be gotten
     */
    CNIConichiAPIErrorCodeUnableToGetPMSGuestProfile,

    /**
     * The error code when PMS guest profile cannot be updated
     */
    CNIConichiAPIErrorCodeUnableToUpdatePMSGuestProfile,

    /**
     * The error code when checkin failed
     */
    CNIConichiAPIErrorCodeCheckinFailed,

    /**
     * The error code for the reservation already exists for another guest 
     */
    CNIConichiAPIErrorCodeReservationBelongsToAnotherGuest,

    /**
     * The error code for multiple reservations
     */
    CNIConichiAPIErrorCodeMultipleReservation,

    /**
     * The error code when reservation is checked-out
     */
    CNIConichiAPIErrorCodeReservationIsCheckout,

    /**
     * The error code for invalid PMS charge
     */
    CNIConichiAPIErrorCodeInvalidPMSCharge,

    /**
     * The error code when reservation is not inhouse
     */
    CNIConichiAPIErrorCodeReservationIsNotInhouse,

    /**
     *  Error code when tries to perform mobile checkout with not zero balance
     */
    CNIConichiAPICodeInvalidBalanceForMobileCheckout,

    /**
     * The error code when PMS update failed
     */
    CNIConichiAPIErrorCodePMSUpdateFailed,

    /**
     * The error code for invalid PMS checkout
     */
    CNIConichiAPIErrorCodeInvalidPMSCheckout,

    /**
     * The error code when reservation is not guaranteed
     */
    CNIConichiAPIErrorCodeReservationIsNotGuaranteed,

    /**
     * The error code when reservation is inhouse
     */
    CNIConichiAPIErrorCodeReservationIsInhouse,

    /**
     * The error code when merchant does not have permission to work with given venue
     */
    CNIConichiAPIErrorCodeMerchantLacksPermission,

    /**
     * The error code when reservation is not paid
     */
    CNIConichiAPIErrorCodeReservationIsNotPaid,

    /**
     *  Error code when tries to perform mobile checkout but date is incorrect
     */
    CNIConichiAPICodeInvalidMobileCheckoutDate,

    /**
     *  Error code when tries to perform mobile checkout but something went wrong
     *  Call to action is to go to the reception desc
     */
    CNIConichiAPICodeMobileCheckoutNotAvailable,

    /**
     * The error code when given external id already exists
     */
    CNIConichiAPIErrorCodeExternalIDAlreadyExists,

    /**
     * The error code for invalid external id
     */
    CNIConichiAPIErrorCodeInvalidExternalID,

    /**
     * The error code for invalid first name
     */
    CNIConichiAPIErrorCodeInvalidFirstName,

    /**
     * The error code when given external id doesn't exist
     */
    CNIConichiAPIErrorCodeExternalIDDoesntExist,

    /**
     * The error code when there has been an issue with fetching invitation code
     */
    CNIConichiAPIErrorInvalidInvitationCode,

    /**
     * The error code when device hasn't been found
     */
    CNIConichiAPIErrorCodeDeviceNotFound,

    /**
     *  Error code when mobile checkin can not be completed because room is not clean
     */
    CNIConichiAPICodeMobileCheckinCanNotBeDoneWhileRoomIsNotClean,

    /**
     * The error code when PMS request Failed
     */
    CNIConichiAPIErrorCodePMSRequestFailed,

    /**
     * The error code for invalid compaign parameters
     */
    CNIConichiAPIErrorCodeInvalidCompaignParams,

    /**
     * The error code when action isn't allowed for given id 
     */
    CNIConichiAPIErrorCodeActionNotAllowed,

    /**
     * The error code when merchant session exists
     */
    CNIConichiAPIErrorCodeMerchantSessionExists,

    /**
     * The error code when merchant email doesn't exist
     */
    CNIConichiAPIErrorCodeMerchantEmailDoesntExist,

    /**
     * The error code for unabling to update merchant password
     */
    CNIConichiAPIErrorCodeUnableToUpdateMerchantPassword,

    /**
     * The error code when invitation hasn't been accepted
     */
    CNIConichiAPIErrorCodeInvitationHasntBeenAccepted,

    /**
     * The error code when promotion hasn't been found
     */
    CNIConichiAPIErrorCodePromotionNotFound,

    /**
     * The error code when promotion is not active or expired
     */
    CNIConichiAPIErrorCodePromotionExpired,

    /**
     * The erroe code when open merchant session hasn't been found
     */
    CNIConichiAPIErrorCodeOpenMerchantSessionNotFound,

    /**
     * The error code when notification setting for venue hasn't been found
     */
    CNIConichiAPIErrorCodeNotificationSettingNotFound,

    /**
     * The error code when venue is not city tax ready
     */
    CNIConichiAPIErrorCodeVenueIsNotCityTaxReady,

    /**
     * The error code when user has an open precheckin request
     */
    CNIConichiAPIErrorCodeUserHasOpenPrecheckinRequest,

    /**
     * The error code when arrival date can not to be later than departure date
     */
    CNIConichiAPIErrorCodeArrivalDateIsLaterThanDepartureDate,
};

#endif /* CNIConichiAPIErrorCodes_h */
