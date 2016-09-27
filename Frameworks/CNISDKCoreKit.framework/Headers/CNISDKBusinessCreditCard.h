//
//  CNISDKBusinessCreditCard.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKCreditCard.h"

@class CNISDKBusinessAddress;

#import "CNISDKMacros.h"


#define CNISDKBusinessCreditCardKeypath(NAME) CNISDKKeypath(CNISDKBusinessCreditCard, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKBusinessCreditCard` defines entity that represents guest's business credit card
 */
@interface CNISDKBusinessCreditCard : CNISDKCreditCard

/**
 *  Billing address information connected to this credit card
 */
@property (nonatomic, strong, readonly) CNISDKBusinessAddress *address;

@end

NS_ASSUME_NONNULL_END
