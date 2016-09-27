//
//  CNISDKPrivateCreditCard.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKCreditCard.h"

@class CNISDKPersonalAddress;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKCreditCard` defines entity that represents guest's personal credit card
 */
@interface CNISDKPrivateCreditCard : CNISDKCreditCard

/**
 *  Billing address information connected to this credit card
 */
@property (nonatomic, strong, readonly) CNISDKPersonalAddress *address;

@end

NS_ASSUME_NONNULL_END
