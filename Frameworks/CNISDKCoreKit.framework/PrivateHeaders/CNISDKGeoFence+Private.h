//
//  CNISDKGeoFence+Private.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/3/17.
//

#import <CNISDKCoreKit/CNISDKGeoFence.h>

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNISDKGeoFence (Properties)

@property (nonatomic, copy, readwrite) NSString *name;
@property (nonatomic, strong, readwrite) NSNumber *latitude;
@property (nonatomic, strong, readwrite) NSNumber *longitude;
@property (nonatomic, strong, readwrite) NSNumber *radius;

@end

@interface CNISDKGeoFence (LocalCacheArchive)

+ (nullable CNISDKGeoFence *)archivedGeoFenceWithName:(NSString *)name;

@end

@interface CNISDKGeoFence (Mapping) <CNISDKMapping>

+ (CNISDKObjectMapping *)objectMapping;

@end

NS_ASSUME_NONNULL_END

