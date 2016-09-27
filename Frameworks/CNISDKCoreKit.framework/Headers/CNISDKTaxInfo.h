//
//  CNISDKTaxInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/9/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKMacros.h"


#define CNISDKTaxInfoKeypath(NAME) CNISDKKeypath(CNISDKTaxInfo, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKTaxInfo` defines entity that represents information needs for city tax form
 */
@interface CNISDKTaxInfo : NSObject

/**
 *  Name of the city of birth
 */
@property (nonatomic, copy, readonly, nullable) NSString *cityOfBirth;

/**
 * The country code of the country of birth in format ISO 3166-1
 * @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, copy, readonly, nullable) NSString *countryCodeOfBirth;

/**
 *  Guest tax identification number
 */
@property (nonatomic, copy, readonly, nullable) NSString *taxIdentificationNumber;

/**
 *  Name of the tax office
 */
@property (nonatomic, copy, readonly, nullable) NSString *taxOfficeName;

@end

NS_ASSUME_NONNULL_END
