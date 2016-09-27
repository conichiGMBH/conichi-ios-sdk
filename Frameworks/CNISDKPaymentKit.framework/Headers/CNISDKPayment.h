//
//  CNISDKPayment.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/15/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKConfiguration;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKPayment' extends the sdk with the payment functionality
 */
@interface CNISDKPayment : NSObject <CNISDKKit>

/**
 *  Configuration that was used to initialize kit instance
 */
@property (nonatomic, strong, readonly) CNISDKConfiguration *configuration;

@end

NS_ASSUME_NONNULL_END
