//
//  CNISDKDeliverableCountableItem.h
//  conichiSDK
//
//  Created by Anton Domashnev on 20/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKDeliverableItem;

#import "CNISDKMacros.h"


#define CNISDKDeliverableCountableItemKeypath(NAME) CNISDKKeypath(CNISDKDeliverableCountableItem, NAME)


NS_ASSUME_NONNULL_BEGIN

/*!
 The `CNISDKDeliverableCountableItem` defines entity that represents hotel item and number of times it was chosen
 */
@interface CNISDKDeliverableCountableItem : NSObject

/**
 *  Associated deliverable item object
 */
@property (nonatomic, strong, readonly) CNISDKDeliverableItem *deliverableItem;

/**
 *  Count of deliverable items
 */
@property (nonatomic, assign, readonly) NSUInteger count;

/**
 *  Creates deliverable item with underlying item and count of this item
 *
 *  @param item  underlying item
 *  @param count number of times item was chosen
 *
 *  @return CNISDKDeliverableItem instance
 */
+ (instancetype)itemWithDeliverableItem:(CNISDKDeliverableItem *)item countOf:(NSUInteger)count;

@end

NS_ASSUME_NONNULL_END
