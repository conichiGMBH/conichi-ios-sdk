//
//  CNISDKPaymentTransaction.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>


#define CNISDKPaymentTransactionKeypath(NAME) CNISDKKeypath(CNISDKPaymentTransaction, NAME)

NS_ASSUME_NONNULL_BEGIN

/**
 *  Possible payment transaction's states
 */
typedef NS_ENUM(NSInteger, CNISDKPaymentTransactionState) {
    /**
     *  Unknown state
     */
    CNISDKPaymentTransactionStateUnknown,
    /**
     *  Transaction has been just created
     */
    CNISDKPaymentTransactionStatePending,
    /**
     *  Something went wrong on the payment provider side
     */
    CNISDKPaymentTransactionStateCanceled,
    /**
     *  Something went wrong on the conichi side
     */
    CNISDKPaymentTransactionStateAborted,
    /**
     *  Transaction has been successfully made
     */
    CNISDKPaymentTransactionStateCompleted
};

/**
 *  The `CNISDKPaymentTransaction` defines an entity to respresent any of the payment transaction.
 */
@interface CNISDKPaymentTransaction : CNISDKObject

/**
 *  The date when transaction was created
 */
@property (nonatomic, strong, readonly) NSDate *createdAt;

/**
 *  The state of the transaction
 */
@property (nonatomic, assign, readonly) CNISDKPaymentTransactionState state;

/**
 *  Venue conichi ID to what transaction belongs
 */
@property (nonatomic, copy, readonly) NSString *venueConichiID;

/**
 *  Amount of the transaction payment
 */
@property (nonatomic, strong, readonly) NSNumber *paidAmount;

/**
 *  Currency code of the transaction's payment
 */
@property (nonatomic, copy, readonly) NSString *currencyCode;

/**
 *  Optional error message from payment provider
 */
@property (nonatomic, copy, readonly, nullable) NSString *errorMessage;

@end

NS_ASSUME_NONNULL_END
