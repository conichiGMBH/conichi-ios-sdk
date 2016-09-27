//
//  CNISDKTrackinCloser.h
//  conichiSDK
//
//  Created by Anton Domashnev on 7/17/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;
@class CNISDKAPIManager;

#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKTrackinCloser` class contains the method that handles closing of current
 *  guest trackin if it doesnt belong to current beacon
 */
@interface CNISDKTrackinCloser : NSObject

/**
 *  Creates trackin closer instance
 *
 *  @param guest      current guest
 *  @param apiManager api manager to communicate with backend
 *
 *  @return new instance of CNISDKTrackinCloser
 */
- (instancetype)initWithCurrentGuest:(CNISDKGuest *)guest apiManager:(CNISDKAPIManager *)apiManager;

/**
 *  Perform indvidual task to close current guest trackin if it doesnt belong to current beacon
 *  
 *  @param completion - block with two parameters
 *                      1. number of closed trackins
 *                      2. error is occured
 *                      block performs on the main thread
 */
- (void)closeUnassociatedTrackinsCompletion:(nullable CNISDKIntegerErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
