//
//  CNISDKDeliverableCountableItem+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 20/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKDeliverableCountableItem.h>

#import "CNISDKMapping.h"

@class CNISDKDeliverableItem;
@class CNISDKCreditCard;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKDeliverableCountableItem+Properties` is a category that exposes properties to write
 */
@interface CNISDKDeliverableCountableItem (Properties)

@property (nonatomic, strong, readwrite) CNISDKDeliverableItem *deliverableItem;

@property (nonatomic, assign, readwrite) NSUInteger count;

@property (nonatomic, strong, readwrite) CNISDKCreditCard *creditCard;

@end

/**
 *  The `CNISDKDeliverableCountableItem+Mapping` is a category that conforms `CNISDKDeliverableCountableItem` to 
 *  `CNISDKMapping` protocol
 */
@interface CNISDKDeliverableCountableItem (Mapping) <CNISDKMapping>
@end

NS_ASSUME_NONNULL_END
