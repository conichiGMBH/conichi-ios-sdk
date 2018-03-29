//
//  CNISDKDiskStorageManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/10/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKConstants.h"

@class CNISDKCheckin;
@class CNISDKVenue;
@class CNISDKPreferenceCategory;
@class CNISDKPreference;
@class CNISDKGeoFence;
@class CNISDKGeoFenceTrackin;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKDiskStorageManager : NSObject

+ (instancetype)manager;

/**
 *  It creates the instance of local cache manager with default system file manager
 *
 *  @param localNamespace namespace for the cache files
 *
 *  @return new instance of local cache manager
 */
- (instancetype)initWithNamespace:(NSString *)localNamespace;

/**
 *  It creates the instance of local cache manager with the given file manager
 *
 *  @param localNamespace namespace for the cache files
 *  @param fileManager    file manager
 *
 *  @return new instance of local cache manager
 */
- (instancetype)initWithNamespace:(NSString *)localNamespace fileManager:(NSFileManager *)fileManager;

/**
 * Archive preference categories in local file
 * Previous archive always replaced
 *
 * @param completion boolean block to track the result of operation
 */
- (void)savePreferenceCategories:(NSArray<CNISDKPreferenceCategory *> *)preferenceCategories completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * @return Array with CNISDKPreferenceCategory objects from local file
 */
- (nullable NSArray *)archivedPreferenceCategories;

/**
 * Archive venue in local file
 * @param completion - boolean block to track the result of operation
 */
- (void)saveVenue:(CNISDKVenue *)venue completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * Archive venues in local file
 * Previously archived always replaced
 * @param completion - boolean block to track the result of operation
 */
- (void)saveVenues:(NSArray<CNISDKVenue *> *)venuesArray completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * @return Array with CNISDKVenue objects from local file
 */
- (nullable NSArray<CNISDKVenue *> *)archivedVenuesArray;

/**
 * Archive venues with pre check-in option available in local file
 * Previously archived always replaced
 *
 * @param venuesArray array of CNISDKVenue objects to store locally. If nil it will remove old archived venues from the file system
 * @param completion  boolean block to track the result of operation
 */
- (void)saveVenuesWithPreCheckinAvailable:(nullable NSArray<CNISDKVenue *> *)venuesArray completion:(nullable CNISDKBooleanErrorBlock)completion;

/** Last receivied vunues with pre check-in option available
 * @return Array with CNISDKVenue objects from local file
 */
- (nullable NSArray<CNISDKVenue *> *)archivedVenuesWithPreCheckinAvailable;

/**
 * Saves geofences in local file
 * Previously archived geofences are always replaced
 *
 * @param geofences array of CNISDKGeoFence objects to store locally
 * @param completion boolean/error block to track the result of operation
 */
- (void)saveGeoFences:(NSArray<CNISDKGeoFence *> *)geofences completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * Retreives archived geofences
 * @return Array with CNISDKGeoFence objects from local file
 */
- (nullable NSArray<CNISDKGeoFence *> *)archivedGeoFences;

/**
 * Appends geofence trackin in local file
 * If same geofence trackin is passed, it removes previous one and adds the new one
 *
 * @param newGeofenceTrackin CNISDKGeoFenceTrackin object to store locally
 * @param completion boolean/error block to track the result of operation
 */
- (void)saveGeoFenceTrackin:(CNISDKGeoFenceTrackin *)newGeofenceTrackin completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 * Retreives archived opened geofence trackins for particular geofence area
 * @return Array with CNISDKGeoFenceTrackin objects from local file
 */
- (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedOpenedGeoFenceTrackinsForGeofenceID:(NSString*)geofenceID;

/**
 * Retreives archived closed geofence trackins for particular geofence area
 * @return Array with CNISDKGeoFenceTrackin objects from local file
 */
- (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedClosedGeoFenceTrackinsForGeofenceID:(NSString*)geofenceID;

/**
 * Retreives all opened archived geofence trackins
 * @return Array with CNISDKGeoFenceTrackin objects from local file
 */
- (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedOpenedGeoFenceTrackins;

/**
 * Retreives all closed archived geofence trackins
 * @return Array with CNISDKGeoFenceTrackin objects from local file
 */
- (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedClosedGeoFenceTrackins;

/**
 * Retreives all archived geofence trackins
 * @return Array with CNISDKGeoFenceTrackin objects from local file
 */
- (nullable NSArray<CNISDKGeoFenceTrackin *> *)archivedGeoFenceTrackins;

/**
 * It deletes all local archives synchronously
 */
- (void)invalidateCache;

@end

NS_ASSUME_NONNULL_END

