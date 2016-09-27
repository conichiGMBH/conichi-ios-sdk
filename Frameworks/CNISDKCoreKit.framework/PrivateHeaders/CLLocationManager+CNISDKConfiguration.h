//
//  CLLocationManager+CNISDKConfiguration.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/6/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN


@interface CLLocationManager (CNISDKConfiguration)

+ (CLLocationManager *)conichiSystemLocationManager;

@end

NS_ASSUME_NONNULL_END
