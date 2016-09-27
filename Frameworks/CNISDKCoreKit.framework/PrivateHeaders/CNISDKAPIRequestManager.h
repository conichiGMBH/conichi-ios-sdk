//
//  CNISDKAPIRequestManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/16/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKAPIFailureHTTPResponseHandler;

#import <CNISDKCoreKit/CNISDKMacros.h>

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIRequestManager : NSObject

/**
 *  Initializes the new api request manager
 *
 *  @param handler failure response handler
 *
 *  @return newly created request manager
 */
- (instancetype)initWithFailureResponseHandler:(CNISDKAPIFailureHTTPResponseHandler *)handler;

/**
 *  Performs given request by underlying NSURLSession
 *
 *  @param request         request to be sent
 *  @param shouldRetry     boolean flag whether manager has to retry request with so called retry patter (@see http://www.servicedesignpatterns.com/WebServiceInfrastructures/IdempotentRetry)
 *  @param shouldSerialize boolean flag whether manager has to archive request before app terminates
 *  @param completion      completion block. Called !!! OUT OF THE MAIN THREAD !!!
 */
- (void)performDataTaskRequest:(NSURLRequest *)request shouldRetry:(BOOL)shouldRetry shouldSerialize:(BOOL)shouldSerialize completion:(nullable void (^)(id _Nullable json, NSURLResponse *_Nullable response, NSError *_Nullable error))completion;

/**
 *  Convenience method to perform request without retry and without serialization
 *
 *  @param request    request to be sent
 *  @param completion completion block. Called !!! OUT OF THE MAIN THREAD !!!
 */
- (void)performDataTaskRequest:(NSURLRequest *)request completion:(nullable void (^)(id _Nullable json, NSURLResponse *_Nullable response, NSError *_Nullable error))completion;

/**
 *  Performs upload given request by underlying NSURLSession
 *
 *  @param request    request to be sent
 *  @param data       data to be uploaded
 *  @param completion completion block. Called !!! OUT OF THE MAIN THREAD !!!
 */
- (void)performUploadTaskRequest:(NSURLRequest *)request fileData:(NSData *)data completion:(nullable void (^)(id _Nullable json, NSURLResponse *_Nullable response, NSError *_Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
