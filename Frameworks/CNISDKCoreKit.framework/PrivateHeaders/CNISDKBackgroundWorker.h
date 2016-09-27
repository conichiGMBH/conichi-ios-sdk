//
//  CNISDKBackgroundWorker.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/27/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;
@import UIKit;

#import "CNISDKMacros.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKBackgroundWorker : NSObject

/**
 * If application in UIApplicationStateBackground it starts background task
 * Otherwise it simple call perform block with UIBackgroundTaskInvalid parameter
 * @param actionBlock - block to be performed even in background
 * @param actionName - used as a backgroundTask identifier and for logs
 */
- (void)performInAnyApplicationStateBlock:(BOOL (^)(UIBackgroundTaskIdentifier backgroundTaskID))actionBlock withName:(NSString *)actionName;

@end

NS_ASSUME_NONNULL_END
