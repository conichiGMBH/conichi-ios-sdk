//
//  CNISDKGuest+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKGuest.h>
#import <CNISDKCoreKit/CNISDKMapping.h>
#import "CNISDKMapping.h"

@class CNISDKPersonalAddress;
@class CNISDKBusinessAddress;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKGuestCurrentGuestArchiveKey;
extern NSString *const kCNISDKGuestCurrentGuestModelVersionKey;
extern NSInteger const kCNISDKGuestModelVersion;


@interface CNISDKGuest (Properties)

@property (nonatomic, strong, readwrite, nullable) NSDate *createdAt;
@property (nonatomic, strong, readwrite, nullable) NSString *infoProvider;
@property (nonatomic, strong, readwrite, nullable) NSString *firstName;
@property (nonatomic, strong, readwrite, nullable) NSString *lastName;
@property (nonatomic, strong, readwrite, nullable) NSString *email;
@property (nonatomic, strong, readwrite, nullable) NSString *phone;
@property (nonatomic, strong, readwrite, nullable) NSString *picturePath;
@property (nonatomic, strong, readwrite, nullable) NSDate *dateOfBirthday;
@property (nonatomic, strong, readwrite, nullable) NSString *locale;
@property (nonatomic, strong, readwrite, nullable) NSString *gender;
@property (nonatomic, strong, readwrite, nullable) NSString *nationalityISOCode;
@property (nonatomic, strong, readwrite, nullable) NSString *paylevenToken;
@property (nonatomic, strong, readwrite, nullable) NSString *optionalValue;
@property (nonatomic, strong, readwrite, nullable) NSString *status;
@property (nonatomic, strong, readwrite, nullable) NSString *externalID;

@property (nonatomic, strong, readwrite) NSArray *creditCards;
@property (nonatomic, strong, readwrite, nullable) CNISDKTaxInfo *taxInfo;
@property (nonatomic, strong, readwrite, nullable) CNISDKPersonalAddress *personalAddress;
@property (nonatomic, strong, readwrite, nullable) CNISDKBusinessAddress *businessAddress;
@property (nonatomic, strong, readwrite, nullable) CNISDKTravelDocument *travelDocument;
@property (nonatomic, strong, readwrite, nullable) NSArray *preferences;
@property (nonatomic, strong, readwrite, nullable) NSArray<CNISDKPreCheckinRequest *> *preCheckinRequests;
@property (nonatomic, strong, readwrite, nullable) CNISDKMilesAndMoreCard *milesCard;

@property (nonatomic, strong, readwrite, nullable) CNISDKTrackin *currentTrackin;
@property (nonatomic, strong, readwrite, nullable) CNISDKCheckin *currentCheckin;
@property (nonatomic, strong, readwrite, nullable) CNISDKBeacon *currentBeacon;
@property (nonatomic, strong, readwrite, nullable) CNISDKRegion *currentRegion;
@property (nonatomic, strong, readwrite, nullable) CNISDKVenue *currentVenue;

@end


@interface CNISDKGuest (Private)

+ (BOOL)isSaveEnabled;
+ (void)setSaveEnabled:(BOOL)isEnabled;

- (void)save;

- (BOOL)isStatusNew:(NSString *)newStatus;

@end


@interface CNISDKGuest (Incognito)

//It's only for the current app session it won't be archived
@property (nonatomic, strong, readwrite) NSArray *incognitoRegionIDsArray;

//It's only for the current app session it won't be archived
@property (nonatomic, strong, readwrite) NSArray *incognitoVenuesArray;

- (void)addIncognitoRegion:(CNISDKRegion *)region;
- (void)clearincognitoRegionIDsArray;

- (void)addIncognitoVenue:(CNISDKVenue *)venue;
- (void)clearIncognitoVenuesArray;

@end


@interface CNISDKGuest (Mapping) <CNISDKMapping>

/**
 * Nullify all Guest's information. E.x. use this method after succeeded log out
 */
- (void)reset;

@end


@interface CNISDKGuest (Migration)

- (void)migrateFromVersion:(NSInteger)fromVersion toVersion:(NSInteger)toVersion withArchivedGuest:(NSData *)archivedGuestData;

@end

NS_ASSUME_NONNULL_END
