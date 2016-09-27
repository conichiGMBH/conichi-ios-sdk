//
//  CNISDKAPIManager+Trackins.h
//  conichiSDK
//
//  Created by Anton Domashnev on 7/17/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKGuest;
@class CNISDKRegion;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIManager (Trackins)

/**
 * Fetch all trackins for the given guest
 * @param guest - guest for which we want to fetch trackins
 * @param completion - callback block with two parameters
 *                     1. Array of CNISDKTrackin objects
 *                     2. NSError object if request failed               
 */
- (void)fetchGuestTrackins:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Notify backend that the Guest enters into the conichi's region
 * Backend creates trackin object
 * @warning do not call this method in incognito mode otherwise in debug you'll get and Assert
 * @warning User has to be authorized to make this request
 * @param regionID - discovered region id
 * @param completion - callback block with three parameters
 *                     1. CNISDKTrackin object
 *                     2. Success flag - whether request succeeded or not
 *                     3. NSError object if request failed
 */
- (void)startTrackingGuestInRegionWithID:(NSString *)regionID completion:(nullable CNISDKIDErrorBlock)completion;

/**
 * Notify backend that the Guest leaves the conichi's region
 * Backend closed trackin object
 * @warning do not call this method in incognito mode otherwise in debug you'll get and Assert
 * @warning User has to be authorized to make this request
 * @param completion - callback block with three parameters
 *                     1. Closed trackin object
 *                     2. Success flag - whether request succeeded or not
 *                     3. NSError object if request failed
 */
- (void)stopTracking:(CNISDKTrackin *)trackin completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
