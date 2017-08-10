//
//  CNISDKPaylevenManager+Synchronization.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/6/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

@protocol CNISDKPaymentInstrumentsSynchronizer;

@class CNISDKGuest;
@class PLVInAppClient;
@class CNISDKAPIManager;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


@interface CNISDKPaylevenPaymentInstrumentsSynchronizer : NSObject <CNISDKPaymentInstrumentsSynchronizer>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager paylevenClient:(PLVInAppClient *)paylevenClient NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(apiManager:paylevenClient:));

@end
