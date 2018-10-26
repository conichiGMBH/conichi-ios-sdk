//
//  CNISDKGuest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/11/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKCheckin;
@class CNISDKBeacon;
@class CNISDKRegion;
@class CNISDKVenue;
@class CNISDKTrackin;
@class CNISDKPersonalAddress;
@class CNISDKBusinessAddress;
@class CNISDKTravelDocument;
@class CNISDKPreference;
@class CNISDKPreCheckinRequest;
@class CNISDKTaxInfo;
@class CNISDKMilesAndMoreCard;

#import "CNISDKEnums.h"
#import "CNISDKMacros.h"


#define CNISDKGuestKeypath(NAME) CNISDKKeypath(CNISDKGuest, NAME)


/**
 *  Guest status is a enum that describes guest's status in conichi system
 */
typedef NS_ENUM(NSInteger, CNISDKGuestStatus) {
    /**
     *  Guest status is currently unknown
     */
    CNISDKGuestStatusUnknown,

    /**
     *  Guest does not have any open trackin and pre checkin is unavailable
     */
    CNISDKGuestStatusAway,

    /**
     *  Guest has all information needed for pre checkin and guest does not have any open trackin
     */
    CNISDKGuestStatusPreCheckedIn,

    /**
     *  Guest has open trackin
     */
    CNISDKGuestStatusNearby,

    /**
     *  Guest has open trackin and has valid credit card
     */
    CNISDKGuestStatusNearbyReady,

    /**
     *  Guest has been checked in
     */
    CNISDKGuestStatusCheckedin,

    /**
     *  Guest has been checked in and guest has made the payment during the checkin
     */
    CNISDKGuestStatusPaidin,

    /**
     *  Guest has requested checkout and guest has made the payment during the checkin
     */
    CNISDKGuestStatusPaidinReadyout,

    /**
     *  Guest has requested checkout
     */
    CNISDKGuestStatusReadyout,

    /**
     *  Guest is waiting for a room number to be assigned to
     */
    CNISDKGuestStatusPendingRoom
};

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKAPIManagerGuestStatusAwayKey;
extern NSString *const kCNISDKAPIManagerGuestStatusPreCheckedInKey;
extern NSString *const kCNISDKAPIManagerGuestStatusNearbyKey;
extern NSString *const kCNISDKAPIManagerGuestStatusNearbyReadyKey;
extern NSString *const kCNISDKAPIManagerGuestStatusCheckedinKey;
extern NSString *const kCNISDKAPIManagerGuestStatusPaidinKey;
extern NSString *const kCNISDKAPIManagerGuestStatusPendingRoomKey;
extern NSString *const kCNISDKAPIManagerGuestStatusPaidinReadyoutKey;
extern NSString *const kCNISDKAPIManagerGuestStatusReadyoutKey;

extern NSString *const kCNISDKGuestGenderMale;
extern NSString *const kCNISDKGuestGenderFemale;

/**
 * The `CNISDKGuest` class represents the conichi guest.
 * This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKGuest : CNISDKObject

/**
 *  NSString object with information about which provider was used to authorize
 *  @see CNISDKAPIManagerConstants for the list of providers
 */
@property (nonatomic, strong, readonly, nullable) NSString *infoProvider;

/**
 *  The enum representation of the info provider
 *  @see CNISDKAPIManagerProvider
 */
@property (nonatomic, assign, readonly) CNISDKAPIManagerProvider infoProviderEnum;

/**
 *  If guest is in incognito mode sdk won't send the callbacks about did discover venue/region/beacon
 *  However sdk will send the callbacks about did leave venue/region/beacon in any case
 */
@property (nonatomic, assign, getter=isIncognitoModeEnabled) BOOL incognitoModeEnabled;

/**
 *  Date that represent time when this guest object was created on the server
 */
@property (nonatomic, strong, readonly, nullable) NSDate *createdAt;

/**
 *  Guest's first name
 */
@property (nonatomic, strong, readonly, nullable) NSString *firstName;

/**
 *  Guest's last name
 */
@property (nonatomic, strong, readonly, nullable) NSString *lastName;

/**
 *  Guest's email
 */
@property (nonatomic, strong, readonly, nullable) NSString *email;

/**
 *  Guest's phone
 */
@property (nonatomic, strong, readonly, nullable) NSString *phone;

/**
 * Any optional value provided with Guest object
 */
@property (nonatomic, strong, readonly, nullable) NSDictionary *optionalValue;

