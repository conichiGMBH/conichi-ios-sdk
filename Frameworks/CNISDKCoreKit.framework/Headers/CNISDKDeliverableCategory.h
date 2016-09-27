//
//  CNISDKDeliverableCategory.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKDeliverableItem;

#import "CNISDKEnums.h"

#import "CNISDKMacros.h"


#define CNISDKDeliverableCategoryKeypath(NAME) CNISDKKeypath(CNISDKDeliverableCategory, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKDeliverableCategory` defines entity that represents hotel minibar item category (spirits, snacks, etc)
 */
@interface CNISDKDeliverableCategory : CNISDKObject

/**
 *  Categorie's name
 */
@property (nonatomic, copy, readonly) NSString *name;

/**
 *  Categorie's unique identifier
 */
@property (nonatomic, copy, readonly) NSString *code;

/**
 *  Display order to optionally sort in UI specified by the merchant
 */
@property (nonatomic, assign, readonly) NSInteger displayOrder;

/**
 *  Categorie's use case
 */
@property (nonatomic, assign, readonly) CNISDKDeliverableCategoryUseCase useCase;

/**
 *  Array of subcategories - `CNISDKDeliverableCategory` objects
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKDeliverableCategory *> *categories;

/**
 *  Deliverable items that category contains
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKDeliverableItem *> *items;

@end

NS_ASSUME_NONNULL_END
