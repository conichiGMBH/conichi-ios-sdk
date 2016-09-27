//
//  CNISDKCheckin.h
//  conichiSDK
//
//  Version: 1.0.0
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKVenue;
@class CNISDKBeacon;

#import "CNISDKMacros.h"


#define CNISDKCheckinKeypath(NAME) CNISDKKeypath(CNISDKCheckin, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  Checkin's status
 */
typedef NS_ENUM(NSInteger, CNISDKCheckinStatus) {
    /**
     *  Checkin status is currently unknown
     */
    CNISDKCheckinStatusUnknown,

    /**
     *  Checkin is open in the associated venue and room is assigned if the mobile checkin
     */
    CNISDKCheckinStatusOpen,

    /**
     *  Checkin is closed
     */
    CNISDKCheckinStatusClosed,

    /**
     *  Checkin is paid but room number is not assigned yet
     */
    CNISDKCheckinStatusPendingRoom
};


/**
 *  A string value of CNISDKCheckinStatusOpen
 */
extern NSString *const kCNISDKCheckinStatusOpen;

/**
 *  A string value of CNISDKCheckinStatusClosed
 */
extern NSString *const kCNISDKCheckinStatusClosed;

/**
 *  A string value of CNISDKCheckinStatusPendingRoom
 */
extern NSString *const kCNISDKCheckinStatusPendingRoom;


/**
 *  The `CNISDKCheckin` class is a representation checkin object from conichi's cloud.
 */
@interface CNISDKCheckin : CNISDKObject

/**
 *  The status of the checkin.
 *  see constants kCNISDKCheckinStatusOpen or kCNISDKCheckinStatusClosed
 */
@property (nonatomic, copy, readonly) NSString *status;

/**
 *  The enum representation of the checkin status
 *  @see CNISDKCheckinStatus
 */
@property (nonatomic, assign, readonly) CNISDKCheckinStatus statusEnum;

/**
 *  The creation date of the ckeckin
 */
@property (nonatomic, strong, readonly) NSDate *createdAt;

/**
 *  The closed date of the checkin.
 *  Nil if check-in is open
 */
@property (nonatomic, strong, readonly, nullable) NSDate *closedAt;

/**
 *  The rating of the checkin. Can be nil if the guest hasn't rated this checkin yet
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *rating;

/**
 *  The venue associated with the checkin
 */
@property (nonatomic, strong, readonly) CNISDKVenue *associatedVenue;

@end

NS_ASSUME_NONNULL_END
