//
//  CNISDKPaylevenKitConfiguration.h
//  conichiSDK
//
//  Created by Anton Domashnev on 21/03/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutablePaylevenKitConfiguration` represents a `CNISDKPaylevenKitConfiguration` object that can be mutated.
 */
@protocol CNISDKMutablePaylevenKitConfiguration

/**
 *  Underlying payment provider payment key
 */
@property (nonatomic, copy, readwrite) NSString *paymentKey;

@end

/**
 *  The `CNISDKPaylevenKitConfiguration` represents the local configuration of the SDK to use with.
 *  These configurations can be stored, but cannot be safely changed once the PaylevenKit is initialized.
 *  Use this object to construct a configuration for the PaylevenKit in your application, and pass it to the CNISDKKitBundle
 */
@interface CNISDKPaylevenKitConfiguration : NSObject <CNISDKKitConfiguration>

/**
 *  Underlying payment provider payment key
 */
@property (nonatomic, copy, readonly) NSString *paymentKey;

///--------------------------------------
/// @name Configuration-specific Methods
///--------------------------------------

/**
 *  Creates a new instance of CNISDKPaylevenKitConfiguration.
 *
 *  @param configurationBlock block with mutable configuration parameter which should be used to setup sdk configuration properties
 *
 *  @return newly created configuration
 */
+ (instancetype)configurationWithBlock:(void (^)(id<CNISDKMutablePaylevenKitConfiguration> configuration))configurationBlock;

@end

NS_ASSUME_NONNULL_END
