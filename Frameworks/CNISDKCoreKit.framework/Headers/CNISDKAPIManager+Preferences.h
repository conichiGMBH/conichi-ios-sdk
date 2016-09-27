//
//  CNISDKAPIManager+Preferences.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/15/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKAPIManagerPreferenceIDKey;
extern NSString *const kCNISDKAPIManagerPreferenceCategoryIDKey;
extern NSString *const kCNISDKAPIManagerPreferenceNameKey;
extern NSString *const kCNISDKAPIManagerPreferenceImageURLKey;
extern NSString *const kCNISDKAPIManagerPreferenceSelectedKey;


@interface CNISDKAPIManager (Preferences)

/**
 * Fetch all conichi public preferences
 * @note It doesn't save them locally
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreference objects
 *                     2. NSError object if request failed
 */
- (void)fetchAllPreferences:(nullable CNISDKIDErrorBlock)completion;

/**
 * Fetch all preferences selected by the given guest
 * @note It doesn't save them locally
 * @param guest - for which guest we ask preferences
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreference objects
 *                     2. NSError object if request failed
 */
- (void)fetchGuestPreferences:(__unused CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Mark preference with given conichiID as selected and saves this information locally
 * @param conichiID  - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. Flag whether operation was successful or not
 *                     2. NSError object if request failed
 *                     
 */
- (void)selectPreferenceWithConichiID:(NSString *)conichiID completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * Marks preferences with given conichiIDs as selected and saves this information locally
 * @param conichiIDs - selected preferences conichiIDs array
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreferenceUpdateResult objects
 *                     2. NSError object if request failed
 *
 * @discussion Please in case of success check every CNISDKPreferenceUpdateResult because the whole operation is non atomic, so some 
 *             preferences could be selected and some not
 */
- (void)selectPreferencesWithConichiIDs:(NSArray<NSString *> *)conichiIDs completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Marks preference with given conichiID as deselected and saves this information locally
 * @param conichiID  - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. Flag whether operation was successful or not
 *                     2. NSError object if request failed
 */
- (void)deselectPreferenceWithConichiID:(NSString *)conichiID completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * Marks preferences with given conichiIDs as deselected and saves this information locally
 * @param conichiIDs - deselected preferences conichiIDs array
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreferenceUpdateResult objects
 *                     2. NSError object if request failed
 *
 * @discussion Please in case of success check every CNISDKPreferenceUpdateResult because the whole operation is non atomic, so some
 *             preferences could be deselected and some not
 */
- (void)deselectPreferencesWithConichiIDs:(NSArray<NSString *> *)conichiIDs completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Add new preference with given parameters
 * kCNISDKAPIManagerPreferenceCategoryIDKey and kCNISDKAPIManagerPreferenceNameKey are required
 * @param preferenceDictionary - updated preference information
 * @param completion           - callback block with two parameters
 *                               1. Created preference object
 *                               2. NSError object if request failed
 */
- (void)addPreference:(NSDictionary *)preferenceDictionary completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Delete preference with given conichiID
 * @param conichiID  - selected preference conichiID
 * @param completion - callback block with two parameters
 *                     1. If succeeded or not
 *                     2. NSError object if request failed               
 */
- (void)deletePreferenceWithConichiID:(NSString *)conichiID completion:(nullable CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
