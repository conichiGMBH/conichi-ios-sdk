//
//  CNISDKAPIRequestHeaderBuilder.h
//  conichiSDK
//
//  Created by Anton Domashnev on 01/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNIAuthenticationRequestHeaderBuilder;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKAPIRequestBuilderMultipartRequestBoundary;
extern NSString *const kCNISDKAPIRequestUserAgentHeader;
extern NSString *const kCNISDKAPIRequestAcceptLanguageHeader;
extern NSString *const kCNISDKAPIRequestAcceptHeader;
extern NSString *const kCNISDKAPIRequestContentTypeHeader;
extern NSString *const kCNISDKAPIRequestClientTypeHeader;

/**
 The `CNISDKAPIRequestHeaderBuilder` class contains methods that builds the header values for the request,
 */
@interface CNISDKAPIRequestHeaderBuilder : NSObject

/**
 *  Initializes new builder for the given session
 *
 *  @param authenticationHeaderBuilder authentication request header builder
 *
 *  @return newly created builder object
 */
- (instancetype)initWithAuthenticationHeaderBuilder:(CNIAuthenticationRequestHeaderBuilder *)authenticationHeaderBuilder;

/**
 *  Creates a NSDictionary object with keys represent header names and values represent values for those fields
 *
 *  @param request request to create headers for
 *
 *  @return all header names and values for the given request
 */
- (NSDictionary *)buildHeaderForRequest:(NSURLRequest *)request;

/**
 *  Creates a NSDictionary object with keys represent header names and values represent values for those fields
 *
 *  @param request mutipart request to create headers for
 *
 *  @return all header names and values for the given request
 */
- (NSDictionary *)buildHeaderForMultipartRequest:(NSURLRequest *)request;

@end

NS_ASSUME_NONNULL_END
