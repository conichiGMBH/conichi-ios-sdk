//
//  CNISDKSumUpPaymentInstrumentManager.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKAPIManager;
@class CNISDKSumUpPaymentInstrumentManagerUploaderFactory;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKSumUpPaymentInstrumentManager` provides an interface to conichi + SumUp payment system
 */
@interface CNISDKSumUpPaymentInstrumentManager : NSObject <CNISDKPaymentInstrumentManager>

- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager paymentInstrumentUploaderFactory:(CNISDKSumUpPaymentInstrumentManagerUploaderFactory *)paymentInstrumentUploaderFactory;

@end

NS_ASSUME_NONNULL_END
