//
//  CNISDKPreferenceUpdateResult.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/21/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKEnums.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKPreferenceUpdateResult` defines entity that represents preference update result if use batch update
 */
@interface CNISDKPreferenceUpdateResult : NSObject <NSCopying>

/**
 *  Updated preference conichiID
 */
@property (nonatomic, copy, readonly) NSString *preferenceConichiID;

/**
 *  Whether update is succeeded or failed
 */
@property (nonatomic, strong, getter=isSucceeded, readonly) NSNumber *succeeded;

/**
 *  Optional error if update is failed
 */
@property (nonatomic, strong, readonly, nullable) NSError *error;

@end

NS_ASSUME_NONNULL_END
