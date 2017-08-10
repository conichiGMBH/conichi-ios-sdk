//
//  CNISDKSumUpAPIErrorCodes.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

/**
 * @see http://docs.sumup.com/rest-api/checkouts-api/#customers-payment-instruments-post
 */
typedef NS_ENUM(NSInteger, CNISDKSumUpAPIErrorCode) {
    CNISDKSumUpAPIErrorCodeUnknown,
    CNISDKSumUpAPIErrorCodeMaxInstrumentCount,
    CNISDKSumUpAPIErrorCodePaymentInstrumentValidation,
    CNISDKSumUpAPIErrorCodeProcessingError,
    CNISDKSumUpAPIErrorCodeCustomerNotFound
};
