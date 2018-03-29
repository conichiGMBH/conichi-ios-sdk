//
//  CNISDKLocationManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 5/21/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CLLocationManager;
@class CLLocation;
@class CNISDKLocationManager;

#import <CNISDKCoreKit/CNISDKConstants.h>

NS_ASSUME_NONNULL_BEGIN


@protocol CNISDKLocationManagerDelegate <NSObject>

/**
 * Notifies about significant location update from underlying `CLLocationManager`

 @param locationManager `CNISDKLocationManager` that fired a callback
 @param location newly received significantly updated location
 */
- (void)locationManager:(CNISDKLocationManager *)locationManager didReceiveSignificantLocationUpdate:(CLLocation *)location;

@end


@interface CNISDKLocationManager : NSObject

@property (nonatomic, copy) NSString *identifier;

/**
 * Delegate object to receive callbacks
 */
@property (nonatomic, weak) id<CNISDKLocationManagerDelegate> delegate;

/**
 * Initializes location manager with specific instance on core location manager
 * @param manager - core location manager
 * @return newly created CNISDKLocationManager 
 */
- (instancetype)initWithCoreLocationManager:(CLLocationManager *)manager NS_DESIGNATED_INITIALIZER;

/**
 * Method replicates the `CLLocationManager` method startUpdatingLocation()
 */
- (void)startUpdatingLocation;

/**
 * Method replicates the `CLLocationManager` method stopUpdatingLocation()
 */
- (void)stopUpdatingLocation;

/**
 * Method replicates the `CLLocationManager` method startMonitoringSignificantLocationChanges()
 */
- (void)startMonitoringSignificantLocationChanges;

/**
 * Method replicates the `CLLocationManager` method stopMonitoringSignificantLocationChanges()
 */
- (void)stopMonitoringSignificantLocationChanges;

@end

NS_ASSUME_NONNULL_END
