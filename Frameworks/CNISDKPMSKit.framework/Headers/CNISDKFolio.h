//
//  CNISDKFolio.h
//  conichiSDK
//
//  Created by Anton Domashnev on 14/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKFolioDeliverableItem;


#define CNISDKFolioKeypath(NAME) CNISDKKeypath(CNISDKFolio, NAME)

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKFolio` defines entity that represents information about the guest master bill for the stay
 */
@interface CNISDKFolio : NSObject

/**
 *  Internal folio ID from property management system
 */
@property (nonatomic, copy, readonly) NSString *folioID;

/**
 * What guest needs to be charged for
 */
@property (nonatomic, copy, readonly) NSNumber *outstandingAmount;

/**
 * In what currency will be the payment
 */
@property (nonatomic, copy, readonly) NSString *paymentCurrency;

/**
 *  Deliverable items from the property management system
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKFolioDeliverableItem *> *deliverables;

@end

NS_ASSUME_NONNULL_END
