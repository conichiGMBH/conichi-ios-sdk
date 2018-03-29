//
//  CNISDKSumUpAPIBaseURLFactory.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 09.08.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKSumUpAPIBaseURLFactory : NSObject

- (NSURL *)baseURLForEnvironment:(CNISDKEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
