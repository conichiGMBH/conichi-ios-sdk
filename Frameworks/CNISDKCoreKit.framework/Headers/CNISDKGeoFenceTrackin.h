//
//  CNISDKGeoFenceTrackin.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/6/17.
//

#import "CNISDKObject.h"
#import "CNISDKMacros.h"

@class CNISDKGeoFence;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Geofence trackin status
 */
typedef NS_ENUM(NSInteger, CNISDKGeoFenceTrackinStatus) {
    /**
     *  *  GeoFence trackin is currently unknown
     */
    CNISDKGeoFenceTrackinStatusUnknown,
    
    /**
     *  GeoFence trackin is open
     */
    CNISDKGeoFenceTrackinStatusOpen,
    
    /**
     *  GeoFence trackin is closed
     */
    CNISDKGeoFenceTrackinStatusClosed,
};

/**
 *  A string value of CNISDKGeoFenceTrackinStatusOpen
 */
extern NSString *const kCNISDKGeoFenceTrackinStatusOpen;

/**
 *  A string value of CNISDKGeoFenceTrackinStatusClosed
 */
extern NSString *const kCNISDKGeoFenceTrackinStatusClosed;

#define CNISDKGeoFenceTrackinKeypath(NAME) CNISDKKeypath(CNISDKGeoFenceTrackin, NAME)

/**
 *  The `CNISDKGeoFenceTrackin` class is a representation geofence trackin object from conichi's cloud.
 */
@interface CNISDKGeoFenceTrackin : CNISDKObject

/**
 *  The status of the geofence trackin
 *  see constants lCNISDKGeoFenceTrackinStatusOpen or kCNISDKGeoFenceTrackinStatusClosed
 */
@property (nonatomic, copy, readonly) NSString *status;

/**
 *  The enum representation of the geofence trackin status
 *  @see CNISDKGeoFenceTrackinStatus
 */
@property (nonatomic, assign, readonly) CNISDKGeoFenceTrackinStatus statusEnum;

/**
 *  The creation date of the geofence trackin
 */
@property (nonatomic, strong, readonly) NSDate *createdAt;

/**
 *  The update date of the geofence trackin
 */
@property (nonatomic, strong, readonly) NSDate *updatedAt;

/**
 *  The closed date of the geofence trackin.
 *  Nil if track-in is open
 */
@property (nonatomic, strong, readonly, nullable) NSDate *closedAt;

/**
 *  The geofence area associated with the trackin
 */
@property (nonatomic, strong, readonly) NSString *geofenceID;

@end

@interface CNISDKGeoFenceTrackin (LocalCacheArchive)

+ (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedOpenedGeoFenceTrackinsForGeofenceID:(NSString*)geofenceID;
+ (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedClosedGeoFenceTrackinsForGeofenceID:(NSString*)geofenceID;

@end

NS_ASSUME_NONNULL_END

