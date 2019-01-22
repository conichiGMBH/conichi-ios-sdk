//
//  CNISDKLogging.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKLogger.h"
#import "CNISDKConsoleLogger.h"

#define CNISDKLogTrace(frmt, ...) \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelTrace path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogInfo(frmt, ...) \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelInfo path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogWarning(frmt, ...) \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelWarning path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogError(frmt, ...) \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelError path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKConfigureConcoleLog(logLevel) [[CNISDKConsoleLogger sharedLogger] setLogLevel:logLevel];
