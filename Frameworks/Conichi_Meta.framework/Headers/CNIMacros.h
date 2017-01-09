//
//  CNIMacros.h
//  ios-guest
//
//  Created by Anton Domashnev on 3/31/15.
//  Copyright (c) 2015 Conichi. All rights reserved.
//

/********* Block *********/

#define CNIPerformBlock(block, ...) \
    {                               \
        if (block) {                \
            block(__VA_ARGS__);     \
        }                           \
    }

#define CNIPerformBlockOnMainThread(block, ...)                 \
    {                                                           \
        if ([NSThread isMainThread]) {                          \
            if (block) {                                        \
                block(__VA_ARGS__);                             \
            }                                                   \
        } else {                                                \
            dispatch_async(dispatch_get_main_queue(), ^(void) { \
                if (block) {                                    \
                    block(__VA_ARGS__);                         \
                }                                               \
            });                                                 \
        }                                                       \
    }

#define CNIPerformBlockOnMainThreadAfterDelay(delay, block, ...)                                                        \
    {                                                                                                                   \
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ \
            if (block) {                                                                                                \
                block(__VA_ARGS__);                                                                                     \
            }                                                                                                           \
        });                                                                                                             \
    }

#define CNIPostNotificationObjectOnMainThread(notification)                               \
    {                                                                                     \
        if (notification) {                                                               \
            if ([NSThread isMainThread]) {                                                \
                [[NSNotificationCenter defaultCenter] postNotification:notification];     \
            } else {                                                                      \
                CNIPerformBlockOnMainThread(^{                                            \
                    [[NSNotificationCenter defaultCenter] postNotification:notification]; \
                });                                                                       \
            }                                                                             \
        }                                                                                 \
    }

#define CNIPostNotificationOnMainThread(name, anObject, anUserInfo)                                                   \
    {                                                                                                                 \
        if ([NSThread isMainThread]) {                                                                                \
            [[NSNotificationCenter defaultCenter] postNotificationName:name object:anObject userInfo:anUserInfo];     \
        } else {                                                                                                      \
            CNIPerformBlockOnMainThread(^{                                                                            \
                [[NSNotificationCenter defaultCenter] postNotificationName:name object:anObject userInfo:anUserInfo]; \
            });                                                                                                       \
        }                                                                                                             \
    }

/********* Math *********/

#if defined(__LP64__) && __LP64__
#define CNIMAX(a, b) fmax(a, b)
#define CNIMIN(a, b) fmin(a, b)
#define CNICEIL(a) ceil(a)
#define CNIFABS(a) fabs(a)
#define CNIFEQUAL(a, b) (fabs((a) - (b)) < DBL_EPSILON)
#define CNIFEQUALZERO(a) (fabs(a) < DBL_EPSILON)
#else
#define CNIMAX(a, b) fmaxf(a, b)
#define CNIMIN(a, b) fminf(a, b)
#define CNICEIL(a) ceilf(a)
#define CNIFABS(a) fabsf(a)
#define CNIFEQUAL(a, b) (fabsf((a) - (b)) < FLT_EPSILON)
#define CNIFEQUALZERO(a) (fabsf(a) < FLT_EPSILON)
#endif

/********* Color *********/

#define CNIUIColorFromRGB(rgbValue) [UIColor colorWithRed:((CGFloat)((rgbValue & 0xFF0000) >> 16)) / (CGFloat)255.0 green:((CGFloat)((rgbValue & 0xFF00) >> 8)) / (CGFloat)255.0 blue:((CGFloat)(rgbValue & 0xFF)) / (CGFloat)255.0 alpha:1.0]

#define CNIUIColorFromHEX(rgbValue) [UIColor colorWithRed:((CGFloat)((rgbValue & 0xFF0000) >> 16)) / (CGFloat)255.0 green:((CGFloat)((rgbValue & 0xFF00) >> 8)) / (CGFloat)255.0 blue:((CGFloat)(rgbValue & 0xFF)) / (CGFloat)255.0 alpha:1.0]

/********* String *********/

#define CNILocalizedString(key) NSLocalizedString(key, nil)
#define CNILocalizedStringFromTable(key, table) NSLocalizedStringFromTable(key, table, nil)

/********* Device *********/

#define CNI_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define CNI_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define CNI_IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define CNI_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define CNI_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define CNI_SCREEN_MAX_LENGTH (MAX(CNI_SCREEN_WIDTH, CNI_SCREEN_HEIGHT))
#define CNI_SCREEN_MIN_LENGTH (MIN(CNI_SCREEN_WIDTH, CNI_SCREEN_HEIGHT))

#define CNI_IS_IPHONE_4_OR_LESS (CNI_IS_IPHONE && CNI_SCREEN_MAX_LENGTH < (CGFloat)568.0)
#define CNI_IS_IPHONE_5 (CNI_IS_IPHONE && CNIFEQUAL(CNI_SCREEN_MAX_LENGTH, (CGFloat)568.0))
#define CNI_IS_IPHONE_6 (CNI_IS_IPHONE && CNIFEQUAL(CNI_SCREEN_MAX_LENGTH, (CGFloat)667.0))
#define CNI_IS_IPHONE_6P (CNI_IS_IPHONE && CNIFEQUAL(CNI_SCREEN_MAX_LENGTH, (CGFloat)736.0))

/********* Language *********/

#define CNIFILE __FILE__
#define CNIFUNCTION __PRETTY_FUNCTION__

#define CNINonnull(x) (id __nonnull) x

/********* Assertions *********/

#define CNISDKNotDesignatedInitializer()                                                                                                         \
    {                                                                                                                                            \
        NSAssert(NO, @"%@ is not the designated initializer for instances of %@.", NSStringFromSelector(_cmd), NSStringFromClass([self class])); \
        return nil;                                                                                                                              \
    }
