//
//  CNISDKRegion.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/18/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKBeacon;

#import "CNISDKMacros.h"


#define CNISDKRegionKeypath(NAME) CNISDKKeypath(CNISDKRegion, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKRegion` class represents the conichi region with beacons.
 *  This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKRegion : CNISDKObject

/**
 *  Each region belongs to conichi's venue. This is the associated venue conichi id
 */
@property (nonatomic, strong, readonly) NSString *venueConichiID;

/**
 *  Region's name on the backend
 */
@property (nonatomic, strong, readonly) NSString *name;

/**
 * Array of CNISDKBeacon objects that are in this region
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKBeacon *> *beacons;

/**
 *  Finds beacon in associated beacons array that has the given major and the given minor
 *
 *  @param major beacon major
 *  @param minor beacon minor
 *
 *  @return CNISDKBeacon beacon object from beacons array with the given major and minor or nil if it doesnt exist
 */
- (nullable CNISDKBeacon *)beaconWithMajor:(NSNumber *)major minor:(NSNumber *)minor;

@end

NS_ASSUME_NONNULL_END
