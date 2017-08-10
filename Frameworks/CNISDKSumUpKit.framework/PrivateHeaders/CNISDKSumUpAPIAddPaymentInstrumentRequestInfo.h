//
//  CNISDKSumUpAPIAddPaymentInstrumentRequestInfo.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpAPIAddPaymentInstrumentRequestInfo : NSObject <CNISDKRequestInfo>

/**
 * Payment instrument's cardholder
 */
@property (nonatomic, copy) NSString *cardholder;

/**
 * Payment instrument's pan without any format
 * e.x. 4242424242424242
 */
@property (nonatomic, copy) NSString *pan;

/**
 * Payment instrument's expiry month in MM format
 * e.x. 01 or 12
 */
@property (nonatomic, copy) NSString *expiryMonth;

/**
 * Payment instrument's expiry year in YY format
 * e.x. 20 (if 2020 year) or 43 (if 2043 year)
 */
@property (nonatomic, copy) NSString *expiryYear;

/**
 * Payment instrument's cvv
 * e.x. 123 or 1234
 */
@property (nonatomic, copy) NSString *cvv;

@end

NS_ASSUME_NONNULL_END
