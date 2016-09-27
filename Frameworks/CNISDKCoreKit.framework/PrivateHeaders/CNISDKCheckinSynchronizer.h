//
//  CNISDKCheckinSynchronizer.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/17/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;
@class CNISDKAPIManager;
@class CNISDK;
@class CNISDKCheckin;

#import <CNISDKCoreKit/CNISDKConstants.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKCheckinSynchronizer` controls the current checkin property of the given guest and notifies the sdk delegate about changes
 */
@interface CNISDKCheckinSynchronizer : NSObject

/**
 *  Initializes the new instance of CNISDKCheckinSynchronizer
 *
 *  @param sdk        sdk instance to notify delegate about current checkin changes
 *  @param apiManager apiManager instance to send the requests
 *
 *  @return newly created CNISDKCheckinSynchronizer instance
 */
- (instancetype)initWithSDK:(CNISDK *)sdk apiManager:(CNISDKAPIManager *)apiManager;

/**
 * Synchronizes current checkin for the given guest
 * It can set current checkin if receives open checkin for the given guest or closes current one if it receives status closed for it
 *
 * @param guest      for which guest update current checkin
 * @param completion completion block with error parameter, if not nil the syncing of checkins has failed
 */
- (void)synchronizeCurrentCheckinForGuest:(CNISDKGuest *)guest withRemoteCheckin:(nullable CNISDKCheckin *)remoteCheckin completion:(nullable CNISDKErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
