//
//  CNISDKAddress+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAddress (Properties)

@property (nonatomic, strong, readwrite) NSString *street;
@property (nonatomic, strong, readwrite) NSString *zip;
@property (nonatomic, strong, readwrite) NSString *city;
@property (nonatomic, strong, readwrite) NSString *countryCode;

@end


@interface CNISDKAddress (Mapping) <CNISDKMapping>


@end

NS_ASSUME_NONNULL_END
