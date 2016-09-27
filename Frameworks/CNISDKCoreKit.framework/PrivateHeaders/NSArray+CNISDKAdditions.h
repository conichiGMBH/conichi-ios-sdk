//
//  NSArray+CNISDKAdditions.h
//  conichiSDK
//
//  Created by Anton Domashnev on 06/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `NSArray+CNISDKAdditions` category that .
 *  This class is a subclass of a <CNISDKObject>.
 *  It can be either category with subcategories - also array of CNISDKPreferenceCategory class objects or it can contain preferences.
 *  @note CNISDKPreferenceCategory cannot be with both preferences and categories simultaneously.
 */
@interface NSArray (CNISDKAdditions)

/**
 *  Iterates through the current array running the block on each object and
 *  returning an array of the changed objects.
 *
 *  @param block a block that passes in each object and returns a modified object
 *
 *  @return NSArray of modified objects
 */
- (NSArray *)cni_map:(id (^)(id object))block;

@end

NS_ASSUME_NONNULL_END
