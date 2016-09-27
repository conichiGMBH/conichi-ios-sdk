//
//  CNISDKPreferenceCategory.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/15/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKPreference;

#import "CNISDKMacros.h"


#define CNISDKPreferenceCategoryKeypath(NAME) CNISDKKeypath(CNISDKPreferenceCategory, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPreferenceCategory` class represents a preference category.
 *  This class is a subclass of a <CNISDKObject>.
 *  It can be either category with subcategories - also array of CNISDKPreferenceCategory class objects or it can contain preferences.
 *  @note CNISDKPreferenceCategory cannot be with both preferences and categories simultaneously.
 */
@interface CNISDKPreferenceCategory : CNISDKObject

@property (nonatomic, strong, readonly) NSString *name;

/**
 *  The code of the category. Can be used as a unique identifier for preference category
 */
@property (nonatomic, strong, readonly) NSString *code;

/**
 *  The display order of the category. Can be used to sort categories objects
 */
@property (nonatomic, strong, readonly) NSNumber *displayOrder;

/**
 *  If this category can contain custom item or not
 */
@property (nonatomic, assign, readonly) BOOL allowsCustomItems;

/**
 *  The parent category conichi id. Can be nil if the category doesn't have parent
 */
@property (nonatomic, strong, readonly, nullable) NSString *parentCategoryConichiID;

/**
 *  The subcategories of the category.
 *  NSArray of CNISDKPreferenceCategory objects.
 *  Can be nil if category doesn't have subcategories
 */
@property (nonatomic, strong, readonly, nullable) NSArray<CNISDKPreferenceCategory *> *categories;

/**
 *  The prefences of the category
 *  NSArray of CNISDKPreference objects
 *  Can be nil if category doesn't have preferences
 */
@property (nonatomic, strong, readonly, nullable) NSArray<CNISDKPreference *> *preferences;

/**
 *  @return Array of all preference objects from all flattened sub categories
 */
- (NSArray<CNISDKPreference *> *)flattenPreferences;

/**
 *  @return Array of all preference sub categories objects including their sub categories
 */
- (NSArray<CNISDKPreferenceCategory *> *)flattenSubCategories;

/**
 *  @return All preference categories that were downloaded from the server.
 *  @note Can be nil, if there was an issue while downloading it from the server or the request hasn't been completed yet
 */
+ (nullable NSArray<CNISDKPreferenceCategory *> *)allPreferenceCategories;

@end

NS_ASSUME_NONNULL_END
