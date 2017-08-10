//
//  CNISDKPaylevenPaymentInstrumentFinder.h
//  CNISDKPaymentKit
//
//  Created by Anton Domashnev on 27/10/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class PLVCreditCardPaymentInstrument;
@class CNISDKPaymentInstrument;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPaylevenPaymentInstrumentFinder : NSObject

+ (nullable PLVCreditCardPaymentInstrument *)findPaylevenPaymentInstrumentIn:(NSArray<PLVCreditCardPaymentInstrument *> *)paylevenInstruments matchesLastFourDigits:(NSString *)lastFourDigits andBrand:(NSString *)brand;

+ (nullable PLVCreditCardPaymentInstrument *)findPaylevenPaymentInstrumentIn:(NSArray<PLVCreditCardPaymentInstrument *> *)paylevenInstruments matchesConichiPaymentInstrument:(CNISDKPaymentInstrument *)conichiInstrument;

@end

NS_ASSUME_NONNULL_END
