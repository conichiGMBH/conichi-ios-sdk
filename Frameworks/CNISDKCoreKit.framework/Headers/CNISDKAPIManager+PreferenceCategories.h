//
//  CNISDKAPIManager+PreferenceCategories.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/15/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIManager (PreferenceCategories)

/**
 * Fetch all Conichi's preference categories with nested categories and preferences and caches they in local file
 * @param guest - for which guest we are fetching categories and preferences
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreferenceCategory objects
 *                     2. NSError object if request failed
 */
- (void)fetchPreferenceCategoriesWithRelationshipsForGuest:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Fetch all Conichi's preference categories without relationships
 * @note It doesn't save them locally
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKPreferenceCategory objects
 *                     2. NSError object if request failed                   
 */
- (void)fetchPreferenceCategories:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
