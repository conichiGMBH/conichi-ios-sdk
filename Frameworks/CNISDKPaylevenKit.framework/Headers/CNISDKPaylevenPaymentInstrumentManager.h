//
//  CNISDKPaylevenPaymentInstrumentManager.h
//  CNISDKPaylevenKit
//
//  Created by Anton Domashnev on 8/4/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKAPIManager;
@class PLVInAppClient;
@class CNISDKReachability;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKPaymentManager` provides an interface to conichi + payleven payment system
 */
@interface CNISDKPaylevenPaymentInstrumentManager : NSObject <CNISDKPaymentInstrumentManager>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager paylevenClient:(PLVInAppClient *)paymentClient reachability:(CNISDKReachability *)reachability NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(apiManager:paylevenClient:reachability:));

@end

NS_ASSUME_NONNULL_END
