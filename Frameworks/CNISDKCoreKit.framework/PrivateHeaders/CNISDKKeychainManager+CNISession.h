//
//  CNISDKKeychainManager+CNISession.h
//  conichiSDK
//
//  Created by Anton Domashnev on 13/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKKeychainManager.h"

@class CNISession;


NS_ASSUME_NONNULL_BEGIN

/**
 The `CNISDKKeychainManager+CNISession` category contains methods to save load session
 */
@interface CNISDKKeychainManager (CNISession)

/**
 *  Loads last stored session
 *
 *  @return `CNISession` instance
 */
+ (nullable CNISession *)loadLastStoredSession;

/**
 *  Stores session in keychain. It overrides the previous saved session
 *
 *  @param session `CNISession` object to be saved
 */
+ (void)saveSession:(CNISession *)session;

/**
 *  Removes last saved previous session's parameters
 */
+ (void)removeLastStoredSession;

@end

NS_ASSUME_NONNULL_END
