//
//  CNISDKConfiguration.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/15/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKEnums.h"
#import "CNISDKKit.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutableConfiguration` represents a `CNISDKConfiguration` object that can be mutated.
 */
@protocol CNISDKMutableConfiguration <NSObject, NSCopying>

/**
 *  key associated with current application
 */
@property (nonatomic, copy, readwrite) NSString *apiKey;

/**
 *  secret key associated with current application
 */
@property (nonatomic, copy, readwrite) NSString *apiSecret;

/**
 *  sdk environment
 *
 *  @see CNISDKEnvironment
 */
@property (nonatomic, assign, readwrite) CNISDKEnvironment environment;

/**
 *  Sets the level of logging to display.
 *  @discussion By default: - set to <CNISDKLogLevelWarning>
 *
 *  Possible values can be found in CNISDKEnums
 */
@property (nonatomic, assign, readwrite) CNISDKLogLevel logLevel;

/**
 *  enabled kits for the sdk. It contains the array of CNISDKKitBundle objects
 *
 *  @see CNISDKKit
 */
@property (nonatomic, strong, readwrite, nullable) NSArray<CNISDKKitBundle *> *kits;

@end

/**
 *  The `CNISDKConfiguration` represents the local configuration of the SDK to use with.
 *  These configurations can be stored, but cannot be safely changed once the SDK is initialized.
 *  Use this object to construct a configuration for the SDK in your application, and pass it to
 *  `CNISDK.+initializeWithConfiguration:`.
 */
@interface CNISDKConfiguration : NSObject <NSCopying>

/**
 *  key associated with current application
 */
@property (nonatomic, copy, readonly) NSString *apiKey;

/**
 *  secret key associated with current application
 */
@property (nonatomic, copy, readonly) NSString *apiSecret;

/**
 *  sdk environment
 *
 *  @see CNISDKEnvironment
 */
@property (nonatomic, assign, readonly) CNISDKEnvironment environment;

/**
 *  enabled kits for the sdk
 *
 *  @discussion By default: - set to the empty array
 *
 *  @see CNISDKKit
 */
@property (nonatomic, strong, readonly, nullable) NSArray<CNISDKKitBundle *> *kits;

/**
 *  Sets the level of logging to display.
 *  @discussion By default: - set to <CNISDKLogLevelWarning>
 *
 *  Possible values can be found in CNISDKEnums
 */
@property (nonatomic, assign, readonly) CNISDKLogLevel logLevel;

///--------------------------------------
/// @name Configuration-specific Methods
///--------------------------------------

/**
 *  Creates a new instance of CNISDKConfiguration.
 *
 *  @param configurationBlock block with mutable configuration parameter which should be used to setup sdk configuration properties
 *
 *  @return newly created configuration
 */
+ (instancetype)configurationWithBlock:(void (^)(id<CNISDKMutableConfiguration> configuration))configurationBlock;

@end

NS_ASSUME_NONNULL_END
