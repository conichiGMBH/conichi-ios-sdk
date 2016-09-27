//
//  CNISDKPaymentManager+Synchronization.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/6/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKPaymentManager.h"

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPaymentManager (Synchronization)

/**
 * Performs synchronization between payment provider and conichi's backend
 * Removes all not existed on conichi's backend credit cards from payment provider
 */
- (void)synchronizePaymentInstrumentsForGuest:(CNISDKGuest *)guest;

@end

NS_ASSUME_NONNULL_END