/**
 * The url string to guest avatar
 */
@property (nonatomic, strong, readonly, nullable) NSString *picturePath;

/**
 *  Guest's birthday in ISO8601 format
 */
@property (nonatomic, strong, readonly, nullable) NSDate *dateOfBirthday;

/**
 * Current locale name of the guest
 */
@property (nonatomic, strong, readonly, nullable) NSString *locale;

/**
 * The gender of the guest
 * see constants kCNISDKGuestGenderMale, kCNISDKGuestGenderFemale
 */
@property (nonatomic, strong, readonly, nullable) NSString *gender;

/**
 *  Guest's nationality represented as ISO2 code
 *  Be aware RU and not 'ru' or 'RUS' or 'rus'
 */
@property (nonatomic, strong, readonly, nullable) NSString *nationalityISOCode;

/**
 *  The status of the guest
 *  see constants kCNISDKAPIManagerGuestStatus*
 */
@property (nonatomic, strong, readonly, nullable) NSString *status;

/**
 * The enum representation of the guest status
 * @see CNISDKGuestStatus
 */
@property (nonatomic, assign, readonly) CNISDKGuestStatus statusEnum;

/**
 * If the guest can change password or not
 * Basically it depends on info provider and if the guest has logged in with Facebook, LinkedIn, Xing guest can't edit password
 */
@property (nonatomic, assign, readonly) BOOL isEditPasswordAllowed;

///--------------------------------------
/// @name Guest-specific Relationships
///--------------------------------------

/**
 * The array of CNISKDCreditCard objects
 * @see CNISDKCreditCard
 */
@property (nonatomic, strong, readonly) NSArray *creditCards;

/**
 * The trackin of the guest
 * @see CNISDKTrackin
 */
@property (nonatomic, strong, readonly, nullable) CNISDKTrackin *currentTrackin;

/**
 * The current/last closed checkin of the guest
 * This is not nil if the guest has open/closed checkin somewhere
 * @see CNISDKCheckin
 */
@property (nonatomic, strong, readonly, nullable) CNISDKCheckin *currentCheckin;

/**
 * If the guest did discover beacon it will be stored in this property as soon as the guest leaves the beacon this property will set to nil
 */
@property (nonatomic, strong, readonly, nullable) CNISDKBeacon *currentBeacon;

/**
 * If the guest did discover region it will be stored in this property as soon as the guest leaves the region this property will set to nil
 */
@property (nonatomic, strong, readonly, nullable) CNISDKRegion *currentRegion;

/**
 * If the guest did discover venue it will be stored in this property as soon as the guest leaves the venue this property will set to nil
 */
@property (nonatomic, strong, readonly, nullable) CNISDKVenue *currentVenue;

/**
 * The personal address of the guest
 */
@property (nonatomic, strong, readonly, nullable) CNISDKPersonalAddress *personalAddress;

/**
 * The business address of the guest
 */
@property (nonatomic, strong, readonly, nullable) CNISDKBusinessAddress *businessAddress;

/**
 * The travel document of the guest
 */
@property (nonatomic, strong, readonly, nullable) CNISDKTravelDocument *travelDocument;

/**
 *  The tax information of the guest
 */
@property (nonatomic, strong, readonly, nullable) CNISDKTaxInfo *taxInfo;

/**
 * The array of CNISDKPreference objects that guest has selected
 */
@property (nonatomic, strong, readonly) NSArray *preferences;

/**
 * The array of CNISDKPreCheckinRequest objects that guest has created
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKPreCheckinRequest *> *preCheckinRequests;

/**
 *  The Miles & More card information of the guest
 */
@property (nonatomic, strong, readonly, nullable) CNISDKMilesAndMoreCard *milesCard;

/**
 *  The external ID used optionally during sign-up
 */
@property (nonatomic, strong, readonly, nullable) NSString *externalID;


///--------------------------------------
/// @name Guest-specific Methods
///--------------------------------------

/**
 * Singleton because currently we support only one guest session.
 * @return current guest
 */
+ (instancetype)currentGuest;

@end

/**
 *  The `CNISDKGuest+Deprecated` category contains all deprecated values
 */
@interface CNISDKGuest (Deprecated)

/**
 *  Guest's nationality. E.x German
 */
@property (nonatomic, copy, nullable, readonly) NSString *nationality __deprecated_msg("use nationalityISOCode instead, for now this value uses the nationalityISOCode underline");

@end

NS_ASSUME_NONNULL_END
