//
//  CNISDKSumUpAPIClientFactory.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 11.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNISDKSumUpAPIClient;
@class CNISDKSumUpAPIBaseURLFactory;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpAPIClientFactory : NSObject


/**
 * Initializer with default parameters
 * Use environment from `[CNISDKCoreKit sharedInstance].configuration.environment`
 *
 * @return newly created instance of `CNISDKSumUpAPIClientFactory`
 */
- (instancetype)init;
- (instancetype)initWithSDKEnvironment:(CNISDKEnvironment)environment sumUpAPIBaseURLFactory:(CNISDKSumUpAPIBaseURLFactory *)sumUpAPIBaseURLFactory NS_DESIGNATED_INITIALIZER;

- (CNISDKSumUpAPIClient *)createSumUpAPIClientWithToken:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
