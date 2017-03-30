//
//  CNISDKPropertyHelper.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;
@import ObjectiveC.runtime;

#import "CNISDKObjectRepresentation.h"


typedef NS_ENUM(NSInteger, CNISDKPropertyType) {
    CNISDKPropertyTypeUnknown,
    CNISDKPropertyTypeBOOL,
    CNISDKPropertyTypeChar,     //char, unsigned char
    CNISDKPropertyTypeShort,    //short, unsigned short
    CNISDKPropertyTypeInteger,  //int, unsigned int, NSInteger, NSUInteger
    CNISDKPropertyTypeLong,     //long, unsigned long
    CNISDKPropertyTypeLongLong, //long long, unsigned long long
    CNISDKPropertyTypeFloat,    //float, CGFloat
    CNISDKPropertyTypeDouble,
    CNISDKPropertyTypeObject
};


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPropertyHelper : NSObject

+ (nullable id)wrapArray:(nullable NSArray *)array intoRightTypeOfPropertyName:(NSString *)propertyName ofObject:(id)object;

+ (CNISDKPropertyType)propertyNameType:(NSString *)property fromClass:(Class)className;

+ (void)setProperty:(NSString *)property onObject:(id)object fromRepresentation:(id<CNISDKObjectRepresentation>)representation forKey:(NSString *)key;
+ (nullable id)getValueForProperty:(NSString *)propertyName onObject:(id)object fromRepresentation:(id<CNISDKObjectRepresentation>)representation forKey:(NSString *)key;

/**
 * @warning It ignores [NSNull null]
 */
+ (void)setPropertyValue:(nullable id)value forPropertyName:(NSString *)propertyName onObject:(id)object;

@end

NS_ASSUME_NONNULL_END
