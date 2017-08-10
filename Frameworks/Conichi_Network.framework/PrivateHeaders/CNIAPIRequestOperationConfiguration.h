//
//  CNIAPIRequestOperationConfiguration.h
//  Conichi_Network
//
//  Created by Wladyslaw Surala on 18.05.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CNIAPIResponseBuilder;
@protocol CNIAPIRequestRetryResolver;
@protocol CNIAPIRequestRetryTimer;


@interface CNIAPIRequestOperationConfiguration : NSObject

/**
 Retry resolver for sending request
 */
@property (nonatomic, strong) id<CNIAPIRequestRetryResolver> retryResolver;

/**
 Retry time resolver for sending request
 */
@property (nonatomic, strong) id<CNIAPIRequestRetryTimer> retryTimer;

/**
 Represents the object to create an instance of `CNIAPIResponse` for the given request
 */
@property (nonatomic, strong) CNIAPIResponseBuilder *responseBuilder;

/**
 Session to be used to talk to the server
 */
@property (nonatomic, strong) NSURLSession *session;

/**
 Queue on which the completion blocks of `CNIAPIRequestManager` will be called, as well as cancellation blocks and requests retrying.
 Default value is Main Queue.
 */
@property (nonatomic, strong) dispatch_queue_t callbackQueue;

@end
