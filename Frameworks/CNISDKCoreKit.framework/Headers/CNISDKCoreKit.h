//
//  CNISDKCoreKit.h
//  CNISDKCoreKit
//
//  Created by Anton Domashnev on 01/09/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import UIKit;

//! Project version number for CNISDKCoreKit.
FOUNDATION_EXPORT double CNISDKCoreKitVersionNumber;

//! Project version string for CNISDKCoreKit.
FOUNDATION_EXPORT const unsigned char CNISDKCoreKitVersionString[];

#import "CNISDK.h"
#import "CNISDKKit.h"
#import "CNISDKAPIManager+Authentication.h"
#import "CNISDKAPIManager+CheckIn.h"
#import "CNISDKAPIManager+Checkout.h"
#import "CNISDKAPIManager+Guest.h"
#import "CNISDKAPIManager+PreCheckin.h"
#import "CNISDKAPIManager+Venue.h"
#import "CNISDKAPIManager+Notifications.h"
#import "CNISDKAPIManager+Preferences.h"
#import "CNISDKAPIManager+PreferenceCategories.h"
#import "CNISDKUpdatePasswordRequestInfo.h"
#import "CNISDKUpdateTravelDocumentRequestInfo.h"
#import "CNISDKUpdateOptionalValueRequestInfo.h"
#import "CNISDKUpdateAddressRequestInfo.h"
#import "CNISDKUpdateGuestRequestInfo.h"
#import "CNISDKSocialSignInRequestInfo.h"
#import "CNISDKSignUpRequestInfo.h"
#import "CNISDKCreatePreCheckinRequestInfo.h"
#import "CNISDKUpdateTaxInfoRequestInfo.h"
#import "CNISDKAPIManagerConstants.h"
#import "CNISDKConstants.h"
#import "CNISDKMacros.h"
#import "CNISDKGuestSynchronizer.h"
#import "CNISDKAPIManager.h"
#import "CNISDKPermissionsManager.h"
#import "CNISDKTrackinCloser.h"
#import "CNISDKValidator.h"
#import "CNISDKGuestStatusInfo.h"
#import "CNISDKConfiguration.h"
#import "CNISDKAddress.h"
#import "CNISDKAuthorizationChangeReason.h"
#import "CNISDKBeacon.h"
#import "CNISDKBusinessAddress.h"
#import "CNISDKBusinessCreditCard.h"
#import "CNISDKPrivateCreditCard.h"
#import "CNISDKCheckin.h"
#import "CNISDKCheckoutRequest.h"
#import "CNISDKCreditCard.h"
#import "CNISDKDeliverableCategory.h"
#import "CNISDKDeliverableCountableItem.h"
#import "CNISDKDeliverableItem.h"
#import "CNISDKGuest.h"
#import "CNISDKNotification.h"
#import "CNISDKObject.h"
#import "CNISDKPersonalAddress.h"
#import "CNISDKPreCheckinRequest.h"
#import "CNISDKPreference.h"
#import "CNISDKPreferenceCategory.h"
#import "CNISDKRegion.h"
#import "CNISDKTrackin.h"
#import "CNISDKTravelDocument.h"
#import "CNISDKVenue.h"
#import "CNISDKVenueCard.h"
#import "CNISDKVenueCardSection.h"
#import "CNISDKPreferenceUpdateResult.h"
#import "CNISDKTaxInfo.h"
#import "CNISDKDelegate.h"
#import "CNISDKDeliverableCategoriesCollector.h"
#import "CNISDKLogger.h"
#import "CNISDKLogging.h"
#import "CNISDKConsoleLogger.h"
#import "CNISDKRemoteLogger.h"
#import "CNISDKApplication.h"
