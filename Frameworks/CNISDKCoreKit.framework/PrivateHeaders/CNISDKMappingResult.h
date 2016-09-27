//
//  CNISDKMappingResult.h
//  conichiSDK
//
//  Created by Anton Domashnev on 4/20/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKMacros.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKMappingResult : NSObject

@property (nonatomic, strong, readonly, nullable) id result;
@property (nonatomic, strong, readonly, nullable) NSError *error;

+ (instancetype)mappingResultWithResutl:(nullable id)result error:(nullable NSError *)error;

@end

NS_ASSUME_NONNULL_END
