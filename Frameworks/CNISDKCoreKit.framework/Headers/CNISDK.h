//
//  CNISDK.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/13/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKConfiguration;

#import "CNISDKLogger.h"
#import "CNISDKDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 The `SDK` class contains methods that handle starting of ConichiSDK.
 */
@interface CNISDK : NSObject

/**
 *  Configuration that was used to initialize sdk instance
 */
@property (nonatomic, strong, readonly) CNISDKConfiguration *configuration;

/**
 *  Object to handle sdk event callbacks
 */
@property (nonatomic, weak, nullable) id<CNISDKDelegate> delegate;

//----------General----------//

/**
 *  @warning Don't use it before startWithAPIKey:delegate call it returns nil in production and you'll get assert on debug
 */
+ (instancetype)sharedInstance;

/**
 *  This is the entry point to use conichi iOS SDK
 *  @param configuration - sdk configuration information to setup with
 *  @param delegate - optional delegate object to handle callbacks from SDK
 */
+ (instancetype)startWithConfiguration:(CNISDKConfiguration *)configuration delegate:(nullable id<CNISDKDelegate>)delegate;

/**
 *  Checks whether bluetooth is on, notifications are enabled and background location is allowed
 *  If yes it starts sdk.
 */
- (void)startMonitoring;

/**
 *  Stops sdk.
 *  @note If Guest has current beacon, trackin - delegate method conichiSDKDidLeaveBeacon will be called
 *  @note If Guest has current venue - delegate method conichiSDKDidLeaveVenue will be called
 */
- (void)stopMonitoring;


/**
 *  Checks guests status on server and starts polling for checkins if status is out of sync.
 *  In conichi Guest App should be called in application:didReceiveRemoteNotification:
 */
- (void)fetchGuestStatus;

@end

NS_ASSUME_NONNULL_END
