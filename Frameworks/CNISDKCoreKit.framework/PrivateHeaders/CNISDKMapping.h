//
//  CNISDKMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKObjectMapping;


NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKMapping <NSObject>

+ (CNISDKObjectMapping *)objectMapping;

@optional
+ (CNISDKObjectMapping *)serializationMapping;

@end

NS_ASSUME_NONNULL_END
