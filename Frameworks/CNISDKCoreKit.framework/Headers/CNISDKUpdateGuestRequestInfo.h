//
//  CNISDKUpdateGuestRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKGuestRelatedRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKUpdateGuestRequestInfo` class helps to build request to perform update guest request
 */
@interface CNISDKUpdateGuestRequestInfo : NSObject <CNISDKGuestRelatedRequestInfo>

/**
 *  New guest's first name
 */
@property (nonatomic, copy, nullable) NSString *firstName;

/**
 *  New guest's last name
 */
@property (nonatomic, copy, nullable) NSString *lastName;

/**
 *  New guest's email
 */
@property (nonatomic, copy, nullable) NSString *email;

/**
 *  New guest's gender
 *  kCNISDKGuestGenderMale, kCNISDKGuestGenderFemale
 */
@property (nonatomic, copy, nullable) NSString *gender;

/**
 *  New guest's locale
 */
@property (nonatomic, copy, nullable) NSString *locale;

/**
 *  New guest's apple push notifications token
 */
@property (nonatomic, copy, nullable) NSString *apnToken;

/**
 *  New guest's payment token
 */
@property (nonatomic, copy, nullable) NSString *paymentToken;

/**
 *  New guest's date of birthday
 */
@property (nonatomic, strong, nullable) NSDate *dateOfBirthday;

/**
 *  New guest's nationality represented as ISO2 code
 *  Be aware RU and not 'ru' or 'RUS' or 'rus')
 */
@property (nonatomic, copy, nullable) NSString *nationalityISOCode;

/**
 *  Underlying update guest's related request infos
 */
@property (nonatomic, strong, nullable) NSArray<CNISDKGuestRelatedRequestInfo> *underlyingUpdateRequestInfos;

@end

/**
 *  The `CNISDKUpdateGuestRequestInfo+Deprecated` category contains all deprecated values
 */
@interface CNISDKUpdateGuestRequestInfo (Deprecated)

/**
 *  New guest's nationality
 */
@property (nonatomic, copy, nullable) NSString *nationality __deprecated_msg("use nationalityISOCode instead, if you still assign nationality if will not be passed to the backed");

@end

NS_ASSUME_NONNULL_END
