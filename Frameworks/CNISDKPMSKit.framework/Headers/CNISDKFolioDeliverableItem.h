//
//  CNISDKFolioDeliverableItem.h
//  conichiSDK
//
//  Created by Anton Domashnev on 14/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>


#define CNISDKFolioDeliverableItemKeypath(NAME) CNISDKKeypath(CNISDKFolioDeliverableItem, NAME)

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKFolioDeliverableItem` defines entity that represents hotel minibar item from mobile reservation
 */
@interface CNISDKFolioDeliverableItem : NSObject

/**
 *  Name of the item. E.x. - Kreditkarte Manuell
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 *  Unique identifier for each item. E.x. - KKMANUELL
 */
@property (nonatomic, copy, readonly) NSString *code;

/**
 *  ISO code of the price's currency
 */
@property (nonatomic, copy, readonly) NSString *currency;

/**
 *  Float number that represents price of this item in the hotel
 */
@property (nonatomic, strong, readonly) NSNumber *price;

@end

NS_ASSUME_NONNULL_END
