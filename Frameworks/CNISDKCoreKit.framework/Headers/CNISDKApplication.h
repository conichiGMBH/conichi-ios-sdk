//
//  CNISDKApplication.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKAddress` defines the class that encapsulates system UIApplication class
 */
@interface CNISDKApplication : NSObject

/**
 *  Underlined system application instance
 *
 *  Can be nil if initialized in extension environment
 */
@property (nonatomic, strong, readonly, nullable) UIApplication *systemApplication;

/**
 *  Current CNISDKApplication instance
 *
 *  @return application instance
 */
+ (instancetype)sharedApplication;

/**
 *  Registers the device for remote notifications using the system application instance
 */
- (void)registerForRemoteNotifications;

@end

NS_ASSUME_NONNULL_END
