//
//  CNISDKAPIDataFetcher.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/31/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKAPIManager;
@class CNISDKGuest;
@class CLLocationManager;

typedef void (^CNISDKAPIDataFetcherResultBlock)(BOOL isVenuesFetched, BOOL isPreferencesFetched, BOOL isCheckedAPIVersion);

#import "CNISDKConstants.h"

NS_ASSUME_NONNULL_BEGIN

/**
 The `CNISDKAPIDataFetcher` class is used to fetch all required information from backend for SDK
 This class is used by CNISDK instance internally on some events (startMonitoring, handling authorization changes, etc...)
 */
@interface CNISDKAPIDataFetcher : NSObject

- (instancetype)initWithAPIManager:(CNISDKAPIManager *)apiManager locationManager:(CLLocationManager *)locationManager guest:(CNISDKGuest *)guest;

/**
 * Fetches venues (with or without location), guest status (and start polling checkin if ),
 * It calls completion after all tasks will be completed regardless with error or without
 */
- (void)fetchServerData:(CNISDKAPIDataFetcherResultBlock)completion;

@end

NS_ASSUME_NONNULL_END
