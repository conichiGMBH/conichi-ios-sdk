//
//  CNISDKBeacon.h
//  conichiSDK
//
//  Version: 1.0.0
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

#import "CNISDKMacros.h"


#define CNISDKBeaconKeypath(NAME) CNISDKKeypath(CNISDKBeacon, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKBeacon` class represents the conichi's beacon object - it has unique pair of minor and major like a <CLBeacon> class.
 *  This class is a subclass of a <CNISDKObject>.
 *  CNISDKBeacon object equals to another CNISDKBeacon object if they have the same major & minor pair.
 */
@interface CNISDKBeacon : CNISDKObject

/**
 *  Most significant value associated with the beacon
 */
@property (nonatomic, strong, readonly) NSNumber *minor;

/**
 *  Least significant value associated with the beacon
 */
@property (nonatomic, strong, readonly) NSNumber *major;

/**
 *  The welcome message of the beacon which can be used to greet the guest on did discover beacon event
 */
@property (nonatomic, strong, readonly, nullable) NSString *welcomeMessage;

/**
 *  The farewell message of the beacon which can be used to say something to the guest on did leave beacon event
 */
@property (nonatomic, strong, readonly, nullable) NSString *farewellMessage;

/**
 *  The region conichi id of the beacon. Each beacon in conichi's cloud has region that contains it
 */
@property (nonatomic, strong, readonly) NSString *regionConichiID;

@end

NS_ASSUME_NONNULL_END
