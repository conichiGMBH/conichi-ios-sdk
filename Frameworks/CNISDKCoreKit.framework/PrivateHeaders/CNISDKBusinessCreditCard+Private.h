//
//  CNISDKBusinessCreditCard+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKBusinessCreditCard.h"
#import "CNISDKCreditCard+Private.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKBusinessCreditCard (Properties)

@property (nonatomic, strong, readwrite) CNISDKBusinessAddress *address;

@end


@interface CNISDKBusinessCreditCard (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
