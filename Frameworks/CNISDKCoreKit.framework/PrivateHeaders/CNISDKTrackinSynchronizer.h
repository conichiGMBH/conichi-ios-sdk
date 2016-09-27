//
//  CNISDKTrackinSynchronizer.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/23/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKTrackin;
@class CNISDKAPIManager;
@class CNISDK;
@class CNISDKGuest;

#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKTrackinSynchronizer` controls the current trackin property of the given guest and notifies the sdk delegate about changes
 */
@interface CNISDKTrackinSynchronizer : NSObject

/**
 *  Initializes the new instance of CNISDKTrackinSynchronizer
 *
 *  @param sdk sdk to call delegate about any events
 *  @param apiManager  api manager to close remote trackin
 *
 *  @return newly created CNISDKTrackinSynchronizer instance
 */
- (instancetype)initWithSDK:(CNISDK *)sdk apiManager:(CNISDKAPIManager *)apiManager;

/**
 * Synchronizes current trackin for the given guest
 * Currently it works like a guard. If sdk has open trackin and remote does not have - it sets local trackin to nil and sends message to sdk
 * delegate. If sdk does not have open trackin and remote has - it closes the remote trackin with api manager
 *
 * @param completion compeltion block, fires when the syncing is done
 * @param guest      for which guest update current trackin
 */
- (void)synchronizeCurrentTrackinForGuest:(CNISDKGuest *)guest withRemoteTrackin:(nullable CNISDKTrackin *)remoteTrackin completion:(nullable CNISDKEmptyBlock)completion;

@end

NS_ASSUME_NONNULL_END
