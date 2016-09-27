//
//  CNIAuthenticationNetworkOperator.h
//  ios-authentication
//
//  Created by Anton Domashnev on 12/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 *  Completion block
 *
 *  @param response response if exists
 *  @param JSON     parsed response data into JSON
 *  @param error    optional error if failed
 */
typedef void (^CNIAuthenticationNetworkOperatorCompletionBlock)(NSHTTPURLResponse *_Nullable response, id _Nullable JSON, NSError *_Nullable error);

/**
 *  The `CNIAuthenticationNetworkOperator` class sends HTTP requests to conichi API
 */
@interface CNIAuthenticationNetworkOperator : NSObject

/**
 *  Initializes the `CNIAuthenticationNetworkOperator` instance with the given session
 *
 *  @param session session to create tasks
 *
 *  @return newly created instance of `CNIAuthenticationNetworkOperator`
 */
- (instancetype)initWithSession:(NSURLSession *)session NS_DESIGNATED_INITIALIZER;

/**
 *  Creates and sends the data task with the given NSURLRequest.
 *  Parses the response data into JSON kind of object.
 *
 *  @param request    request to be sent to
 *  @param completion completion block
 *
 *  @return running `NSURLSessionTask`
 */
- (NSURLSessionTask *)JSONTaskWithRequest:(NSURLRequest *)request completion:(nullable CNIAuthenticationNetworkOperatorCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
