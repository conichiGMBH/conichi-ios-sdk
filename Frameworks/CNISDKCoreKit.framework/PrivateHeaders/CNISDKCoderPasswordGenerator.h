//
//  CNISDKCoderPasswordGenerator.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKCoderPasswordGenerator : NSObject

+ (NSString *)coderPasswordForClass:(Class)objectClass;

@end

NS_ASSUME_NONNULL_END
