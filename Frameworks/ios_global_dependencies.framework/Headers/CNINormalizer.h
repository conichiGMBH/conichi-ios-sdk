//
//  CNINormalizer.h
//  ios-authentication
//
//  Created by Anton Domashnev on 01/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//
//  @see https://docs.google.com/document/d/1H_0ikuCaGxKnjV_ECksMTUelztY_BGiM4d2IiFkRwm4/edit#

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 The `CNINormalizer` class that can create normalized string based on the input parameters
 */
@interface CNINormalizer : NSObject

/**
 *  Creates and returns normalized string based on the given parameters in UTF-8 encoding
 *
 *  @param sessionID         optional current active session identifier (can be nil if session is not authorized)
 *  @param requestHTTPMethod request method (GET, POST, PUT, DELETE, PATCH)
 *  @param requestURL        request URL
 *  @param requestTimestamp  request unix timestamp converted to long
 *  @param requestBodyHash   optional request body hash (HMAC generated based on the request normalized body)
 *
 *  @return NSString object represents normalized string
 */
- (NSString *)normalizedStringWithSessionID:(nullable NSString *)sessionID HTTPMethod:(NSString *)requestHTTPMethod URL:(NSURL *)requestURL timestamp:(NSInteger)requestTimestamp bodyHash:(nullable NSString *)requestBodyHash;

/**
 *  Creates and returns normalized string based on the given parameters in UTF-8 encoding
 *
 *  @param requestBody HTTP request body
 *
 *  @return NSString object represents normalized string
 */
- (NSString *)normalizedStringWithRequestBody:(NSData *)requestBody;

@end

NS_ASSUME_NONNULL_END
