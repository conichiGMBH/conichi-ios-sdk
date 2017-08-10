//
//  CNIAPIRequestBuilder.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@protocol CNIAPIRequestHeaderBuilder;
@class CNIAPIRequest;

#import "CNIAPITypes.h"


NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const CNIAPIRequestBuilderErrorDomain;

/**
 * Error codes related to `CNIAPIRequestBuilderErrorDomain`
 *
 * - CNIAPIRequestBuilderErrorCodeInvalidPath: `CNIAPIRequestBuilder` can not fulfill the path to build `CNIAPIRequest`
 * - CNIAPIRequestBuilderErrorCodeInvalidParameters: `CNIAPIRequestBuilder` can not fulfill the parameters to build `CNIAPIRequest`
 */
typedef NS_ENUM(NSInteger, CNIAPIRequestBuilderErrorCode) {
    CNIAPIRequestBuilderErrorCodeInvalidPath,
    CNIAPIRequestBuilderErrorCodeInvalidParameters
};


/**
 * `CNIAPIRequest` class builds the different type of `CNIAPIRequest`
 * Designed with the idea in mind to use anytime when a client needs a `CNIAPIRequest`
 */
@interface CNIAPIRequestBuilder : NSObject

/**
 *  Base url to be used to build all requests
 */
@property (nonatomic, strong, readonly) NSURL *baseURL;

/**
 *  Creates a new instance of builder object
 *
 *  @param baseURL       baseURL to create endpoint relative to, please refer to https://tools.ietf.org/html/rfc1808
 *  @param headerBuilder all requests header builder (optional) if no headers are needed
 *
 *  @return newly created CNIAPIRequest
 */
- (instancetype)initWithBaseURL:(NSURL *)baseURL headerBuilder:(nullable id<CNIAPIRequestHeaderBuilder>)headerBuilder NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(baseURL:headerBuilder:));

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Creates a new instance of `CNIAPIRequest` with GET HTTP method
 *
 *  @param path path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param parameters optional request query parameters
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)GETWithPath:(NSString *)path parameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error NS_SWIFT_NAME(GET(path:parameters:));

/**
 *  Creates a new instance of `CNIAPIRequest` with POST HTTP method
 *
 *  @param path path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param parameters optional request query parameters
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)POSTWithPath:(NSString *)path parameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error NS_SWIFT_NAME(POST(path:parameters:));

/**
 *  Creates a new instance of `CNIAPIRequest` with PATCH HTTP method
 *
 *  @param path path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param parameters optional request query parameters
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)PATCHWithPath:(NSString *)path parameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error NS_SWIFT_NAME(PATCH(path:parameters:));

/**
 *  Creates a new instance of `CNIAPIRequest` with DELETE HTTP method
 *
 *  @param path path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param parameters optional request query parameters
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)DELETEWithPath:(NSString *)path parameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error NS_SWIFT_NAME(DELETE(path:parameters:));

@end


@interface CNIAPIRequestBuilder (PUT)

/**
 *  Creates a new instance of `CNIAPIRequest` with PUT HTTP method
 *
 *  @param path path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param parameters optional request query parameters
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)PUTWithPath:(NSString *)path parameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error NS_SWIFT_NAME(PUT(path:parameters:));

/**
 *  Creates a new instance of `CNIAPIRequest` with PUT HTTP method to
 *  upload a given data as  a multipart request
 *
 *  @param path          path to use build an endpoint relative to baseURL, please refer to https://tools.ietf.org/html/rfc1808
 *  @param fileData      data to be uploaded
 *  @param fileName      name of the uploading file
 *  @param parameterName name of parameter representing the file in the request body
 *
 *  @return newly created CNIAPIRequest
 */
- (nullable CNIAPIRequest *)PUTWithPath:(NSString *)path fileData:(NSData *)fileData fileName:(NSString *)fileName parameterName:(NSString *)parameterName error:(NSError **)error NS_SWIFT_NAME(PUT(path:fileData:fileName:parameterName:));

@end

NS_ASSUME_NONNULL_END
