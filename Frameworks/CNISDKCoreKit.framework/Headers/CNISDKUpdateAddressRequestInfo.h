//
//  CNISDKUpdateAddressRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKGuestRelatedRequestInfo.h"

/**
 *  The `CNISDKUpdateAddressRequestInfo` protocol describes request to update guest's address request
 */
@protocol CNISDKUpdateAddressRequestInfo <CNISDKGuestRelatedRequestInfo>

/**
 *  New address's street
 */
@property (nonatomic, copy, nullable) NSString *street;

/**
 *  New address's city
 */
@property (nonatomic, copy, nullable) NSString *city;

/**
 *  New address's zip
 */
@property (nonatomic, copy, nullable) NSString *zip;

/**
 *  New address's country code in format ISO 3166-1
 *  @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, copy, nullable) NSString *countryCode;

@end

/**
 *  The `CNISDKUpdatePersonalAddressRequestInfo` class helps to build request to update guest's personal address request
 */
@interface CNISDKUpdatePersonalAddressRequestInfo : NSObject <CNISDKUpdateAddressRequestInfo>

@end

/**
 *  The `CNISDKUpdateBusinessAddressRequestInfo` class helps to build request to update guest's business address request
 */
@interface CNISDKUpdateBusinessAddressRequestInfo : NSObject <CNISDKUpdateAddressRequestInfo>

/**
 *  New address's business name
 */
@property (nonatomic, copy, nullable) NSString *businessName;

@end
