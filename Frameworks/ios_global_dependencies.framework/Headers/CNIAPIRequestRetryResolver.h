//
//  CNIAPIRequestRetryResolver.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 17/03/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIResponse;
@class CNIAPIRequest;


NS_ASSUME_NONNULL_BEGIN

/**
 Protocol `CNIAPIRequestRetryResolver` describes the object that controls retry policy for the given request and the given response
 */
@protocol CNIAPIRequestRetryResolver

/**
 Checks whether the request assigned to response should be retried

 @param response received response
 @return flag whether the request should be retried or not
 */
- (BOOL)shouldRetryRequest:(CNIAPIRequest *)request afterResponse:(CNIAPIResponse *)response NS_SWIFT_NAME(shouldRetryRequest(_:after:));

/**
 Reacts on performing retry of the given request.

 @param request retrying request object
 */
- (void)registerRetryOfRequest:(CNIAPIRequest *)request NS_SWIFT_NAME(registerRetry(of:));

@end

NS_ASSUME_NONNULL_END
