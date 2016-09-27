//
//  CNISDKAPIManager+Authentication.h
//  conichiSDK
//
//  Created by Anton Domashnev on 13/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKSignUpRequestInfo;

@protocol CNISDKSocialSignInRequestInfo;


NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+Authentication` is a category on `CNISDKAPIManager` that extends it's functionality with authentication methods
 */
@interface CNISDKAPIManager (Authentication)

/**
 *  Sign ups to the conichi's cloud with given account information
 *  @param request    sign up request with all necessary information
 *  @param completion block with two parameters
 *                    1. Created guest object
 *                    2. NSError object if request failed
 *  @warning Check for existed error anyway
 */
- (void)signUpWithRequest:(CNISDKSignUpRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Sign ins to the conichi's cloud with the given social network information
 *
 *  @param request    social sign in request with all necessary information
 *  @param completion block with two parameters
 *                    1. Created guest object
 *                    2. NSError object if request failed
 */
- (void)socialSignInWithRequest:(id<CNISDKSocialSignInRequestInfo>)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Signs in to the conichi's cloud with given email & password
 *
 *  @param email      user email. Should in valid format.
 *  @param password   user password. Should be at least 8 characters with at lease one digit and one letter.
 *  @param completion callback block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)signInWithEmail:(NSString *)email password:(NSString *)password completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Logs out Guest from the Conichi's server
 *
 *  @param completion callback block with two parameters
 *                    1. Success flag - whether request succeeded or not
 *                    2. NSError object if request failed
 */
- (void)logOutWithCompletion:(nullable CNISDKBooleanErrorBlock)completion;


@end

NS_ASSUME_NONNULL_END
