//
//  CNISDKSumUpKitConfiguration.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutableSumUpKitConfiguration` represents a `CNISDKSumUpKitConfiguration` object that can be mutated.
 */
@protocol CNISDKMutableSumUpKitConfiguration
@end

/**
 *  The `CNISDKSumUpKitConfiguration` represents the local configuration of the SDK to use with.
 *  These configurations can be stored, but cannot be safely changed once the SumUpKit is initialized.
 *  Use this object to construct a configuration for the SumUpKit in your application, and pass it to the CNISDKKitBundle
 */
@interface CNISDKSumUpKitConfiguration : NSObject <CNISDKKitConfiguration>

///--------------------------------------
/// @name Configuration-specific Methods
///--------------------------------------

/**
 *  Creates a new instance of CNISDKSumUpKitConfiguration.
 *
 *  @param configurationBlock block with mutable configuration parameter which should be used to setup sdk configuration properties
 *
 *  @return newly created configuration
 */
+ (instancetype)configurationWithBlock:(void (^)(id<CNISDKMutableSumUpKitConfiguration> configuration))configurationBlock;

@end

NS_ASSUME_NONNULL_END
