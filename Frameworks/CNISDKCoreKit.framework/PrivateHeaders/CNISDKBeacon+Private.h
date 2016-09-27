//
//  CNISDKBeacon+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/13/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKBeacon.h"
#import "CNISDKMapping.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKBeacon (Properties)

@property (nonatomic, strong, readwrite) NSNumber *minor;
@property (nonatomic, strong, readwrite) NSNumber *major;
@property (nonatomic, strong, readwrite, nullable) NSString *welcomeMessage;
@property (nonatomic, strong, readwrite, nullable) NSString *farewellMessage;
@property (nonatomic, strong, readwrite) NSString *regionConichiID;

@end


@interface CNISDKBeacon (Mapping) <CNISDKMapping>

@end


@interface CNISDKBeacon (Private)

///--------------------------------------
/// @name Beacon-specific Methods
///--------------------------------------

/**
 * Constructor of CNISDKBeacon object
 * @param major - major of the beacon
 * @param minor - minor of the beacon
 * @return New instance of CNISDKBeacon object
 */
- (instancetype)initWithMajor:(NSNumber *)major minor:(NSNumber *)minor;

@end

NS_ASSUME_NONNULL_END
