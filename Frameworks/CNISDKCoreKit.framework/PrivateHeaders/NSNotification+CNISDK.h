//
//  NSNotification+CNISDK.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/19/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKMacros.h>
#import <CNISDKCoreKit/CNISDKGuest.h>

@class CNISDKVenue;
@class CNISDKRegion;
@class CNISDKBeacon;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKDidDiscoverVenueNotification;
extern NSString *const kCNISDKDidDiscoverRegionInVenueNotification;
extern NSString *const kCNISDKDidLeaveRegionInVenueNotification;
extern NSString *const kCNISDKDidLeaveVenueNotification;
extern NSString *const kCNISDKDidChangeAuthorizationStatusNotification;
extern NSString *const kCNISDKDidChangeIncognitoStatusNotification;

extern NSString *const kCNISDKNotificationUserInfoIsAuthorizedKey;
extern NSString *const kCNISDKNotificationUserInfoIsInIncognitoKey;
extern NSString *const kCNISDKNotificationUserInfoVenueKey;
extern NSString *const kCNISDKNotificationUserInfoRegionKey;


@interface NSNotification (CNISDK)

/**
 * Duplicate of conichiSDKDidDiscoverVenue: in CNISDKDelegate for internal usage
 * @param venue - discovered CNISDKVenue object. Can't be nil otherwise you'll get an assert
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoVenueKey: venue}
 *         May return nil if venue is nil
 */
+ (nullable NSNotification *)CNISDKNotificationDidDiscoverVenue:(CNISDKVenue *)venue;

/**
 * Duplicate of conichiSDKDidStartTrackingGuestInRegion:inVenue:trackin: in CNISDKDelegate for internal usage
 * @param region - discovered CNISDKRegion object. Can't be nil otherwise you'll get an assert
 * @param venue - in which venue region has been discovered. Can't be nil otherwise you'll get an assert
 * @param trackin - created trackin object for the given region and venue
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoVenueKey: venue, kCNISDKNotificationUserInfoRegionKey: region}
 *         May return nil if venue or region nil
 */
+ (nullable NSNotification *)CNISDKNotificationDidStartTrackingGuestInRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue trackin:(CNISDKTrackin *)trackin;

/**
 * Duplicate of conichiSDKDidLeaveRegion:inVenue in CNISDKDelegate for internal usage
 * @param region - in which region beacon has been left. Can't be nil otherwise you'll get an assert
 * @param venue - in which venue beacon has been left. Can't be nil otherwise you'll get an assert
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoVenueKey: venue, kCNISDKNotificationUserInfoRegionKey: region}
 */
+ (nullable NSNotification *)CNISDKNotificationDidLeaveRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue;

/**
 * Duplicate of conichiSDKDidLeaveVenue: in CNISDKDelegate for internal usage
 * @param venue - leaved CNISDKVenue object. Can't be nil otherwise you'll get an assert
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoVenueKey: venue}
 *         May return nil if venue nil
 */
+ (nullable NSNotification *)CNISDKNotificationDidLeaveVenue:(CNISDKVenue *)venue;

/**
 * Duplicate of conichiSDKDidChangeAuthorizationStatusNotification: in CNISDKDelegate for internal usage
 * @param isAuthorized - flag whether guest now is authorized or not
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoIsAuthorizedKey: isAuthorizedFlag}
 */
+ (NSNotification *)CNISDKNotificationDidChangeAutorizationStatus:(BOOL)isAuthorized;

/**
 * Notifiations about did change incognito mode status
 * @param isInIncognito - flag whether guest now is incognito mode or not
 * @return notification with userInfo: @{kCNISDKNotificationUserInfoIsInIncognitoKey: isInIncognito}
 */
+ (NSNotification *)CNISDKNotificationDidChangeIncognitoStatus:(BOOL)isInIncognito;

@end

NS_ASSUME_NONNULL_END
