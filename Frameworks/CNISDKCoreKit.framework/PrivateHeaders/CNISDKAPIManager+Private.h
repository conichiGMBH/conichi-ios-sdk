//
//  CNISDKAPIManager+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/27/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKAPIManager.h>

@class CNISDKDiskStorageManager;
@class CNISDKAPIRequestManager;
@class CNISDKAPIRequestBuilder;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIManager (Private)

@property (nonatomic, strong) CNISDKDiskStorageManager *diskStorageManager;
@property (nonatomic, strong) CNISDKAPIRequestManager *requestManager;
@property (nonatomic, strong) CNISDKAPIRequestBuilder *requestBuilder;

- (void)fetchConichiConfig:(nullable CNISDKBooleanErrorBlock)completion;

- (void)fetchAPIInfo:(nullable CNISDKIDErrorBlock)completion;

/**
 * @param retry - if we need to retry this request after failure response
 */
- (void)stopTracking:(CNISDKTrackin *)trackin retry:(BOOL)retry completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
