//
//  CLLocationManager+CNISDKBackgroundMode.h
//  CNISDKCoreKit
//
//  Created by Anton Domashnev on 07/03/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import CoreLocation;


NS_ASSUME_NONNULL_BEGIN


@interface CLLocationManager (CNISDKBackgroundMode)

/**
 * Sets original `allowsBackgroundLocationUpdates` flag safely
 * It performs two checks under the hood:
 * 1. If the system supports this flag
 * 2. If the system has background permissions
 *
 * @param allows the flag value
 * 
 * @see `CLLocationManager.allowsBackgroundLocationUpdates`
 *      Original credits to http://stackoverflow.com/a/33277067/2487302
 */
- (void)setAllowsBackgroundLocationUpdatesSafely:(BOOL)allows;

@end

NS_ASSUME_NONNULL_END
