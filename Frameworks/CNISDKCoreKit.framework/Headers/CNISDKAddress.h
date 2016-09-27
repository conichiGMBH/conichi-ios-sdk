//
//  CNISDKAddress.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKMacros.h"


#define CNISDKAddressKeypath(NAME) CNISDKKeypath(CNISDKAddress, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  Address's type
 */
typedef NS_ENUM(NSInteger, CNISDKAddressType) {
    /**
     *  Address type is unknown
     */
    CNISDKAddressTypeUnknown,

    /**
     *  Address belongs to the private postal address
     */
    CNISDKAddressTypePersonal,

    /**
     *  Address belongs to the business postal address
     */
    CNISDKAddressTypeBusiness
};

/**
 *  The `CNISDKAddress` defines entity that represents postal address
 */
@interface CNISDKAddress : NSObject

/**
 *  If the object is class of CNISDKPersonalAddress it returns CNISDKAddressTypePersonal
 *  If the object is class of CNISDKPersonalAddress it returns CNISDKAddressTypeBusiness
 *  Otherwise it returns CNISDKAddressTypeUnknown
 *  @see CNISDKAddressType
 */
@property (nonatomic, assign, readonly) CNISDKAddressType type;

/**
 *  Postal address street name
 */
@property (nonatomic, strong, readonly) NSString *street;

/**
 *  Postal address zip code
 */
@property (nonatomic, strong, readonly) NSString *zip;

/**
 *  Postal address city name
 */
@property (nonatomic, strong, readonly) NSString *city;

/**
 * The country code of the address in format ISO 3166-1
 * @see https://en.wikipedia.org/wiki/ISO_3166-1
 */
@property (nonatomic, strong, readonly) NSString *countryCode;

@end

NS_ASSUME_NONNULL_END
