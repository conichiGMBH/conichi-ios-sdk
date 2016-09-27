//
//  CNISDKAPIRequestBuilder.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/13/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISession;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIRequestBuilder : NSObject

/**
 * @return base URL of conichi API including version
 */
+ (NSString *)baseVersionedURLString;

/**
 * @return base URL of conichi API excluding version
 */
+ (NSString *)baseURLString;

/**
 *  Initializes new request builder for the specific session
 *
 *  @param session current active session
 *
 *  @return newly created api request builder
 */
- (instancetype)initWithSession:(CNISession *)session;

/**
 * @return GET request to the Conichi's API with given path and parameters (use it for not versioned requests)
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)GETWithNotVersionedPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return GET request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)GETWithPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return POST request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)POSTWithPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return PATCH request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)PATCHWithPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return DELETE request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)DELETEWithPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return PUT request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param parameters - request parameters. May be nil. Must be is in valid JSON format.
 */
- (nullable NSURLRequest *)PUTWithPath:(NSString *)path parameters:(nullable id)parameters;

/**
 * @return PUT request to the Conichi's API with given path and parameters
 * @param path - request path
 * @param data - data to be uploaded with multipart request
 * @param fileName - uploaded file name
 * @param parameterName - uploaded file name in request body
 */
- (nullable NSURLRequest *)multipartPUTWithPath:(NSString *)path fileData:(NSData *)data fileName:(NSString *)fileName parameterName:(NSString *)parameterName;

@end

NS_ASSUME_NONNULL_END
