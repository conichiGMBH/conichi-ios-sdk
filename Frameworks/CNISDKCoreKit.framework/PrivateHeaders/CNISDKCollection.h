//
//  CNISDKCollection.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/15/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKCollection <NSObject>

/**
 * It must be collection of values. 
 * @discussion Maybe we could use NSFastEnumeration protocol instead of our custom. But NSDictionary also conforms to NSFastEnumeration but it
 *             can't be serialized to NSArray
 */
- (id<NSFastEnumeration>)valuesCollection;

@end

NS_ASSUME_NONNULL_END
