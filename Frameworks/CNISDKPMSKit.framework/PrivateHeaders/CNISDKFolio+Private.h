//
//  CNISDKFolio+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 14/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKFolio.h"

#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKFolio+Private` exposes the entity property with readwrite access
 */
@interface CNISDKFolio (Properties)

/**
 *  Internal folio ID from property management system
 */
@property (nonatomic, copy, readwrite) NSString *folioID;

/**
 * What guest needs to be charged for
 */
@property (nonatomic, copy, readwrite) NSNumber *outstandingAmount;

/**
 * In what currency will be the payment
 */
@property (nonatomic, copy, readwrite) NSString *paymentCurrency;

/**
 *  Deliverable items from the property management system
 */
@property (nonatomic, strong, readwrite) NSArray<CNISDKFolioDeliverableItem *> *deliverables;

@end


/**
 *  The `CNISDKFolio+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKFolio (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
