//
//  CNISDKAddPaylevenCreditCardRequestInfo.h
//  CNISDKPaylevenKit
//
//  Created by Anton Domashnev on 13.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import <CNISDKPaymentKit/CNISDKAddCreditCardRequestInfo.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAddPaylevenCreditCardRequestInfo : CNISDKAddCreditCardRequestInfo

@property (nonatomic, copy) NSString *paylevenToken;

- (instancetype)initWithPaymentInstrument:(CNISDKPaymentInstrument *)paymentInstrument billingAddress:(CNISDKPaymentBillingAddress *)billingAddress paylevenToken:(NSString *)paylevenToken;

@end

NS_ASSUME_NONNULL_END
