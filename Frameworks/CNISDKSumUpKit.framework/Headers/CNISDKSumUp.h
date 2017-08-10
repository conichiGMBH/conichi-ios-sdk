//
//  CNISDKSumUp.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKConfiguration;
@protocol CNISDKPaymentInstrumentsSynchronizer;
@protocol CNISDKPaymentInstrumentManager;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKSumUp' implements the payment functionality using SumUp system
 */
@interface CNISDKSumUp : NSObject <CNISDKKit>

/**
 *  The manager that deals with synchronization between SumUp and conichi data store
 */
@property (nonatomic, strong, readonly) id<CNISDKPaymentInstrumentsSynchronizer> paymentInstrumentsSynchronizer;

/**
 *  The manager that deals with all actions on `CNISDKPaymentInstrument` and guest's credit cards
 */
@property (nonatomic, strong, readonly) id<CNISDKPaymentInstrumentManager> paymentInstrumentManager;

/**
 *  Configuration that was used to initialize kit instance
 */
@property (nonatomic, strong, readonly) CNISDKConfiguration *configuration;

@end

NS_ASSUME_NONNULL_END
