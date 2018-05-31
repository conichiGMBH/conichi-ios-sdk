//
//  CNIAPIRequestManager.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 30.03.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIRequest;
@class CNIAPIResponse;
@class CNIAPIRequestManagerConfiguration;

@protocol CNIAPIOperation;
@protocol CNIAPIRequestRetryTimer;
@protocol CNIAPIRequestRetryResolver;

NS_ASSUME_NONNULL_BEGIN

typedef void (^CNIAPIRequestManagerCompletionBlock)(CNIAPIResponse *_Nonnull response);

/**
 Class `CNIAPIRequestManager` is the core of the framework.
 It schedules the given requests, controls retry and cancellation mechanism.
 It ouptuts the final response to the client.
 */
@interface CNIAPIRequestManager : NSObject

- (instancetype)initWithConfiguration:(CNIAPIRequestManagerConfiguration *)configuration NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(configuration:));
- (instancetype)init NS_UNAVAILABLE;

/**
 Performs the given request, it also handles the retry and cancellation policy

 It uses by default: `CNIAPIRequestDefaultRetryResolver`
 It uses by default: `CNIAPIRequestExponentialRetryTimer`
 
 @param request request to perform
 @param completion callback with results
 @return request operation that can be cancelled or supplied with cancellation observers
 */
- (nullable id<CNIAPIOperation>)performRequest:(CNIAPIRequest *)request completion:(nullable CNIAPIRequestManagerCompletionBlock)completion NS_SWIFT_NAME(perform(request:completion:));

/**
 Performs the given request, it also handles the retry and cancellation policy
 
 @param request request to perform
 @param retryTimer manager that resolves the retry delay for the request
 @param retryResolver manager that resolves the policy whether the request should be retried or not
 @param completion callback with results
 @return request operation that can be cancelled or supplied with cancellation observers
 */
- (nullable id<CNIAPIOperation>)performRequest:(CNIAPIRequest *)request
                                    retryTimer:(id<CNIAPIRequestRetryTimer>)retryTimer
                                 retryResolver:(id<CNIAPIRequestRetryResolver>)retryResolver
                                    completion:(nullable CNIAPIRequestManagerCompletionBlock)completion NS_SWIFT_NAME(perform(request:retryTimer:retryResolver:completion:));

/**
 Suspends performing all requests scheduled, ongoing requests cannot be suspended during execution
 */
- (void)suspend;

/**
 Resumes performing all scheduled requests
 */
- (void)resume;

@end

NS_ASSUME_NONNULL_END
