//
//  CNISDKDelegate.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/11/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@import CoreLocation;
@import CoreBluetooth;

@class CNISDKVenue;
@class CNISDKRegion;
@class CNISDKBeacon;
@class CNISDKCheckin;
@class CNISDKGuest;
@class CNISDKTrackin;

#import "CNISDKAuthorizationChangeReason.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKDelegate` protocol defines to what messages a CNISDKDelegate object should confirm
 */
@protocol CNISDKDelegate <NSObject>

@optional

//----------Tracking----------//

/**
 *  Calls when location manager ranged beacon with different major than the previous
 *
 *  @param venue - CNISDKVenue object which belongs to the discovered beacon
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidDiscoverVenue:(CNISDKVenue *)venue;

/**
 *  Calls when guest device has ranged becon which region different from the current one and we've received the detail information about beacon's venue
 *  @warning Calls only if user still in range of that beacon
 *
 *  @param region - CNISDKRegion object which represents discovered region
 *  @param venue - CNISDKVenue object which belongs to the discovered region
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidDiscoverRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue;

/**
 *  Calls when SDK successfully creates trackin object on the backend
 *  @warning Calls only if user still in range of that beacon
 *
 *  @param region - CNISDKRegion object which represents discovered region
 *  @param venue - CNISDKVenue object which belongs to the discovered region
 *  @param trackin - CNISDKTrackin object which was created for
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidStartTrackingGuestInRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue trackin:(CNISDKTrackin *)trackin;

/**
 *  Calls when SDK fails to create trackin object on the backend.
 *  @warning Calls only if user still in range of that beacon
 *
 *  @param region - CNISDKRegion object which represents discovered region
 *  @param venue - CNISDKVenue object which belongs to the discovered region
 *  @param error - error object
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidFailToStartTrackingGuestInRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue withError:(NSError *)error;

/**
 *  Calls after SDK successfully closed trackin on the backend
 *
 *  @param region - CNISDKRegion object which represents left region
 *  @param venue - CNISDKVenue object which belongs to the left region
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidStopTrackingGuestInRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue;

/**
 *  Calls after SDK successfully closed trackin on the backend
 *
 *  @param region - CNISDKRegion object which represents left region
 *  @param venue - CNISDKVenue object which belongs to the left region
 *  @param error - error object
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidFailToStopTrackingGuestInRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue withError:(NSError *)error;

/**
 *  Calls after user leaves range of previously discovered region or discovers new region
 *
 *  @param region - CNISDKRegion object which represents left region
 *  @param venue - CNISDKVenue object which belongs to the left region
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidLeaveRegion:(CNISDKRegion *)region inVenue:(CNISDKVenue *)venue;

/**
 *  Calls when there are no beacons around with the previously discovered venue major
 *
 *  @param venue - CNISDKVenue object which represents left venue
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidLeaveVenue:(CNISDKVenue *)venue;

/**
 *  Calls when internal CLLocationManager calls -locationManager:didFailWithError:
 *  
 *  @param error CLLocationManager error
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidFailTrackingLocationWithError:(NSError *)error;

/**
 *  Calls before SDK wants to open trackin for guest in specific region
 *  
 *  @param venue - CNISDKVenue object which belongs to the region
 *  @param region - CNISDKRegion object itself
 *  @param callback - block with BOOL result whether we should open trackin or ignore it
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKShouldOpenTrackinInRegion:(CNISDKRegion *)region venue:(CNISDKVenue *)venue callback:(void (^)(BOOL shouldOpenTrackin))callback;

//----------Session----------//

/**
 *  Called after preferences for conichi were fetched
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidFetchPreferences;

/**
 *  Calls when Guest's authorization status has changed
 *
 *  @param isAuthorized - authorization flag
 *  @param reason - authorization change reason
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidChangeAuthorizationStatus:(BOOL)isAuthorized reason:(CNISDKAuthorizationChangeReason)reason;

//----------Permissions----------//

/**
 *  Calls everytime when CLAuthorizationStatus did change for the current app
 *  
 *  @param status new location authorization status
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidChangeLocationAuthorizationStatus:(CLAuthorizationStatus)status;

/**
 *  Calls everytime when CBManagerState did change for the current app
 *
 *  @param state new central manager state
 *
 *  @note Always calls from the main thread
 */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunguarded-availability"
- (void)conichiSDKDidChangeBluetoothState:(CBManagerState)state;
#pragma clang diagnostic pop

/**
 *  Calls everytime when notifications permission did change for the current app
 *
 *  @param isAllow flat if push notifications is allow or not
 * 
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidChangeNotificationsPermission:(BOOL)isAllow;


//----------Check in----------//

/**
 *  Called after currentGuest.currentCheckIn was open
 *
 *  @param checkIn - changed checkIn
 *
 *  @note Always calls from the main thread. Please pay attention to the status of checkin. If the status is 
 */
- (void)conichiSDKDidOpenCheckIn:(CNISDKCheckin *)checkIn;

/**
 *  Called after currentGuest.currentCheckIn is closed but before it is set to nil
 * 
 *  @param checkIn - changed checkIn
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidCloseCheckIn:(CNISDKCheckin *)checkIn;


//----------Guest----------//

/**
 * Calls everytime current guest did update status
 * This callback is called after succeeded fetchCurrentStatusForGuest request and the status has been changed
 *
 *  @param guest - updated guest object
 *
 *  @note Always calls from the main thread
 */
- (void)conichiSDKDidUpdateGuestStatus:(CNISDKGuest *)guest;

//----------Info----------//

/**
 *  Calls when SDK finds that there is new API version to use.
 *  It can be used to show alert to the current user to force the app update
 */
- (void)conichiSDKDidFindNewAPIVersion;

@end

NS_ASSUME_NONNULL_END
