//
//  CNISDKAPIFailureHTTPResponseHandler.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/16/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDK;

NS_ASSUME_NONNULL_BEGIN

/**
 * The `CNISDKAPIFailureHTTPResponseHandler` processes the http failure responses
 */
@interface CNISDKAPIFailureHTTPResponseHandler : NSObject

/**
 *  Initializes the new instance of handler
 *
 *  @param sdk sdk shared instance
 *
 *  @return new instance of CNISDKAPIFailureHTTPResponseHandler
 */
- (instancetype)initWithSDK:(CNISDK *)sdk;

/**
 *  Handles the failure http response CNISDKDomain error.
 *  In case of authorization related error it will notify sdk delegate about authorization changes
 *  And also notifies internal classes via notification
 *
 *  @param error      response error that has been converted to CNIErrorDomain
 */
- (void)handleFailureHTTPResponseCNIError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
