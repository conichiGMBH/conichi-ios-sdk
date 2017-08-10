//
//  CNIAPIRequestOperation.h
//  Conichi_Network
//
//  Created by Wladyslaw Surala on 17.05.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import "CNIAPIOperation.h"


NS_ASSUME_NONNULL_BEGIN

@class CNIAPIRequestManager;
@class CNIAPIRequest;
@class CNIAPIResponse;
@class CNIAPIRequestOperationConfiguration;
@class CNIAPIRequestOperationDefaultConfiguration;

typedef void (^CNIRequestOperationCancellationBlock)(void);
typedef void (^CNIRequestOperationCompletionBlock)(CNIAPIResponse *_Nonnull response);


@interface CNIAPIRequestOperation : NSOperation <CNIAPIOperation>

/**
 Adds completion block which will be executed when request is finished without cancelling, it does not override any previously scheduled completion blocks. They are executed once per operation execution cycle, so events of retrying request do not trigger completion blocks

 @param completionBlock block which is executed upon operation finish without cancelling
 */
- (void)addNonCancelledCompletionBlock:(CNIRequestOperationCompletionBlock)completionBlock NS_SWIFT_NAME(add(nonCancelledCompletionBlock:));

/**
 Initializes CNIAPIRequestOperation instance which should be added to proper NSOperationQueue compliant instance for further execution

 @param configuration which is used by request operation to execute the request
 @param request which is subject to request operation execution
 @return request operation which can be used to add completion/cancellation blocks and request cancellation
 */
- (instancetype)initWithConfiguration:(CNIAPIRequestOperationConfiguration *)configuration request:(CNIAPIRequest *)request NS_SWIFT_NAME(init(configuration:request:))NS_DESIGNATED_INITIALIZER;
/**
 Creates CNIAPIRequestOperation instance which should be added to proper NSOperationQueue compliant instance for further execution

 @param configuration which is used by request operation to execute the request
 @param request which is subject to request operation execution
 @return request operation which can be used to add completion/cancellation blocks and request cancellation
 */
+ (instancetype)apiRequestOperationWithConfiguration:(CNIAPIRequestOperationConfiguration *)configuration request:(CNIAPIRequest *)request NS_SWIFT_NAME(apiRequestOperation(configuration:request:));

- (instancetype)init NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
