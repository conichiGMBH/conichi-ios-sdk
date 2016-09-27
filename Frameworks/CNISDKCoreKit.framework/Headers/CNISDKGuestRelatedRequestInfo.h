//
//  CNISDKGuestRelatedRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/8/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Describes the request info that updates any guest information
 */
@protocol CNISDKGuestRelatedRequestInfo <CNISDKRequestInfo>

- (NSDictionary *)updatedGuestValueKeys;

@end

NS_ASSUME_NONNULL_END
