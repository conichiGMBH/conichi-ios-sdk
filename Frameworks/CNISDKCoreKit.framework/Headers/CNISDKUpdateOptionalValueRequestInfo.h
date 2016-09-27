//
//  CNISDKUpdateOptionalValueRequestInfo.h
//  conichiSDK
//
//  Created by linkov on 3/7/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKGuestRelatedRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKUpdateOptionalValueRequestInfo` class helps to build request to update guest's optional value
 */
@interface CNISDKUpdateOptionalValueRequestInfo : NSObject <CNISDKGuestRelatedRequestInfo>

/**
 *  New guest's optional value
 */
@property (nonatomic, strong) NSDictionary *optionalValue;

@end


NS_ASSUME_NONNULL_END
