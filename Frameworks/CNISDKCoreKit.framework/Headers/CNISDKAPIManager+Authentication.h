//
//  CNISDKAPIManager+Authentication.h
//  conichiSDK
//
//  Created by Anton Domashnev on 13/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKSignUpRequestInfo;
@class CNISDKExternalSignUpRequestInfo;
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
 *  Signs up to the conichi cloud with external id which enables to have no e-mail for registration
 *  @param requestInfo request info with external id, name, last name and optional e-mail for registrar
 *  @param completion block with two parameters
 *                    1. Created guest object
 *                    2. NSError object if request failed
 */
- (void)signUpWithExternalIDRequestInfo:(CNISDKExternalSignUpRequestInfo *)requestInfo completion:(nullable CNISDKGuestErrorBlock)completion;
/**
 *  Sign ins to the conichi's cloud with the given social network information
 *
 *  @param request    social sign in request with all necessary information
 *  @param completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)socialSignInWithRequest:(id<CNISDKSocialSignInRequestInfo>)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Signs in to conichi's cloud with given email & password
 *
 *  @param email      user email. Should be in valid format.
 *  @param password   user password. Should be at least 8 characters with at lease one digit and one letter.
 *  @param completion callback block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)signInWithEmail:(NSString *)email password:(NSString *)password completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Signs in to conichi's cloud with either email & password or externalID & password
 *  If externalID is provided, email won't be used.
 *
 *  @param email      user email. Should be in valid format.
 *  @param externalID user externalID. Should be used if user was registered with external ID.
 *  @param password   user password. Should be at least 8 characters with at lease one digit and one letter.
 *  @param completion callback block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)signInWithEmail:(nullable NSString *)email externalID:(nullable NSString *)externalID password:(NSString *)password completion:(CNISDKGuestErrorBlock)completion;

/**
 *  Signs in to the conichi cloud with external id
 *
 *  @param externalID externalID used for authentication, this can be any kind of string.
 *  @param completion callback block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)signInWithExternalID:(NSString *)externalID completion:(nullable CNISDKGuestErrorBlock)completion;
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
