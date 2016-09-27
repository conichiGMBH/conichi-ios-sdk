//
//  CNISDKDeliverableItem.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

#import "CNISDKMacros.h"


#define CNISDKDeliverableItemKeypath(NAME) CNISDKKeypath(CNISDKDeliverableItem, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKDeliverableItem` defines entity that represents hotel minibar item
 */
@interface CNISDKDeliverableItem : CNISDKObject

/**
 *  Name of the minibar item. E.x. - coca cola 0.3
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 *  Unique identifier for each minibar item
 */
@property (nonatomic, copy, readonly) NSString *code;

/**
 *  Float number that represents price of this item in the hotel
 */
@property (nonatomic, strong, readonly) NSNumber *price;

/**
 *  ISO code of the price's currency
 */
@property (nonatomic, copy, readonly) NSString *currency;


@end

NS_ASSUME_NONNULL_END
