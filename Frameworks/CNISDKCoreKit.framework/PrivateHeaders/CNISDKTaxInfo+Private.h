//
//  CNISDKTaxInfo+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/9/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKTaxInfo.h"

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKTaxInfo+Properties` exposes the entity property with readwrite access
 */
@interface CNISDKTaxInfo (Properties)

/**
 *  Name of the city of birth
 */
@property (nonatomic, copy, readwrite, nullable) NSString *cityOfBirth;

/**
 * The country code of the country of birth in format ISO 3166-1
 * @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, copy, readwrite, nullable) NSString *countryCodeOfBirth;

/**
 *  Guest tax identification number
 */
@property (nonatomic, copy, readwrite, nullable) NSString *taxIdentificationNumber;

/**
 *  Name of the tax office
 */
@property (nonatomic, copy, readwrite, nullable) NSString *taxOfficeName;

@end

/**
 *  The `CNISDKTaxInfo+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKTaxInfo (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
