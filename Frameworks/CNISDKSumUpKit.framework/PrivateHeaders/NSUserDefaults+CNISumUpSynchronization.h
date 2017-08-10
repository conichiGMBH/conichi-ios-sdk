//
//  NSUserDefaults+CNISumUpSynchronization.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 14.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSUserDefaults (CNISumUpSynchronization)

- (void)cniSumUp_setShouldPerformPaymentInstrumentsSynchronization:(BOOL)flag;
- (BOOL)cniSumUp_shouldPerformPaymentInstrumentsSynchronization;

@end

NS_ASSUME_NONNULL_END
