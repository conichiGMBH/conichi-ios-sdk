//
//  CNISDKGeoFencingKitConfiguration.h
//  conichiSDK
//
//  Created by Anton Domashnev on 30/03/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
@import CoreLocation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutablePaymentKitConfiguration` represents a `CNISDKGeoFencingKitConfiguration` object that can be mutated.
 */
@protocol CNISDKMutableGeoFencingKitConfiguration

/**
 *  Radius for geo fence region
 */
@property (nonatomic, assign, readwrite) CLLocationDistance geoFenceRadiusInMeters;

/**
 *  Maximum number of geo fence regions, that `CNISDKGeoFencingKit` can track
 *
 *  @note There is a minimum number of geo fence regions and it's equal 2
 */
@property (nonatomic, assign, readwrite) NSUInteger maximumNumberOfGeoFenceRegions;

@end

/**
 *  The `CNISDKGeoFencingKitConfiguration` represents the local configuration of the SDK to use with.
 *  These configurations can be stored, but cannot be safely changed once the PaymentKit is initialized.
 *  Use this object to construct a configuration for the GeoFencingKit in your application, and pass it to the CNISDKKitBundle
 */
@interface CNISDKGeoFencingKitConfiguration : NSObject <CNISDKKitConfiguration>

/**
 *  Radius for geo fence region
 *  Default is 100m
 */
@property (nonatomic, assign, readonly) CLLocationDistance geoFenceRadiusInMeters;

/**
 *  Maximum number of geo fence regions, that `CNISDKGeoFencingKit` can track
 */
@property (nonatomic, assign, readwrite) NSUInteger maximumNumberOfGeoFenceRegions;

///--------------------------------------
/// @name Configuration-specific Methods
///--------------------------------------

/**
 *  Creates a new instance of CNISDKGeoFencingKitConfiguration.
 *
 *  @param configurationBlock block with mutable configuration parameter which should be used to setup sdk configuration properties
 *
 *  @return newly created configuration
 */
+ (instancetype)configurationWithBlock:(void (^)(id<CNISDKMutableGeoFencingKitConfiguration> configuration))configurationBlock;

@end

NS_ASSUME_NONNULL_END
