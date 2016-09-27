//
//  CNISDKLocationManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 5/21/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CLLocationManager;

#import <CNISDKCoreKit/CNISDKConstants.h>

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKLocationManager : NSObject

/**
 * Initializes location manager with specific instance on core location manager
 * @param manager - core location manager
 * @return newly created CNISDKLocationManager 
 */
- (instancetype)initWithCoreLocationManager:(CLLocationManager *)manager NS_DESIGNATED_INITIALIZER;

/**
 * Requests location from CoreLocation and returns current one or error via completion
 * @param completion - Block with two parameters
 *                     1. CLLocation object if exists
 *                     2. NSError object if update location failed
 *                     Always called on main thread
 */
- (void)fetchCurrentLocation:(CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
