//
//  CNISDKAPIManagerConstants.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/31/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 * @see CNISDKGuest object
 */
extern NSString *const kCNISDKAPIManagerGuestKey __deprecated_msg("use CNISDKJSONKeyes.user instead");
extern NSString *const kCNISDKAPIManagerGuestAPNTokenKey __deprecated_msg("use CNISDKGuestJSONKeyes.apnToken instead");
extern NSString *const kCNISDKAPIManagerGuestPasswordKey __deprecated_msg("use CNISDKUpdatePasswordRequestInfo or CNISDKSignUpRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestPasswordConfirmationKey __deprecated_msg("use CNISDKUpdatePasswordRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestCurrentPasswordKey __deprecated_msg("use CNISDKUpdatePasswordRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestEmailKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestFirstNameKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestLastNameKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestGenderKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestImageDataKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestDateOfBirthdayKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestLocaleKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestNationalityKey __deprecated_msg("use CNISDKUpdateGuestRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestPaymentTokenKey __deprecated_msg("not available anymore");
extern NSString *const kCNISDKAPIManagerGuestAddressKey __deprecated_msg("use CNISDKUpdatePersonalAddressRequestInfo or CNISDKSDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestTravelDocumentKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo or CNISDKSDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerGuestPreferencesKey __deprecated_msg("not available anymore");

/**
 * @see CNISDKAddress object
 */
extern NSString *const kCNISDKAPIManagerAddressStreetKey __deprecated_msg("use CNISDKUpdatePersonalAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressZipKey __deprecated_msg("use CNISDKUpdatePersonalAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressCityKey __deprecated_msg("use CNISDKUpdatePersonalAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressCountryKey __deprecated_msg("not available anymore");
extern NSString *const kCNISDKAPIManagerAddressCountryCodeKey __deprecated_msg("use CNISDKUpdatePersonalAddressRequestInfo instead");

extern NSString *const kCNISDKAPIManagerAddressBusinessNameKey __deprecated_msg("use CNISDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressBusinessStreetKey __deprecated_msg("use CNISDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressBusinessZipKey __deprecated_msg("use CNISDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressBusinessCityKey __deprecated_msg("use CNISDKUpdateBusinessAddressRequestInfo instead");
extern NSString *const kCNISDKAPIManagerAddressBusinessCountryCodeKey __deprecated_msg("use CNISDKUpdateBusinessAddressRequestInfo instead");

/**
 * @see CNISDKTravelDocument object
 */
extern NSString *const kCNISDKAPIManagerTravelDocumentTypeKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo instead");
extern NSString *const kCNISDKAPIManagerTravelDocumentNumberKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo instead");
extern NSString *const kCNISDKAPIManagerTravelDocumentDateOfIssueKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo instead");
extern NSString *const kCNISDKAPIManagerTravelDocumentDateOfExpiryKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo instead");
extern NSString *const kCNISDKAPIManagerTravelDocumentAuthorityKey __deprecated_msg("use CNISDKUpdateTravelDocumentRequestInfo instead");

extern NSString *const kCNISDKAPIManagerSocialAuthTokenKey __deprecated_msg("use CNISDKSocialSignInRequestInfo instead");
extern NSString *const kCNISDKAPIManagerSocialAuthSecretKey __deprecated_msg("use CNISDKSocialSignInRequestInfo instead");

extern NSString *const kCNISDKAPIManagerFacebookProvider;
extern NSString *const kCNISDKAPIManagerLinkedinProvider;
extern NSString *const kCNISDKAPIManagerXingProvider;
extern NSString *const kCNISDKAPIManagerConichiProvider;
extern NSString *const kCNISDKAPIManagerExternalIDProvider;


@interface CNISDKAPIManagerConstants : NSObject

@end

NS_ASSUME_NONNULL_END
