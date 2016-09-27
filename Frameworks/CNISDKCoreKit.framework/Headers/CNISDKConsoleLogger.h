//
//  CNISDKConsoleLogger.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/16/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKLogger.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 * The `CNISDKConsoleLogger` class contains methods that handle logging
 * Usage:
 * CNISDKConfigureConsoleLog(logLevel);
 * CNISDKLogTrace(frmt, ...);
 */
@interface CNISDKConsoleLogger : NSObject <CNISDKLogger>

@end

NS_ASSUME_NONNULL_END
