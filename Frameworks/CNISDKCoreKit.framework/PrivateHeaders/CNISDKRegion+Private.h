//
//  CNISDKRegion+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/18/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKRegion.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKRegion (Properties)

@property (nonatomic, strong, readwrite) NSString *venueConichiID;
@property (nonatomic, strong, readwrite) NSString *name;
@property (nonatomic, strong, readwrite) NSArray *beacons;

@end


@interface CNISDKRegion (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
