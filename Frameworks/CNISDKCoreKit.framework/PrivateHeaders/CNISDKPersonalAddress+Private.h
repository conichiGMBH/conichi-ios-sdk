//
//  CNISDKPersonalAddress+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/23/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKPersonalAddress.h"
#import "CNISDKAddress+Private.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPersonalAddress (Private)

- (instancetype)initWithAddress:(CNISDKAddress *)address;

@end


@interface CNISDKPersonalAddress (Mapping) <CNISDKMapping>

+ (CNISDKObjectMapping *)creditCardPersonalAddressMapping;

@end

NS_ASSUME_NONNULL_END
