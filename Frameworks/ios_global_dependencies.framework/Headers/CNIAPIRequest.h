//
//  CNIAPIRequest.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 26/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import "CNIAPITypes.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, CNIAPIRequestMethod) {
    CNIAPIRequestMethodGET,
    CNIAPIRequestMethodPOST,
    CNIAPIRequestMethodPUT,
    CNIAPIRequestMethodPATCH,
    CNIAPIRequestMethodDELETE
};

typedef NS_ENUM(NSInteger, CNIAPIRequestType) {
    CNIAPIRequestTypeDownload,
    CNIAPIRequestTypeUpload
};

FOUNDATION_EXTERN NSString *CNIAPIRequestMethodStringRepresentation(CNIAPIRequestMethod method);
FOUNDATION_EXTERN NSInteger const CNIAPIRequestNoRetries;

/**
 * `CNIAPIRequest` class describes network requests
 */
@interface CNIAPIRequest : NSObject <NSCopying>

/**
 *  URL of the request
 */
@property (nonatomic, strong, readonly) NSURL *url;

/**
 *  Unique identifier of the request
 */
@property (nonatomic, strong, readonly) NSUUID *uuid;

/**
 *  Underlying apple NSURLRequest object that will be used to send actual request
 */
@property (nonatomic, strong, readonly) NSURLRequest *urlRequest;

/**
 *  HTTP method of the request
 *  @see CNIAPIRequestMethod
 */
@property (nonatomic, assign, readonly) CNIAPIRequestMethod method;

/**
 *  Request type
 *  @see CNIAPIRequestType
 */
@property (nonatomic, assign, readonly) CNIAPIRequestType type;

/**
 *  Maxumum number of automatic retries to finish the request
 *  Default value is CNIAPIRequestNoRetries
 */
@property (nonatomic, assign) NSInteger maximumRetryCount;

/**
 *  Creates a new instance of CNIAPIRequest.
 *
 *  @param url    URL to send request to
 *  @param method HTTP method of the request
 *
 *  @return newly created CNIAPIRequest
 */
- (instancetype)initWithURL:(NSURL *)url method:(CNIAPIRequestMethod)method type:(CNIAPIRequestType)type NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(url:method:type:));

- (instancetype)init NS_UNAVAILABLE;

@end


@interface CNIAPIRequest (Body)

@property (nonatomic, copy, readonly, nullable) NSData *body;

- (instancetype)initWithURL:(NSURL *)url method:(CNIAPIRequestMethod)method type:(CNIAPIRequestType)type body:(NSData *)data NS_SWIFT_NAME(init(url:method:type:body:));

@end


@interface CNIAPIRequest (Headers)

@property (nonatomic, copy, readonly) CNIAPIHeaders *headers;

- (void)addHeader:(CNIAPIHeaderField *)field withValue:(CNIAPIHeaderValue *)value NS_SWIFT_NAME(add(header:with:));

- (void)removeHeader:(CNIAPIHeaderField *)field NS_SWIFT_NAME(remove(header:));

@end

NS_ASSUME_NONNULL_END
