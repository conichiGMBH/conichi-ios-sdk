//
//  CNISDKGeoFenceTrackin+Private.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/6/17.
//

#import "CNISDKGeoFenceTrackin.h"

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN

@interface CNISDKGeoFenceTrackin (Properties)

@property (nonatomic, copy, readwrite) NSString *status;
@property (nonatomic, assign, readwrite) CNISDKGeoFenceTrackinStatus statusEnum;
@property (nonatomic, strong, readwrite) NSDate *createdAt;
@property (nonatomic, strong, readwrite) NSDate *updatedAt;
@property (nonatomic, strong, readwrite, nullable) NSDate *closedAt;
@property (nonatomic, strong, readwrite) NSString *geofenceID;

@end

@interface CNISDKGeoFenceTrackin (Mapping) <CNISDKMapping>

+ (CNISDKObjectMapping *)objectMapping;

@end

NS_ASSUME_NONNULL_END


