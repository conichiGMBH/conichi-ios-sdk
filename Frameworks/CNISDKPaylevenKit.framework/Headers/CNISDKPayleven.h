//
//  CNISDKPayment.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/15/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKConfiguration;
@protocol CNISDKPaymentInstrumentsSynchronizer;
@protocol CNISDKPaymentInstrumentManager;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKPayleven' extends the sdk with the payment functionality using payleven system
 */
@interface CNISDKPayleven : NSObject <CNISDKKit>

/**
 *  The manager that deals with synchronization between payleven and conichi data store
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
