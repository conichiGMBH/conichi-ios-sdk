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
#import "CNISDKRemoteLogger.h"

#define CNISDKLogTrace(frmt, ...)                                                                                                                               \
    [[CNISDKRemoteLogger sharedLogger] logWithLevel:CNISDKLogLevelTrace path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__]; \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelTrace path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogInfo(frmt, ...)                                                                                                                               \
    [[CNISDKRemoteLogger sharedLogger] logWithLevel:CNISDKLogLevelInfo path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__]; \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelInfo path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogWarning(frmt, ...)                                                                                                                               \
    [[CNISDKRemoteLogger sharedLogger] logWithLevel:CNISDKLogLevelWarning path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__]; \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelWarning path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKLogError(frmt, ...)                                                                                                                               \
    [[CNISDKRemoteLogger sharedLogger] logWithLevel:CNISDKLogLevelError path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__]; \
    [[CNISDKConsoleLogger sharedLogger] logWithLevel:CNISDKLogLevelError path:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__];

#define CNISDKConfigureConcoleLog(logLevel) [[CNISDKConsoleLogger sharedLogger] setLogLevel:logLevel];
#define CNISDKConfigureRemoteLog(logLevel) [[CNISDKRemoteLogger sharedLogger] setLogLevel:logLevel];
