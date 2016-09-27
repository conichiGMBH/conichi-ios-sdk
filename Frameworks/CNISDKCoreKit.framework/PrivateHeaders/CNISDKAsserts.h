//
//  CNISDKAsserts.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/6/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


@interface CNISDKAsserts : NSObject

+ (void)handleAssertWithMessage:(NSString *)message, ... NS_FORMAT_FUNCTION(1, 2);

+ (void)handleParameterAssert:(NSString *)parameter withMessage:(NSString *)message;

@end


#define CNISDKAssertOrReturn(condition, message, ...)                     \
    do {                                                                  \
        if (!condition) {                                                 \
            [CNISDKAsserts handleAssertWithMessage:message, __VA_ARGS__]; \
            return;                                                       \
        }                                                                 \
    } while (0)

#define CNISDKAssertOrContinue(condition, message, ...)                   \
    do {                                                                  \
        if (!condition) {                                                 \
            [CNISDKAsserts handleAssertWithMessage:message, __VA_ARGS__]; \
            continue;                                                     \
        }                                                                 \
    } while (0)

#define CNISDKAssertOrReturnNil(condition, message, ...)                  \
    do {                                                                  \
        if (!condition) {                                                 \
            [CNISDKAsserts handleAssertWithMessage:message, __VA_ARGS__]; \
            return nil;                                                   \
        }                                                                 \
    } while (0)

#define CNISDKAssertOrReturnValue(condition, rescueValue, message, ...)   \
    do {                                                                  \
        if (!condition) {                                                 \
            [CNISDKAsserts handleAssertWithMessage:message, __VA_ARGS__]; \
            return rescueValue;                                           \
        }                                                                 \
    } while (0)

#define CNISDKAssertOrDoAction(condition, action, message, ...)           \
    do {                                                                  \
        if (!condition) {                                                 \
            [CNISDKAsserts handleAssertWithMessage:message, __VA_ARGS__]; \
            action                                                        \
        }                                                                 \
    } while (0)

#define CNISDKParameterAssertOrReturn(parameter, message)                           \
    do {                                                                            \
        if (!parameter) {                                                           \
            [CNISDKAsserts handleParameterAssert:@ #parameter withMessage:message]; \
            return;                                                                 \
        }                                                                           \
    } while (0)

#define CNISDKParameterAssertOrContinue(parameter, message)                         \
    do {                                                                            \
        if (!parameter) {                                                           \
            [CNISDKAsserts handleParameterAssert:@ #parameter withMessage:message]; \
            continue;                                                               \
        }                                                                           \
    } while (0)

#define CNISDKParameterAssertOrReturnNil(parameter, message)                        \
    do {                                                                            \
        if (!parameter) {                                                           \
            [CNISDKAsserts handleParameterAssert:@ #parameter withMessage:message]; \
            return nil;                                                             \
        }                                                                           \
    } while (0)

#define CNISDKParameterAssertOrDoAction(parameter, action, message)                 \
    do {                                                                            \
        if (!parameter) {                                                           \
            [CNISDKAsserts handleParameterAssert:@ #parameter withMessage:message]; \
            action                                                                  \
        }                                                                           \
    } while (0)
