//
//  CNISDKGeoFenciesCreator.h
//  CNISDKGeoFencingKit
//
//  Created by Anton Domashnev on 16.06.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGeoFenceRegion;
@class CNISDKVenue;

NS_ASSUME_NONNULL_BEGIN


/**
 Protocol `CNISDKGeoFenciesCreator` describes the object that collects `CNISDKGeoFenceRegion` based on internal logic
 */
@protocol CNISDKGeoFenciesCreator <NSObject>

/**
 Creates `CNISDKGeoFenceRegion` objects from the given `CNISDKVenue` array

 @param venues possible venues to geo fence
 @return geo-fence regions to actually geofence
 */
- (NSArray<CNISDKGeoFenceRegion *> *)createGeoFenceRegionsFromVenues:(NSArray<CNISDKVenue *> *)venues;

@end

NS_ASSUME_NONNULL_END
