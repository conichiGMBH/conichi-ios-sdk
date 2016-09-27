//
//  CNISDKObject.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/*!
 The `CNISDKObject` defines entity that represents base model class with conichiID property
 */
@interface CNISDKObject : NSObject

/**
 *  Unique identifier for all conichi sdk objects
 */
@property (nonatomic, strong, readonly) NSString *conichiID;

@end

NS_ASSUME_NONNULL_END
