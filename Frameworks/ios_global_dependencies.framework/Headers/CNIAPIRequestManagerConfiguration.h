//
//  CNIAPIRequestManagerConfiguration.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27.04.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIRequestSenderFactory;
@class CNIAPIRequestCancellationTokenFactory;

NS_ASSUME_NONNULL_BEGIN

extern NSUInteger const CNIAPIRequestManagerConfigurationDefaultMaximumConcurrentRequestsCount;

/**
 Class `CNIAPIRequestManagerConfiguration` incapsulates the configuration of the request manager
 */
@interface CNIAPIRequestManagerConfiguration : NSObject <NSCopying>

/**
 Maximum number of concurrect requests to perform at the same time
 Default value is 5
 */
@property (nonatomic, assign) NSUInteger maximumConcurrentRequestsCount;

/**
 Queue on which the completion block of `CNIAPIRequestManager` should be called.
 Default value is Main Queue.
 */
@property (nonatomic, strong) dispatch_queue_t completionQueue;

/**
 `NSURLSession` to perform requests
 Default value is `[NSURLSession sharedSession]`.
 */
@property (nonatomic, strong) NSURLSession *session;

@end

NS_ASSUME_NONNULL_END
