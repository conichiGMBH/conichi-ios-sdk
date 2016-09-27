//
//  CNISDKFolioDeliverableItem+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 14/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKFolioDeliverableItem.h"

#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKFolioDeliverableItem+Private` exposes the entity property with readwrite access
 */
@interface CNISDKFolioDeliverableItem (Properties)

/**
 *  Name of the item. E.x. - Kreditkarte Manuell
 */
@property (nonatomic, copy, readwrite) NSString *name;

/**
 *  Unique identifier for each item. E.x. - KKMANUELL
 */
@property (nonatomic, copy, readwrite) NSString *code;

/**
 *  ISO code of the price's currency
 */
@property (nonatomic, copy, readwrite) NSString *currency;

/**
 *  Float number that represents price of this item in the hotel
 */
@property (nonatomic, strong, readwrite) NSNumber *price;

@end


/**
 *  The `CNISDKFolioDeliverableItem+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKFolioDeliverableItem (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
