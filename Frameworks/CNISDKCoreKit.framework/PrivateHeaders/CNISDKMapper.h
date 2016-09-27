//
//  CNISDKMapper.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/26/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKMacros.h>

@class CNISDKObjectMapping;
@class CNISDKMappingResult;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKMapper : NSObject

+ (CNISDKMappingResult *)objectFromJSON:(NSDictionary *)json withMapping:(CNISDKObjectMapping *)mapping;

+ (CNISDKMappingResult *)fillObject:(id)object fromJSON:(NSDictionary *)json withMapping:(CNISDKObjectMapping *)mapping;

+ (CNISDKMappingResult *)arrayOfObjectsFromJSONArray:(NSArray *)jsonArray withMapping:(CNISDKObjectMapping *)mapping;

@end

NS_ASSUME_NONNULL_END
