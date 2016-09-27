//
//  CNISDKGuestSynchronizer.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuestStatusInfo;
@class CNISDKGuest;
@class CNISDKAPIManager;
@class CNISDK;

#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKGuestSynchronizer` synchornizes the local information about current guest status (status, current trackin, current checkin) with
 *  the remote information
 */
@interface CNISDKGuestSynchronizer : NSObject

/**
 *  Initializes a new instance of CNISDKGuestSynchronizer
 *
 *  @param sdk         sdk instance to notify delegate about changes after succeeded sync
 *  @param apiManager  CNISDKAPIManager to fetch guest status
 *
 *  @return newly created instance of CNISDKGuestSynchronizer
 */
- (instancetype)initWithSDK:(CNISDK *)sdk apiManager:(CNISDKAPIManager *)apiManager;

/**
 *  Synchronizes the local infpormation with the remote information for the given guest.
 *  It synchronizes the status itself, currentTrackin and current checkin
 *
 *  @param guest CNISDKGuest to be synchronized
 */
- (void)synchronizeGuest:(CNISDKGuest *)guest;

/**
 *  Synchronizes the local infpormation with the remote information for the given guest.
 *  It synchronizes the status itself, currentTrackin and current checkin
 *
 *  @param completion block with two parameters:
 *                    1. CNISDKGuestStatusInfo is exists
 *                    2. NSError object if exists
 *  @param guest      CNISDKGuest to be synchronized
 */
- (void)synchronizeGuest:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
