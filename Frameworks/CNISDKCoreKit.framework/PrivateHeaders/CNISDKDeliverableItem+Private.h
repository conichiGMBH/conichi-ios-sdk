//
//  CNISDKDeliverableItem+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKDeliverableItem.h"

#import "CNISDKMapping.h"


@interface CNISDKDeliverableItem (Properties)

@property (nonatomic, copy, readwrite) NSString *name;
@property (nonatomic, copy, readwrite) NSString *code;
@property (nonatomic, strong, readwrite) NSNumber *price;
@property (nonatomic, copy, readwrite) NSString *currency;

@end


@interface CNISDKDeliverableItem (Mapping) <CNISDKMapping>

@end
