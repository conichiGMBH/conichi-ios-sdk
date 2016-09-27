//
//  NSDate+CNISDKMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/26/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKAttributeMapping.h"


NS_ASSUME_NONNULL_BEGIN


@interface NSDate (CNISDKMapping)

/**
 * This block formats NSString by @"yyyy-MM-dd'T'HH:mm:ss.SSSZ" dateFormatter
 */
+ (CNISDKAttributeMappingBlock)cnisdk_defaultMappingBlock;

/**
 * This block formats NSString by @"yyyy-MM-dd" dateFormatter
 */
+ (CNISDKAttributeMappingBlock)cnisdk_YYYYMMDDMappingBlock;

@end

NS_ASSUME_NONNULL_END
