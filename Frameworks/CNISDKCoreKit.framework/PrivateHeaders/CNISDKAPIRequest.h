//
//  CNISDKAPIRequest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/18/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKConstants.h"

typedef NS_ENUM(NSInteger, CNISDKAPIRequestState) {
    CNISDKAPIRequestStateIdle,
    CNISDKAPIRequestStateScheduled,
    CNISDKAPIRequestStatePerforming,
    CNISDKAPIRequestStateFailed,
    CNISDKAPIRequestStateSucceeded
};

typedef NS_ENUM(NSInteger, CNISDKAPIRequestType) {
    CNISDKAPIRequestTypeData,
    CNISDKAPIRequestTypeUpload,
    CNISDKAPIRequestTypeDownload
};

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIRequest : NSObject <NSCoding>

@property (nonatomic, strong, nullable) NSData *uploadData;

@property (nonatomic, assign, getter=isRetried) BOOL retried;
@property (nonatomic, assign, getter=isSerialized) BOOL serialized;

@property (nonatomic, assign, readonly) CNISDKAPIRequestState state;
@property (nonatomic, assign, readonly) CNISDKAPIRequestType type;
@property (nonatomic, assign, readonly) NSTimeInterval lastAttemptTimestapmp;
@property (nonatomic, assign, readonly) NSInteger retriesCount;

@property (nonatomic, copy, readonly) NSString *path;
@property (nonatomic, copy, readonly) NSString *method;

@property (nonatomic, strong, readonly) NSURLRequest *request;

@property (nonatomic, strong, readonly, nullable) NSError *responseError;

@property (nonatomic, copy, nullable) void (^completionHandler)(NSDictionary *__nullable json, NSURLResponse *response, NSError *__nullable error);

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Initializes the `CNISDKAPIRequest` instance with the given type and request
 *
 *  @param type    type of request
 *  @param request underlying NSURLRequest object
 *
 *  @return newly created `CNISDKAPIRequest` instance
 */
- (instancetype)initWithType:(CNISDKAPIRequestType)type request:(NSURLRequest *)request NS_DESIGNATED_INITIALIZER;

/**
 * Set state to the CNISDKAPIRequestStateScheduled
 * @param fireBlock - block when this request should be fired
 * @return flag - whether the state trasition is possible or not
 * @discussion There is an algorithm to schedule requests depends on retriesCount and lastAttemptTimestapmp
 *             Waiting time interval is calculated like retriesCount^2
 */
- (BOOL)scheduleWithCallback:(CNISDKEmptyBlock)fireBlock;

/**
 * Set state to the CNISDKAPIRequestStateIdle
 * @return flag - whether the state trasition is possible or not
 */
- (BOOL)reset;

/**
 * Set state to the CNISDKAPIRequestStatePerforming
 * @return flag - whether the state trasition is possible or not
 */
- (BOOL)start;

/**
 * If error exists set state to the CNISDKAPIRequestStateFailed otherwise to the CNISDKAPIRequestStateSucceeded
 * @param error - response error
 * @return flag - whether the state trasition is possible or not
 */
- (BOOL)finishWithError:(nullable NSError *)error;

/**
 * @return flag - whether this request could be retried or not
 * @note Request could be retried if: isRetried is TRUE
 *                                    retriesCount <= CNISDKAPIRequestMaxRetriesCount (now 10)
 *                                    responseError.code is CNIErrorCodeServerError or CNIErrorCodeNoInternetConnection
 * @see NSError+CNISDK category
 */
- (BOOL)shouldRetry;

@end

NS_ASSUME_NONNULL_END
