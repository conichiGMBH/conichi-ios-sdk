//
//  CNISDKPreference.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

#import "CNISDKMacros.h"


#define CNISDKPreferenceKeypath(NAME) CNISDKKeypath(CNISDKPreference, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPreference` defines entity that represents a hotel guest preference (smoking room, etc)
 */
@interface CNISDKPreference : CNISDKObject

/**
 *  Preference's name
 */
@property (nonatomic, strong, readonly) NSString *name;

/**
 *  Unique preference's string identifier
 */
@property (nonatomic, strong, readonly) NSString *code;

/**
 *  Preference's display order priority
 */
@property (nonatomic, strong, readonly) NSNumber *displayOrder;

/**
 *  conichi id of the category that contains preference
 */
@property (nonatomic, strong, readonly) NSString *categoryConichiID;

/**
 *  Unique parent category string identifier
 */
@property (nonatomic, strong, readonly) NSString *categoryCode;

/**
 *  If preference has been selected by guest or not
 */
@property (nonatomic, assign, getter=isSelected, readonly) BOOL selected;

/**
 *  If preference is popular in the backend or not
 */
@property (nonatomic, assign, getter=isPopular, readonly) BOOL popular;

/**
 *  Public preferences are those supplied by backend, private preferences are those custom created by guests
 */
@property (nonatomic, assign, getter=isPublic, readonly) BOOL public;


/**
 *  Returns all preferences that a guest can choose from
 *
 *  @return NSArray of CNISDKPreference objects
 */

+ (nullable NSArray *)allPreferences;

/**
 *  Returns subset of all preferences marked as popular
 *
 *  @return NSArray of CNISDKPreference objects
 */
+ (nullable NSArray *)popularPreferences;

@end

NS_ASSUME_NONNULL_END
