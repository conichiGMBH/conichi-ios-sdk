//
//  CNISDKCreditCard+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 7/20/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCreditCard.h>

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKCreditCard (Properties)

@property (nonatomic, strong, readwrite, nullable) NSString *externalIdentifier;
@property (nonatomic, strong, readwrite) NSString *lastFourDigits;
@property (nonatomic, strong, readwrite) NSString *brand;
@property (nonatomic, strong, readwrite) NSString *useCase;
@property (nonatomic, strong, readwrite) CNISDKAddress *address;

@end


@interface CNISDKCreditCard (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
