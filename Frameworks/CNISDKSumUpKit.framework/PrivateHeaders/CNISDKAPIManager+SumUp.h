//
//  CNISDKAPIManager+SumUp.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 12.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpAuthorizationResponse : NSObject

@property (nonatomic, copy, readonly) NSString *customerID;
@property (nonatomic, copy, readonly) NSString *token;

- (instancetype)initWithCustomerID:(NSString *)customerID token:(NSString *)token;

@end

//********************************************************//


@interface CNISDKAPIManager (SumUp)

/**
 * Requests authorization information to talk to SumUp API
 *
 * @param completion block with two parameters
 *                   1. `CNISDKSumUpAuthorizationResponse` if request succeeded
 *                   2. `NSError` if request failed
 */
- (void)authorizeForSumUpAPI:(CNISDKIDErrorBlock)completion;

- (void)synchronizeSumUpAndConichiPaymentInstruments:(CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
