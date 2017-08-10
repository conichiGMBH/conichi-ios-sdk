//
//  CNISDKSumUpAPIClient.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIRequestManager;
@class CNIAPIRequestBuilder;
@class CNISDKSumUpAPIAddPaymentInstrumentRequestInfo;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpAPIClient : NSObject

@property (nonatomic, strong, readonly) CNIAPIRequestBuilder *requestBuilder;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAPIRequestManager:(CNIAPIRequestManager *)requestManager requestBuilder:(CNIAPIRequestBuilder *)requestBuilder NS_DESIGNATED_INITIALIZER;

- (void)addPaymentInstrumentForCustomerWithID:(NSString *)customerID withInfo:(CNISDKSumUpAPIAddPaymentInstrumentRequestInfo *)requestInfo completion:(void (^__nullable)(NSString *__nullable paymentInstrumentIdenfier, NSError *__nullable error))completion;

@end

NS_ASSUME_NONNULL_END
