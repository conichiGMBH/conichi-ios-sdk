//
//  CNISDKPaymentKitConfiguration.h
//  conichiSDK
//
//  Created by Anton Domashnev on 21/03/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutablePaymentKitConfiguration` represents a `CNISDKPaymentKitConfiguration` object that can be mutated.
 */
@protocol CNISDKMutablePaymentKitConfiguration

/**
 *  Underlying payment provider payment key
 */
@property (nonatomic, copy, readwrite) NSString *paymentKey;

@end

/**
 *  The `CNISDKPaymentKitConfiguration` represents the local configuration of the SDK to use with.
 *  These configurations can be stored, but cannot be safely changed once the PaymentKit is initialized.
 *  Use this object to construct a configuration for the PaymentKit in your application, and pass it to the CNISDKKitBundle
 */
@interface CNISDKPaymentKitConfiguration : NSObject <CNISDKKitConfiguration>

/**
 *  Underlying payment provider payment key
 */
@property (nonatomic, copy, readonly) NSString *paymentKey;

///--------------------------------------
/// @name Configuration-specific Methods
///--------------------------------------

/**
 *  Creates a new instance of CNISDKPaymentKitConfiguration.
 *
 *  @param configurationBlock block with mutable configuration parameter which should be used to setup sdk configuration properties
 *
 *  @return newly created configuration
 */
+ (instancetype)configurationWithBlock:(void (^)(id<CNISDKMutablePaymentKitConfiguration> configuration))configurationBlock;

@end

NS_ASSUME_NONNULL_END
