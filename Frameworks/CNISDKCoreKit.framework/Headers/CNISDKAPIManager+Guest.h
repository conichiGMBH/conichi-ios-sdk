//
//  CNISDKAPIManager+Guest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKAPIManager.h"

@class CNISDKUpdateGuestRequestInfo;
@class CNISDKUpdatePersonalAddressRequestInfo;
@class CNISDKUpdateBusinessAddressRequestInfo;
@class CNISDKUpdateTravelDocumentRequestInfo;
@class CNISDKUpdatePasswordRequestInfo;
@class CNISDKUpdateTaxInfoRequestInfo;
@class CNISDKUpdateOptionalValueRequestInfo;

#import "CNISDKMacros.h"
#import "CNISDKAPIManagerConstants.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  `CNISDKAPIManager+Guest` is a category in CNISDKAPIManager that extends it's functionality with guest related methods
 */
@interface CNISDKAPIManager (Guest)

/**
 *  Resets password for the Guest with given email. It send an email to the given address with instructions
 *
 *  @param email      guest's email to send instructions to
 *  @param completion completion block with two parameters
 *                    1. Success flag - whether request succeeded or not
 *                    2. NSError object if request failed
 */
- (void)resetPasswordForEmail:(NSString *)email completion:(nullable CNISDKBooleanErrorBlock)completion;


/**
 *  Updates optional values for the current guest
 *
 *  @param request    request with optional
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateOptionalValuesWithRequest:(CNISDKUpdateOptionalValueRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Updates password for the current guest
 *
 *  @param request    request with information about current and new password
 *  @param completion completion block with two parameters
 *                    1. Success flag - whether request succeeded or not
 *                    2. NSError object if request failed
 */
- (void)updatePasswordWithRequest:(CNISDKUpdatePasswordRequestInfo *)request completion:(nullable CNISDKBooleanErrorBlock)completion;

/**
 *  Updates current guest's properties
 *
 *  @param request    request with updated guest information
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateCurrentGuestWithRequest:(CNISDKUpdateGuestRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Updates current guest's personal address
 *
 *  @param request    request with new personal address info
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateCurrentGuestPersonalAddressWithRequest:(CNISDKUpdatePersonalAddressRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Updates current guest's business address
 *
 *  @param request    request with new business address info
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateCurrentGuestBusinessAddressWithRequest:(CNISDKUpdateBusinessAddressRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Updates current guest's travel document
 *
 *  @param request    request with new travel document info
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateCurrentGuestTravelDocumentWithRequest:(CNISDKUpdateTravelDocumentRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Updates current guest's tax info
 *
 *  @param request    request with new tax info
 *  @param completion completion block with two parameters
 *                    1. Guest object
 *                    2. NSError object if request failed
 */
- (void)updateCurrentGuestTaxInfoWithRequest:(CNISDKUpdateTaxInfoRequestInfo *)request completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Update current guest's avatar
 *
 *  @param avatarData UIImageJPEG or UIImagePNG representation of avatar image
 *  @param completion callback block with two parameters
 *                    1. Updated guest object
 *                    2. NSError object if request failed
 */
- (void)updateGuestAvatar:(NSData *)avatarData completion:(nullable CNISDKGuestErrorBlock)completion;

/**
 *  Fetches current status for the given guest
 *  @see https://github.com/conichiGMBH/backend-api/wiki/V1-UserStatus
 *
 *  @param guest      current guest object
 *  @param completion callback block with two parameters
 *                    1. CNISDKGuestStatusInfo object
 *                    2. NSError object if request failed
 */
- (void)fetchCurrentStatusForGuest:(CNISDKGuest *)guest withCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fethes current session's guest information
 *
 *  @param completion callback block with two parameters
 *                    1. current CNISDKGuest object
 *                    2. NSError object if request failed
 */
- (void)fetchCurrentGuestWithCompletion:(nullable CNISDKIDErrorBlock)completion;

/**
 *  Fetches current status for the given guest
 *  @see https://github.com/conichiGMBH/backend-api/wiki/V1-UserStatus
 *
 *  @param guest      guest object
 *  @param completion callback block with two parameters
 *                    1. CNISDKGuestStatusInfo object if exists
 *                    2. NSError object if request failed
 */
- (void)fetchStatusForGuest:(CNISDKGuest *)guest completion:(nullable CNISDKIDErrorBlock)completion;

@end

NS_ASSUME_NONNULL_END
