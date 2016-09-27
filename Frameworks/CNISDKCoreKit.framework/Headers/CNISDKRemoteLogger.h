//
//  CNISDKRemoteLogger.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/16/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKLogger.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const CNISDKRemoteLoggerURLString;

/*!
 * The `CNISDKRemoteLogger` class contains methods that handle remote logging
 * Usage:
 * CNISDKConfigureRemoveLog(logLevel);
 * CNISDKLogTrace(frmt, ...);
 */
@interface CNISDKRemoteLogger : NSObject <CNISDKLogger>

/**
 * Associates each log message with current guest's conichi id
 */
@property (nonatomic, strong, nullable) NSString *currentGuestConichiID;

/**
 *  Initialize CNISDKRemoteLogger with specific session to send requests
 *
 *  @param session NSURLSession to send request with log information
 *
 *  @return newly created instance of the CNISDKRemoteLogger
 */
- (instancetype)initWithSession:(NSURLSession *)session;

@end

NS_ASSUME_NONNULL_END
