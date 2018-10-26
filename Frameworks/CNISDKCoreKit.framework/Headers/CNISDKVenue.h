//
//  CNISDKVenue.h
//  conichiSDK
//
//  Version: 1.0.0
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@import CoreLocation;

@class CNISDKBeacon;
@class CNISDKRegion;
@class CNISDKAddress;
@class CNISDKVenueCard;

#import "CNISDKMacros.h"


#define CNISDKVenueKeypath(NAME) CNISDKKeypath(CNISDKVenue, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKVenue` class represents the conichi venue.
 *  This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKVenue : CNISDKObject

/**
 *  Venue's contact phone - unformatted
 *  e.x. 491608514744
 */
@property (nonatomic, strong, readonly, nullable) NSString *phone;

/**
 *  Venue's contact phone - formatted
 *  e.x 49 160 851-47-44
 */
@property (nonatomic, strong, readonly, nullable) NSString *formattedPhone;

/**
 *  Venue's contact website
 */
@property (nonatomic, strong, readonly, nullable) NSString *website;

/**
 *  Venue's contact email
 */
@property (nonatomic, strong, readonly, nullable) NSString *email;

/**
 * The url string to the venue's photo
 */
@property (nonatomic, strong, readonly, nullable) NSString *photoPath;

/**
 * The number of stars of the venue (Currenlty we support only hotels)
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *numberOfStars;

/**
 * The major of the venue. The same as major of all venue's beacons
 */
@property (nonatomic, strong, readonly) NSNumber *major;

/**
 * The satus of the venue. Can be active or inactive, but mostly unused
 */
@property (nonatomic, strong, readonly) NSString *status;

/**
 *  Venue's name
 */
@property (nonatomic, strong, readonly) NSString *name;

/**
 * The welcome message of the venue which can be used to greet the guest on did discover venue event
 */
@property (nonatomic, strong, readonly, nullable) NSString *welcomeMessage;

/**
 * The farewell message of the venue which can be used to say something to the guest on did leave venue event
 */
@property (nonatomic, strong, readonly, nullable) NSString *farewellMessage;

/**
 *  Venue's coordinate latitude
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *latitude;

/**
 *  Venue's coordinate longitude
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *longitude;

/**
 *  Venue's coordinate
 */
@property (nonatomic, assign, readonly) CLLocationCoordinate2D coordinate;

/**
 *  If venue supports payment by conichi or not
 */
@property (nonatomic, assign, getter=isPaymentEnabled, readonly) BOOL paymentEnabled;

/**
 *  If venue supports adhoc checkout by conichi or not
 */
@property (nonatomic, assign, getter=isAdhocCheckoutEnabled, readonly) BOOL adhocCheckoutEnabled;

/**
 *  If venue requires travel document or not
 */
@property (nonatomic, assign, getter=isRequiresTravelDocument, readonly) BOOL requiresTravelDocument;

/**
 *  If venue requires user personal address or not
 */
@property (nonatomic, assign, getter=isRequireUserPersonalAddress, readonly) BOOL requireUserPersonalAddress;

/**
 *  If venue requires user signature or not
 */
@property (nonatomic, assign, getter=isRequireUserSignature, readonly) BOOL requireUserSignature;

/**
 *  The latest check-in time of the venue
 */
@property (nonatomic, strong, readonly) NSString *checkinTime;

/**
 *  The latest check-out time of the venue
 */
@property (nonatomic, strong, readonly) NSString *checkoutTime;

/**
 *  Venue's postal address
 */
@property (nonatomic, strong, readonly) CNISDKAddress *address;

/**
 * Array of CNISDKRegion objects
 */
@property (nonatomic, strong, readonly, nullable) NSArray<CNISDKRegion *> *regions;


/**
 * Array of CNISDKVenueCard objects
 */
@property (nonatomic, strong, readonly, nullable) NSArray<CNISDKVenueCard *> *cards;


/**
 *  Returns region that contains beacon with the given major and the given minor
 *
 *  @param major beacon major
 *  @param minor beacon minor
 *
 *  @return CNISDKRegion region object from regions array that has beacon with the given major and minor or nil if it doesn't exist
 */
- (nullable CNISDKRegion *)regionForBeaconWithMajor:(NSNumber *)major minor:(NSNumber *)minor;

@end

NS_ASSUME_NONNULL_END
