//
//  CNISDKSignUpRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/27/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKSignUpRequestInfo` class helps to build request to perform sign up into conichi with email
 */
@interface CNISDKSignUpRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  First name for the newly created account profile
 */
@property (nonatomic, copy) NSString *firstName;

/**
 *  Last name for the newly created account profile
 */
@property (nonatomic, copy) NSString *lastName;

/**
 *  Password for the newly created account
 */
@property (nonatomic, copy) NSString *password;

/**
 *  Email for the newly created account
 */
@property (nonatomic, copy) NSString *email;

/**
 *  Data represents the avatar image for newly created account profile
 */
@property (nonatomic, strong, nullable) NSData *avatarImageData;

@end

NS_ASSUME_NONNULL_END
