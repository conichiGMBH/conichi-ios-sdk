//
//  CNISDKLocalPreferenceUpdater.h
//  conichiSDK
//
//  Created by Anton Domashnev on 06/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKDiskStorageManager;
@class CNISDKPreference;

#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKLocalPreferenceUpdater : NSObject

- (instancetype)initWithDiskStorageManager:(CNISDKDiskStorageManager *)diskStorageManager;

/**
 *  Adds given preference to the preferences tree in local storage
 *
 *  @param preference CNISDKPreference to add
 *  @param completion block with two parameters
 *                    1. flag whether the operation succeeded or not
 *                    2. optional error object
 */
- (void)addPreference:(CNISDKPreference *)preference completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 *  Removes given preference from the preferences tree in local storage
 *
 *  @param preferenceID conichiID of the CNISDKPreference object to be removed from local storage
 *  @param completion   block with two parameters
 *                      1. flag whether the operation succeeded or not
 *                      2. optional error object
 */
- (void)removePreferenceWithID:(NSString *)preferenceID completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 *  Changes the selected flag to the given value for the preferences with the given conichiIDs
 *
 *  @param preferenceIDs NSArray of conichiIDs for preferences to be updated
 *  @param selected      new selected flag value
 *  @param completion    block with two parameters
 *                       1. flag whether the operation succeeded or not
 *                       2. optional error object
 */
- (void)setPreferenceWithIDs:(NSArray<NSString *> *)preferenceIDs selected:(BOOL)selected completion:(nullable CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
