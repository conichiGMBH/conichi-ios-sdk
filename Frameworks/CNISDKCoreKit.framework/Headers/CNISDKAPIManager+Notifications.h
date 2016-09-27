//
//  CNISDKAPIManager+Notifications.h
//  conichiSDK
//
//  Created by alex on 11/17/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIManager (Notifications)

/**
 * Fetch notifications unread count for current guest
 * @param completion - callback block with two parameters
 *                     1. Unread count as NSNumber
 *                     2. NSError object if request failed
 */
- (void)fetchGuestNotificationsUnreadCountWithCompletion:(nullable CNISDKIDErrorBlock)completion;


/**
 * Fetch notifications for current guest
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKNotification objects
 *                     2. NSError object if request failed
 */
- (void)fetchGuestNotificationsWithCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Star notification with given conichiID
 * @param isFavourite - should notification be starred
 * @param conichiID - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. Starred notification object
 *                     2. NSError object if request failed
 */
- (void)favouriteNotification:(BOOL)isFavourite withConichiID:(NSString *)conichiID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Delete notification with given conichiID
 * @param conichiID - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. Deleted notification object
 *                     2. NSError object if request failed
 */
- (void)deleteNotificationWithConichiID:(NSString *)conichiID completion:(nullable CNISDKBooleanErrorBlock)completion;


/**
 * Mark notification with given conichiID as read
 * @param conichiID - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. Read notification object
 *                     2. NSError object if request failed
 */
- (void)markReadNotificationWithConichiID:(NSString *)conichiID completion:(nullable CNISDKIDErrorBlock)completion;


@end


NS_ASSUME_NONNULL_END
