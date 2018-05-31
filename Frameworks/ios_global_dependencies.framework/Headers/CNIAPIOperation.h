//
//  CNIAPIOperation.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 14.06.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIRequest;


NS_ASSUME_NONNULL_BEGIN

@protocol CNIAPIOperation <NSObject>

/**
 Whether the operation cancelled or not
 */
@property (nonatomic, readonly, getter=isCancelled) BOOL cancelled;

/**
 Whether the operation executing or not
 */
@property (atomic, readonly, getter=isExecuting) BOOL executing;

/**
 Whether the operation finished or not
 */
@property (atomic, readonly, getter=isFinished) BOOL finished;

/**
 Request to be performed during the request operation
 */
@property (nonatomic, readonly, copy) CNIAPIRequest *request;

/**
 Suspends the data task associated with the request if the task exists and is in running state.
 */
- (void)suspend NS_SWIFT_NAME(suspend());

/**
 Resumes the data task associated with the request if the task exists and is in suspended state.
 */
- (void)resume NS_SWIFT_NAME(resume());

/**
 Cancels the data task associated with the request if the task exists.
 */
- (void)cancel NS_SWIFT_NAME(cancel());

@end

NS_ASSUME_NONNULL_END
