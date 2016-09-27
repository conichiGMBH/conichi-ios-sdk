//
//  CNISDKUpdatePasswordRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKUpdatePasswordRequestInfo` class helps to build request to update guest's password
 */
@interface CNISDKUpdatePasswordRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  New guest's account password
 */
@property (nonatomic, copy) NSString *updatedPassword;

/**
 *  Current guest's account password
 */
@property (nonatomic, copy) NSString *oldPassword;

@end

NS_ASSUME_NONNULL_END
