//
//  CNISDKSumUpAPIErrorFactory.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

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

extern NSErrorDomain const CNISDKSumUpAPIErrorDomain;


@interface CNISDKSumUpAPIErrorFactory : NSObject

+ (NSError *)createSumUpAPIErrorWithResponseJSON:(nullable NSDictionary *)responseJSON responseError:(NSError *)responseError;

@end

NS_ASSUME_NONNULL_END
