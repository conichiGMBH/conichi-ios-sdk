//
//  CNISDKTrackin.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/13/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKBeacon;
@class CNISDKRegion;

#import "CNISDKMacros.h"


#define CNISDKTrackinKeypath(NAME) CNISDKKeypath(CNISDKTrackin, NAME)


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKTrackinStatusOpen;
extern NSString *const kCNISDKTrackinStatusClosed;

typedef NS_ENUM(NSUInteger, CNISDKTrackinType) {
    CNISDKTrackinTypeDefault,
    CNISDKTrackinTypeTimeBased
};

extern NSString *const kCNISDKTrackinTypeDefault;
extern NSString *const kCNISDKTrackinTypeTimeBased;

typedef NS_ENUM(NSUInteger, CNISDKTrackinStatus) {
    CNISDKTrackinStatusOpen,
    CNISDKTrackinStatusClosed
};

/**
 *  The `CNISDKTrackin` class represents the status of the guest for the specific beacon.
 *  This class is a subclass of a <CNISDKObject>.
 *  E.x. If the guest is near the beacon the status will be open, as soon as the guest leaves the beacon range status will become closed
 */
@interface CNISDKTrackin : CNISDKObject

/**
 *  The status of the trackin
 *  see constants kCNISDKTrackinStatus, kCNISDKTrackinStatusClosed
 */
@property (nonatomic, strong, readonly) NSString *status;
@property (nonatomic, assign, readonly) CNISDKTrackinStatus statusEnum;

/**
 *  The type of the trackin
 *  see constants kCNISDKTrackinType*
 */
@property (nonatomic, strong, readonly) NSString *type;
@property (nonatomic, assign, readonly) CNISDKTrackinType typeEnum;

/**
 *  The venue ID of the trackin
 */
@property (nonatomic, strong, readonly) NSString *venueID;

/**
 *  The associated region of the trackin
 */
@property (nonatomic, strong, readonly) CNISDKRegion *associatedRegion;

@end

NS_ASSUME_NONNULL_END
