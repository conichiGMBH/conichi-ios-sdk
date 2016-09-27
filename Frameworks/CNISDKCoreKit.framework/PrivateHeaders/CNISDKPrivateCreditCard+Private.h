//
//  CNISDKPrivateCreditCard+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKPrivateCreditCard.h>

#import "CNISDKCreditCard+Private.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPrivateCreditCard (Properties)

@property (nonatomic, strong, readwrite) CNISDKPersonalAddress *address;

@end


@interface CNISDKPrivateCreditCard (Mapping)

@end


@interface CNISDKPrivateCreditCard (Migration)

- (instancetype)initWithCreditCard:(CNISDKCreditCard *)creditCard;

@end

NS_ASSUME_NONNULL_END
