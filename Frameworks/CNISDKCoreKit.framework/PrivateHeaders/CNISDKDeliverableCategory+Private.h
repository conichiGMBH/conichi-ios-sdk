//
//  CNISDKDeliverableCategory+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKDeliverableCategory.h"

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKDeliverableCategory (Properties)

@property (nonatomic, copy, readwrite) NSString *name;
@property (nonatomic, copy, readwrite) NSString *code;
@property (nonatomic, copy, readwrite) NSString *useCaseString;

@property (nonatomic, assign, readwrite) NSInteger displayOrder;

@property (nonatomic, strong, readwrite) NSArray<CNISDKDeliverableCategory *> *categories;
@property (nonatomic, strong, readwrite) NSArray<CNISDKDeliverableItem *> *items;

@end


@interface CNISDKDeliverableCategory (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
