//
//  CNISDKSumUpPaymentInstrumentManagerUploader.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 12.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;
@class CNISDKAPIManager;
@class CNISDKSumUpAPIClientFactory;

#import <CNISDKPaymentKit/CNISDKPaymentKit.h>


NS_ASSUME_NONNULL_BEGIN


/*
 * Class `CNISDKSumUpPaymentInstrumentManagerUploader` is responsible for uploading payment instrument to SumUp
 * Under the hood it manages the error handling and retry if needed.
 */
@interface CNISDKSumUpPaymentInstrumentManagerUploader : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager sumUpAPIClientFactory:(CNISDKSumUpAPIClientFactory *)sumUpAPIClientFactory userDefaults:(NSUserDefaults *)userDefaults NS_DESIGNATED_INITIALIZER;

- (void)addPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)address forGuest:(CNISDKGuest *)guest completion:(CNISDKGuestCreditCardErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
