//
//  CNISDKGeoFencesAreasCreator.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

@import Foundation;

@class CNISDKGeoFenceAreaRegion;
@class CNISDKGeoFence;

NS_ASSUME_NONNULL_BEGIN


/**
 Protocol `CNISDKGeoFencesAreasCreator` describes the object that collects `CNISDKGeoFencAreaeRegion` based on internal logic
 */
@protocol CNISDKGeoFencesAreasCreator <NSObject>

/**
 Creates `CNISDKGeoFenceAreaRegion` objects from the given `CNISDKGeoFence` array
 
 @param geofences possible geofences areas
 @return geofences areas with their corresponding CLCircularRegion
 */
- (NSArray<CNISDKGeoFenceAreaRegion *> *)createGeoFenceAreaRegionsFromGeofences:(NSArray<CNISDKGeoFence *> *)geofences;

@end

NS_ASSUME_NONNULL_END


