//
//  CNISDKGeoFencesVenuesCreator.h
//  CNISDKGeoFencingKit
//
//  Created by Anton Domashnev on 16.06.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGeoFenceVenueRegion;
@class CNISDKVenue;

NS_ASSUME_NONNULL_BEGIN


/**
 Protocol `CNISDKGeoFencesVenuesCreator` describes the object that collects `CNISDKGeoFenceVenueRegion` based on internal logic
 */
@protocol CNISDKGeoFencesVenuesCreator <NSObject>

/**
 Creates `CNISDKGeoFenceVenueRegion` objects from the given `CNISDKVenue` array

 @param venues possible venues to geo fence
 @return geo-fence regions to actually geofence
 */
- (NSArray<CNISDKGeoFenceVenueRegion *> *)createGeoFenceVenueRegionsFromVenues:(NSArray<CNISDKVenue *> *)venues;

@end

NS_ASSUME_NONNULL_END
