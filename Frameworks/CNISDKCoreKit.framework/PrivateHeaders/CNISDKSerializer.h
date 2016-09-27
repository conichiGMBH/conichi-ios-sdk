//
//  CNISDKSerializer.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/14/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKObjectMapping;

#import "CNISDKCollection.h"
#import "NSArray+CNISDKCollection.h"
#import "NSSet+CNISDKCollection.h"
#import "NSOrderedSet+CNISDKCollection.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKSerializer` converts object into JSON representation
 */
@interface CNISDKSerializer : NSObject

/**
 * Converts object to JSON representation.
 * @param object - object to convert.
 * @param mapping - object mapping.
 * @result parsed JSON in a form of NSDictionary.
 */
+ (NSDictionary *)serializeObject:(id)object withMapping:(CNISDKObjectMapping *)mapping;

/**
 * Convert objects to JSON representation.
 * @param collection - objects to convert.
 * @param mapping - object mapping.
 * @result parsed JSON in a form of NSArray.
 */
+ (NSArray *)serializeCollection:(id<CNISDKCollection>)collection withMapping:(CNISDKObjectMapping *)mapping;

@end

NS_ASSUME_NONNULL_END
