//
//  CNISDKGeoFencing.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKConfiguration;

#import "CNISDKGeoFencingVenuesDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKPayment' extends the sdk with the geofencing functionality
 */
@interface CNISDKGeoFencing : NSObject <CNISDKKit>

/**
 *  Configuration that was used to initialize kit instance
 */
@property (nonatomic, strong, readonly) CNISDKConfiguration *configuration;

@property (nonatomic, weak) id<CNISDKGeoFencingVenuesDelegate> delegate;

/**
 *  Resets current geo fencing regions and creates a new one
 */
- (void)updateGeoFencingStatus;

@end

NS_ASSUME_NONNULL_END

