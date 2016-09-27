//
//  CNISDKCoding.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKCoding <NSCoding>

+ (nullable NSArray *)encodingProperties;

@end

NS_ASSUME_NONNULL_END
