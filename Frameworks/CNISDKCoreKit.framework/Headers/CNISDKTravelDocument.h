//
//  CNISDKTravelDocument.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKMacros.h"


#define CNISDKTravelDocumentKeypath(NAME) CNISDKKeypath(CNISDKTravelDocument, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKTravelDocument` class represents the guest's travel document.
 */
@interface CNISDKTravelDocument : NSObject

/**
 *  Travel document's type
 *  e.x. passport
 */
@property (nonatomic, strong, readonly, nullable) NSString *type;

/**
 *  Travel document's number
 */
@property (nonatomic, strong, readonly, nullable) NSString *number;

/**
 *  Travel document's date of Issue in ISO8601 date format
 */
@property (nonatomic, strong, readonly, nullable) NSDate *dateOfIssue;

/**
 *  Travel document's date of Expiry in ISO8601 date format
 */
@property (nonatomic, strong, readonly, nullable) NSDate *dateOfExpiry;

/**
 *  Travel document's authority
 */
@property (nonatomic, strong, readonly, nullable) NSString *authority;

/**
 *  New document's place of Issue
 */
@property (nonatomic, strong, readonly, nullable) NSString *placeOfIssue;

/**
 *  New document's place of birth
 */
@property (nonatomic, strong, readonly, nullable) NSString *placeOfBirth;

/**
 *  New document's issuing country
 */
@property (nonatomic, strong, readonly, nullable) NSString *issuingCountry;

@end

NS_ASSUME_NONNULL_END
