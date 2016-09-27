//
//  CNISDKLogger.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKEnums.h"

NS_ASSUME_NONNULL_BEGIN

static const char *const CNISDKLogLevelName[] = {
    "",
    "ERROR",
    "WARNING",
    "INFO",
    "TRACE"};

/*!
 * The `CNISDKLogger` protocol contains methods that each logger must implement
 */
@protocol CNISDKLogger <NSObject>

+ (instancetype)sharedLogger;

- (void)setLogLevel:(CNISDKLogLevel)logLevel;
- (CNISDKLogLevel)logLevel;

- (void)logWithLevel:(NSUInteger)level
                path:(const char *)file
                line:(uint32_t)line
            function:(const char *)function
              format:(NSString *)format, ... NS_FORMAT_FUNCTION(5, 6);

@end

NS_ASSUME_NONNULL_END
