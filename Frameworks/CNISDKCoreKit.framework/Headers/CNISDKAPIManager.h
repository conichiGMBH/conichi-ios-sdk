//
//  CNISDKAPIManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKConstants.h"
#import "CNISDKMacros.h"
#import "CNISDKEnums.h"

@class CNISDKBeacon;
@class CNISDKVenue;
@class CNISDKTrackin;
@class CNISDKCheckin;
@class CNISDKDiskStorageManager;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKAPIManager` class contains methods that handle general network requests,
 *  methods that handle requests for concrete entities are located in categories
 */
@interface CNISDKAPIManager : NSObject

/**
 *  Api manager singleton
 *
 *  @return created instance of 
 */
+ (instancetype)manager;

/**
 *  Current SDK API version
 *
 *  @return api version number
 */
+ (NSNumber *)APIVersion;

/**
 *  Fetches Conichi's API info and compare current CNISDKAPIManager API version and the backend API version
 *  If the backend API version is higher than the current it notifies SDK delegate via conichiSDKDidFindNewAPIVersion
 *  @see CNISDKDelegate
 *  @param completion - callback block with three parameters
 *                      2. Success flag - whether request succeeded or not
 *                      3. NSError object if request failed
 *
 */
- (void)checkAPIVersionCompletion:(CNISDKBooleanErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
