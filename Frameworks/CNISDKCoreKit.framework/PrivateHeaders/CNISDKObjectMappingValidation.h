//
//  CNISDKObjectMappingValidation.h
//  conichiSDK
//
//  Created by Anton Domashnev on 4/20/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKMacros.h>

typedef NS_ENUM(NSInteger, CNISDKObjectMappingValidationType) {
    CNISDKObjectMappingValidationTypeNotNil,
    CNISDKObjectMappingValidationTypeCustom,
};


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKObjectMappingValidation : NSObject

+ (instancetype)notNilValidationForPropertyName:(NSString *)propertyName;
+ (instancetype)customValidationForPropertyName:(NSString *)propertyName validationBlock:(BOOL (^)(id propertyValue, NSString *propertyName))block;

- (BOOL)validateObject:(id)object error:(NSError *__nullable *)validationError;

@end

NS_ASSUME_NONNULL_END
