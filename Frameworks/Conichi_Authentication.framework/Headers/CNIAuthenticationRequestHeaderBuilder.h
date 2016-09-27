//
//  CNIAuthenticationRequestHeaderBuilder.h
//  ios-authentication
//
//  Created by Anton Domashnev on 11/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISession;
@class CNINormalizer;


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNIAPIRequestConsumerKeyHeader;
extern NSString *const kCNIAPIRequestSessionIDHeader;
extern NSString *const kCNIAPIRequestHMACHeader;
extern NSString *const kCNIAPIRequestHMACVersionHeader;
extern NSString *const kCNIAPIRequestHMACTimestampHeader;
extern NSString *const kCNIAPIRequestHMACBodyHashHeader;

/**
 The `CNIAuthenticationRequestHeaderBuilder` class contains methods that builds the header values for the request,
 */
@interface CNIAuthenticationRequestHeaderBuilder : NSObject

/**
 *  Initializes new builder for the given session
 *
 *  @param session    current active session for the request
 *  @param normalizer string normalizer
 *
 *  @return newly created builder object
 */
- (instancetype)initWithSession:(CNISession *)session normalizer:(CNINormalizer *)normalizer;

/**
 *  Creates an NSDictionary of <Header: Value> pairs for requests to conichi's API
 *
 *  @param request request to create authentication for
 *
 *  @return NSDictionary with authentication headers
 */
- (NSDictionary *)authenticationInfoForRequest:(NSURLRequest *)request;

/**
 *  Creates an NSDictionary of <Header: Value> pairs for multipart requests to conichi's API
 *
 *  @param request request to create authentication for
 *
 *  @return NSDictionary with authentication headers
 */
- (NSDictionary *)authenticationInfoForMultipartRequest:(NSURLRequest *)request;

@end

NS_ASSUME_NONNULL_END
