//
//  CNISDKNotification.h
//  conichiSDK
//
//  Created by alex on 11/17/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

#import "CNISDKMacros.h"


#define CNISDKNotificationKeypath(NAME) CNISDKKeypath(CNISDKNotification, NAME)


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKNotificationTypeCheckin;
extern NSString *const kCNISDKNotificationTypeCheckout;
extern NSString *const kCNISDKNotificationTypePaymentCompleted;
extern NSString *const kCNISDKNotificationTypePaymentDenied;
extern NSString *const kCNISDKNotificationTypePaymentCustom;
extern NSString *const kCNISDKNotificationTypePaymentConichi;

/**
 *  The `CNISDKNotification` class represents the notification that backend sends to the guest.
 */
@interface CNISDKNotification : CNISDKObject

/**
 *  Notification's title
 */
@property (nonatomic, strong, readonly, nullable) NSString *title;

/**
 *  Notification's message
 */
@property (nonatomic, strong, readonly, nullable) NSString *message;

/**
 *  Notification's image URL
 */
@property (nonatomic, strong, readonly, nullable) NSString *imageURL;

/**
 *  Notification's type
 *  see constants kCNISDKNotificationType*
 */
@property (nonatomic, strong, readonly, nullable) NSString *type;

/**
 *  Venue's name that belongs to the notification
 */
@property (nonatomic, strong, readonly, nullable) NSString *venueName;

/**
 *  If notification has been read or not by guest
 */
@property (nonatomic, assign, getter=isRead, readonly) BOOL read;

/**
 *  If notification marks as favourite by guest or not
 */
@property (nonatomic, assign, getter=isFavourite, readonly) BOOL favourite;

/**
 *  Notification's created date in ISO8601 format
 */
@property (nonatomic, strong, readonly, nullable) NSDate *createdAt;

@end

NS_ASSUME_NONNULL_END
