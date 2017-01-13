//
//  CNISDKConfigurationValidator.h
//  CNISDKCoreKit
//
//  Created by Anton Domashnev on 21/11/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKConfiguration;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKConfigurationValidator : NSObject

+ (BOOL)validateSDKConfiguration:(nullable CNISDKConfiguration *)configuration error:(NSError *__autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END
