//
//  CNISDKPreferenceCollector.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/18/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKPreference;
@class CNISDKPreferenceCategory;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPreferenceCollector` class contains methods that builds the tree of CNISDKCategory and CNISDKPreference,
 */
@interface CNISDKPreferenceCollector : NSObject

/**
 *  Sets the guest's preferences to be collected later
 *  All guest's preferences are meant to be selected
 *
 *  @param preferences guest's preferences
 */
- (void)setGuestPreferences:(NSArray<CNISDKPreference *> *)preferences;

/**
 *  Sets the all preferences to be collected later
 *  These preferences can intersect with guest's preferences
 *
 *  @param preferences public preferences
 */
- (void)setPreferences:(NSArray<CNISDKPreference *> *)preferences;

/**
 *  Sets the conichi's preference categories to be collected later
 *
 *  @param categories preference categories
 */
- (void)setCategories:(NSArray<CNISDKPreferenceCategory *> *)categories;

/**
 *  Generates the array of CNISDKPreferenceCategory with all subcategories and the associated CNISDKPreference object to the associated category
 *
 *  @return array of CNISDKPreferenceCategory objects
 */
- (NSArray<CNISDKPreferenceCategory *> *)collectPreferenceAndCategories;

@end

NS_ASSUME_NONNULL_END
