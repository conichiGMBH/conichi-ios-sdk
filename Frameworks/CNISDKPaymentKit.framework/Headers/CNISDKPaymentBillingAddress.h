//
//  CNISDKPaymentBillingAddress.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/4/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPaymentBillingAddress` class represents a billing address for the creating payment instrument (@see `CNISDKPaymentInstrument`).
 *  This class is used only to create payment instrument or to update payment instrument (@see `CNISDKPaymentManager`)
 */
@interface CNISDKPaymentBillingAddress : NSObject

/**
 *  The street of the payment billing address
 */
@property (nonatomic, copy) NSString *street;

/**
 *  The city of the payment billing address
 */
@property (nonatomic, copy) NSString *city;

/**
 *  The country code of the payment billing address in format ISO 3166-1
 *
 *  @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, copy) NSString *countryCode;

/**
 *  The zip of the payment billing address
 */
@property (nonatomic, copy) NSString *zip;

/**
 *  The business name of the payment billing address if it represents business address
 */
@property (nonatomic, copy, nullable) NSString *businessName;

@end

NS_ASSUME_NONNULL_END
