//
//  CNISDKUpdateTaxInfoRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/10/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKGuestRelatedRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKUpdateTaxInfoRequestInfo` class helps to build request to update guest's tax information
 */
@interface CNISDKUpdateTaxInfoRequestInfo : NSObject <CNISDKGuestRelatedRequestInfo>

/**
 *  Updated city of birth
 */
@property (nonatomic, copy, nullable) NSString *cityOfBirth;

/**
 * Updated country code of birth in format ISO 3166-1
 * @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, copy, nullable) NSString *countryCodeOfBirth;

/**
 *  Updated guest tax identification number
 */
@property (nonatomic, copy, nullable) NSString *taxIdentificationNumber;

/**
 *  Updated tax's office name
 */
@property (nonatomic, copy, nullable) NSString *taxOfficeName;

@end

NS_ASSUME_NONNULL_END
