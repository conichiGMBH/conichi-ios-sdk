//
//  CNISDKPaymentInstrumentsSynchronizer.h
//  CNISDKPaymentKit
//
//  Created by Anton Domashnev on 07.07.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 * Describes the object that can perform synchronization of guest's
 * payment instruments between payment provider and conichi
 */
@protocol CNISDKPaymentInstrumentsSynchronizer <NSObject>

/**
 * Performs synchronization between payment provider and conichi's backend
 * Removes all not existed on conichi's backend credit cards from payment provider
 *
 * @param guest - for which guest it should perform synchronization
 */
- (void)synchronizePaymentInstrumentsForGuest:(CNISDKGuest *)guest;

/**
 * Performs synchronization between payment provider and conichi's backend
 * Removes all not existed on conichi's backend credit cards from payment provider
 *
 * @param guest - for which guest it should perform synchronization
 * @param completion - callback about synchronization results
 */
- (void)synchronizePaymentInstrumentsForGuest:(CNISDKGuest *)guest completion:(nullable CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
