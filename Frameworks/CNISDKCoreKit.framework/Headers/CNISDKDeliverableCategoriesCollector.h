//
//  CNISDKDeliverableCategoriesCollector.h
//  conichiSDK
//
//  Created by Anton Domashnev on 25/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKDeliverableCategory;

#import "CNISDKEnums.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKDeliverableCategoriesCollector` class contains methods to get specific subset of `CNISDKDeliverableCategory` categories.
 */
@interface CNISDKDeliverableCategoriesCollector : NSObject

/**
 *  Initializer the new instance of `CNISDKDeliverableCategoriesCollector` class with the based array of categories to filter
 *
 *  @param categories based array of categories
 *
 *  @return newly created `CNISDKDeliverableCategoriesCollector` instance
 */
- (instancetype)initWithDeliverableCategories:(NSArray<CNISDKDeliverableCategory *> *)categories;

/**
 *  Returns the flatten array of `CNISDKDeliverableCategory` objects filtered by the given useCase and sorted by displaySort attribute
 *
 *  @param useCase useCase of the `CNISDKDeliverableCategory` to filter by
 *
 *  @return array of `CNISDKDeliverableCategory`
 */
- (NSArray<CNISDKDeliverableCategory *> *)collectCategoriesForUseCase:(CNISDKDeliverableCategoryUseCase)useCase;

@end

NS_ASSUME_NONNULL_END
