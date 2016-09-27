//
//  CNISDKCoder.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKCoding.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKCoder : NSObject

+ (id)objectOfClass:(Class<CNISDKCoding>)objectClass fromCoder:(NSCoder *)coder;
+ (void)encodeObject:(NSObject<CNISDKCoding> *)object withCoder:(NSCoder *)coder;

@end

NS_ASSUME_NONNULL_END
