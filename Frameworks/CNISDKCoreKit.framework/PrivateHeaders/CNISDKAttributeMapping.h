//
//  CNISDKAttributeMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

typedef void (^CNISDKAttributeMappingCompletonBlock)(id __nonnull mappedValue, id __nonnull object);
typedef __nullable id (^CNISDKAttributeMappingBlock)(id __nonnull initialValue);


@interface CNISDKAttributeMapping : NSObject

@property (nonatomic, strong) NSString *jsonKey;
@property (nonatomic, strong) NSString *propertyName;

/**
 * Block to transform JSON value into another
 * E.x transform NSNumber from JSON into NSString
 */
@property (nonatomic, copy, nullable) CNISDKAttributeMappingBlock mappingBlock;

@property (nonatomic, copy, nullable) CNISDKAttributeMappingCompletonBlock mappingCompletionBlock;

/**
 * Block to transform object value into JSON value
 * E.x. transform NSString from object to NSNumber in JSON
 */
@property (nonatomic, copy, nullable) CNISDKAttributeMappingBlock reverseMappingBlock;

@end

NS_ASSUME_NONNULL_END
