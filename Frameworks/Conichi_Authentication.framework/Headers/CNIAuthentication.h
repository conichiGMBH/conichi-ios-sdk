//
//  CNIAuthentication.h
//  ios-authentication
//
//  Created by Anton Domashnev on 11/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISession;


NS_ASSUME_NONNULL_BEGIN

/**
 *  Completion block type
 *
 *  @param session authorized session object if authentication succeeded
 *  @param JSON    parsed response JSON
 *  @param error   optional error if request failed
 */
typedef void (^CNIAuthenticationCompletionBlock)(CNISession *_Nullable session, id _Nullable JSON, NSError *_Nullable error);

/**
 *  The `CNIAuthentication` class contains methods to authenticate user in conichi
 */
@interface CNIAuthentication : NSObject

/**
 *  Default init method is not available
 *  @see initWithSession:sessionConfiguration:
 *
 *  @return nothing
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 *  Initializes the authentication instance
 *
 *  @param session              session to be used to perform authentication
 *  @param sessionConfiguration session to be used to create request's tasks
 *
 *  @return newly creates `CNIAuthentication` instance
 */
- (instancetype)initWithSession:(CNISession *)session sessionConfiguration:(NSURLSessionConfiguration *)sessionConfiguration NS_DESIGNATED_INITIALIZER;

/**
 *  Sends the authentication request and opens session if succeeded or return error if failed
 *
 *  @param request    authentication request to be sent
 *  @param completion completion block
 */
- (void)performAuthenticationRequest:(NSURLRequest *)request completion:(nullable CNIAuthenticationCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
