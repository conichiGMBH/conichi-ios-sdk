//
//  CNISDKSumUpPaymentInstrumentsSynchronizer.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 17.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKAPIManager;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpPaymentInstrumentsSynchronizer : NSObject <CNISDKPaymentInstrumentsSynchronizer>

- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager;

@end

NS_ASSUME_NONNULL_END
