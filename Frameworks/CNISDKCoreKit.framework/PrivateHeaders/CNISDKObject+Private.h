//
//  CNISDKObject+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKObject.h>

@class CNISDKObjectMapping;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKObject (Properties)

@property (nonatomic, strong, readwrite) NSString *conichiID;

@end


@interface CNISDKObject (Mapping)

+ (void)addConichiIDMapping:(CNISDKObjectMapping *)mapping;

@end

NS_ASSUME_NONNULL_END
