//
//  CNISDKGeoFencingVenuesDelegate.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGeoFencing;
@class CNISDKGeoFenceVenueRegion;

#import "CNISDKGeoFencesVenuesCreator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKGeoFencingVenuesDelegate` protocol defines the callbacks about any geofencing changes
 */
@protocol CNISDKGeoFencingVenuesDelegate <NSObject>

@optional

/**
 *  Calls when geo fencing kit is ready to ask for regions to geofence
 *  Default is location based creator (sorts venues by location closest
 *  to current and picks according to `geoFenceRegionsLimit` from configuration) if not implemented
 *
 *  @param geoFencing kit instance itself
 *  @return object conformed to `CNISDKGeoFencesCreator` to provide geo-fence regions
 */
- (id<CNISDKGeoFencesVenuesCreator>)geoFencesCreatorForConichiSDKGeofencing:(CNISDKGeoFencing *)geoFencing;

/**
 *  Calls when geo fencing kit experiences some error related to geo fencing
 *
 *  @param geoFencing kit instance itself
 *  @param error      experienced error object
 */
- (void)conichiSDKGeofencing:(CNISDKGeoFencing *)geoFencing didFailWithError:(NSError *)error;

/**
 *  Calls as soon as the guest enters into one of conichi's venue region
 *
 *  @param geoFencing kit instance itself
 *  @param region     discovered geo fencing region
 */
- (void)conichiSDKGeofencing:(CNISDKGeoFencing *)geoFencing didEnterRegion:(CNISDKGeoFenceVenueRegion *)region;

/**
 *  Calls as soon as the guest leaves one of conichi's venue region
 *
 *  @param geoFencing kit instance itself
 *  @param region     left geo fencing region
 */
- (void)conichiSDKGeofencing:(CNISDKGeoFencing *)geoFencing didExitRegion:(CNISDKGeoFenceVenueRegion *)region;

@end

NS_ASSUME_NONNULL_END

