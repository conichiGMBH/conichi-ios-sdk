//
//  CNISDKSocialSignInRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKEnums.h"
#import "CNISDKRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKSocialSignInRequestInfo` protocols describes the class is using to perform sign in into conichi with social 
 *  provider
 */
@protocol CNISDKSocialSignInRequestInfo <CNISDKRequestInfo>

/**
 *  Social provider
 */
@property (nonatomic, assign, readonly) CNISDKAPIManagerProvider provider;

/**
 *  Social provider string name
 */
@property (nonatomic, copy, readonly) NSString *providerName;

/**
 *  Auth token to use provider's information
 */
@property (nonatomic, copy) NSString *authToken;

@end

/**
 *  The `CNISDKFacebookSignInRequestInfo` class helps to build request to perform sign in into conichi with Facebook
 */
@interface CNISDKFacebookSignInRequestInfo : NSObject <CNISDKSocialSignInRequestInfo>
@end

/**
 *  The `CNISDKXingSignInRequestInfo` class helps to build request to perform sign in into conichi with Xing
 */
@interface CNISDKXingSignInRequestInfo : NSObject <CNISDKSocialSignInRequestInfo>

/**
 *  Auth secret to use Xing's information
 */
@property (nonatomic, copy) NSString *authSecret;

@end

/**
 *  The `CNISDKLinkedInSignInRequestInfo` class helps to build request to perform sign in into conichi with LinkedIn
 */
@interface CNISDKLinkedInSignInRequestInfo : NSObject <CNISDKSocialSignInRequestInfo>
@end

NS_ASSUME_NONNULL_END
