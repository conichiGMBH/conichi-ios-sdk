//
//  NSUserDefaults+CNISDKLifeCycle.h
//  CNISDKCoreKit
//
//  Created by Anton Domashnev on 14/12/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSUserDefaults (CNISDKLifeCycle)

/**
 * @return a boolean flag whether the sdk was initialized before in the app lifetime on the phone or not.
 */
- (BOOL)cnisdk_isSDKRunBefore;

/**
 * Saves the information that the sdk runs for the first time in the app lifetime on the phone.
 */
- (void)cnisdk_saveFirstRun;

@end

NS_ASSUME_NONNULL_END
