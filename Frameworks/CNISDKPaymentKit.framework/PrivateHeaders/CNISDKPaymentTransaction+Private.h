//
//  CNISDKPaymentTransaction+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKPaymentKit/CNISDKPaymentTransaction.h>
#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPaymentTransaction+Private` exposes the entity property with readwrite access
 */
@interface CNISDKPaymentTransaction (Properties)

/**
 *  The date when transaction was created
 */
@property (nonatomic, strong, readwrite) NSDate *createdAt;

/**
 *  Transaction state string representation
 */
@property (nonatomic, copy, readwrite) NSString *stateString;

/**
 *  Venue conichi ID to what transaction belongs
 */
@property (nonatomic, copy, readwrite) NSString *venueConichiID;

/**
 *  Amount of the transaction payment
 */
@property (nonatomic, strong, readwrite) NSNumber *paidAmount;

/**
 *  Currency code of the transaction's payment
 */
@property (nonatomic, copy, readwrite) NSString *currencyCode;

/**
 *  Optional error message from payment provider
 */
@property (nonatomic, copy, readwrite, nullable) NSString *errorMessage;

/**
 *  The flag whether this transaction has been synced into property management system
 *  @note This flag relates only to PMS Kit
 */
@property (nonatomic, assign, getter=isPMSSynced, readwrite) BOOL PMSSynced;

@end


/**
 *  The `CNISDKPaymentTransaction+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKPaymentTransaction (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
