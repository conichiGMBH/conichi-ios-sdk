//
//  CNISDKSessionSetuper.h
//  CNISDKCoreKit
//
//  Created by Anton Domashnev on 13/12/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 The `CNISDKSessionSetuper` responsible for `CNISession` set up on SDK initialization.
 This is supposed to be used only internally by `CNISDK` instance
 */
@interface CNISDKSessionSetuper : NSObject

/**
 Creates a new instance of `CNISDKSessionSetuper`

 @param isFirstSDKRun if it's the first run of the SDK on that device. For example the app with SDK
                      is installed for the first time or was removed and now installed again
 @return newly created `CNISDKSessionSetuper` instance
 */
- (instancetype)initForTheFirstRun:(BOOL)isFirstSDKRun;

/**
 Set up the `CNISession` so the SDK is ready to talk to the API
 
 @param apiKey    initialized API KEY from SDK configuration
 @param apiSecret initialized API SECRET from SDK configuration
 */
- (void)setUpWithConfigurationAPIKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

@end

NS_ASSUME_NONNULL_END
