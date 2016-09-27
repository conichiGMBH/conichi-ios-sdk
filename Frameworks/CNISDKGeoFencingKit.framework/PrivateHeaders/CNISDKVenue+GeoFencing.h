//
//  CNISDKVenue+GeoFencing.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKVenue+GeoFencing' category extends the CNISDKVenue class for GeoFencing kit
 */
@interface CNISDKVenue (GeoFencing)

/**
 *  Returns the flag is venue can be geo fence region or not.
 *
 *  @return boolean flag
 */
- (BOOL)isGeoFencible;

@end

NS_ASSUME_NONNULL_END
