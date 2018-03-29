//
//  CNISDKGeoFenceAreasFetcher.h
//  CNISDKCoreKit
//
//  Created by Mourad on 11/1/17.
//

@import Foundation;

@class CLLocation;
@class CLLocationManager;
@class CNISDKAPIManager;
@class CNISDKGeoFence;
@class CNISDKGeoFencingLocationValidator;

#import <CNISDKCoreKit/CNISDKCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^CNISDKGeoFenceAreasFetcherCallback)(CLLocation *_Nullable location, NSArray<CNISDKGeoFence *> *_Nullable geofences, NSError *_Nullable error);

/**
 *  The 'CNISDKGeoFenceAreasFetcher' fetches the CNISDKGeoFence from the API depending on the current location
 */
@interface CNISDKGeoFenceAreasFetcher : NSObject

/**
 *  Initializes new instance of CNISDKGeoFenceAreasFetcher
 *
 *  @param locationManager location manager to fetch current location
 *  @param apiManager      api manager to fetch geofences from the backend
 *  @param validator       validator to validate the location
 *
 *  @return newly created CNISDKGeoFenceAreasFetcher
 */
- (instancetype)initWithLocationManager:(CLLocationManager *)locationManager apiManager:(CNISDKAPIManager *)apiManager validator:(CNISDKGeoFencingLocationValidator *)validator;

/**
 *  Fetches geofence areas from the backend based on the current location
 *
 *  @param completion block with three parameters:
 *                    1. Location object around that geofences were fetched
 *                    2. Array of CNISDKGeoFence around the given location
 *                    3. NSError opbject if fails
 */
- (void)fetchGeoFenceAreas:(nullable CNISDKGeoFenceAreasFetcherCallback)completion;

@end

NS_ASSUME_NONNULL_END
