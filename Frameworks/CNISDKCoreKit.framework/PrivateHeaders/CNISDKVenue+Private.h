//
//  CNISDKVenue+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKVenue.h>

#import "CNISDKMapping.h"

@class CNISDKBeacon;
@class CNISDKAddress;
@class CNISDKRegion;
@class CNISDKVenueCard;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKVenue (Properties)

@property (nonatomic, strong, readwrite, nullable) NSString *photoPath;
@property (nonatomic, strong, readwrite, nullable) NSNumber *numberOfStars;
@property (nonatomic, strong, readwrite) NSNumber *major;
@property (nonatomic, strong, readwrite) NSString *status;
@property (nonatomic, strong, readwrite) NSString *name;
@property (nonatomic, strong, readwrite, nullable) NSString *welcomeMessage;
@property (nonatomic, strong, readwrite, nullable) NSString *farewellMessage;
@property (nonatomic, strong, readwrite, nullable) NSString *phone;
@property (nonatomic, strong, readwrite, nullable) NSString *formattedPhone;
@property (nonatomic, strong, readwrite, nullable) NSString *website;
@property (nonatomic, strong, readwrite, nullable) NSString *email;
@property (nonatomic, strong, readwrite, nullable) NSNumber *latitude;
@property (nonatomic, strong, readwrite, nullable) NSNumber *longitude;

@property (nonatomic, strong, readwrite) CNISDKAddress *address;
@property (nonatomic, strong, readwrite) NSArray<CNISDKRegion *> *regions;
@property (nonatomic, strong, readwrite, nullable) NSArray<CNISDKVenueCard *> *cards;

@property (nonatomic, assign, getter=isPaymentEnabled) BOOL paymentEnabled;
@property (nonatomic, assign, getter=isPMSIntegrated) BOOL PMSIntegrated;

@end


@interface CNISDKVenue (LocalCache)

+ (nullable CNISDKVenue *)cachedVenueAssociatedToBeacon:(CNISDKBeacon *)beacon;
+ (nullable CNISDKVenue *)venueWithMajor:(NSNumber *)major;

@end


@interface CNISDKVenue (Mapping) <CNISDKMapping>

+ (CNISDKObjectMapping *)objectMapping;

@end

NS_ASSUME_NONNULL_END
