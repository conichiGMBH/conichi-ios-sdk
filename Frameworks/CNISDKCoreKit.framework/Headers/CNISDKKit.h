//
//  CNISDKKit.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/18/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKConfiguration;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKKit` protocol defines the kit that can be attached to the sdk to add new functionality
 */
@protocol CNISDKKit <NSObject>

/**
 *  Enables and configures kit
 *
 *  @param configuration current sdk configuration
 */
+ (void)enableWithConfiguration:(CNISDKConfiguration *)configuration;

/**
 *
 *  Shared instance of the kit
 *
 *  @warning Don't use it before enable call otherwise it returns nil in production and you'll get assert on debug
 */
+ (instancetype)sharedInstance;

/**
 *  Starts kit underlying services and tasks
 */
- (void)start;

@end

//***********************************************//

/**
 *  The `CNISDKKitConfiguration` protocol defines the kit configuration that can be used to configure the kit
 *  This protocol is simply used to add least type safety
 */
@protocol CNISDKKitConfiguration <NSObject, NSCopying>
@end

//***********************************************//

/**
 *  The `CNISDKKitBundle` represents the kit initialization information
 */
@interface CNISDKKitBundle : NSObject <NSCopying>

/**
 *  Kit class
 */
@property (nonatomic, strong, readonly) Class<CNISDKKit> kit;

/**
 *  Optional configuration for the kit
 */
@property (nonatomic, strong, nullable, readonly) id<CNISDKKitConfiguration> configuration;

/**
 *  Initializes the kit bundle to use it in CNISDKConfiguration
 *
 *  @param kit           kit class
 *  @param configuration optional configuration
 *
 *  @return newly created kit bundle
 */
+ (instancetype)bundleWithKit:(Class<CNISDKKit>)kit configuration:(nullable id<CNISDKKitConfiguration>)configuration;

@end

NS_ASSUME_NONNULL_END
