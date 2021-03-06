//
//  CNISDKUpdateTravelDocumentRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/28/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKGuestRelatedRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKUpdateTravelDocumentRequestInfo` class helps to build request to update guest's travel document request
 */
@interface CNISDKUpdateTravelDocumentRequestInfo : NSObject <CNISDKGuestRelatedRequestInfo>

/**
 *  New document's type
 */
@property (nonatomic, copy, nullable) NSString *documentType;

/**
 *  New document's number
 */
@property (nonatomic, copy, nullable) NSString *documentNumber;

/**
 *  New document's authority
 */
@property (nonatomic, copy, nullable) NSString *authority;

/**
 *  New document's date of expiry
 */
@property (nonatomic, copy, nullable) NSDate *dateOfExpiry;

/**
 *  New document's date of issue
 */
@property (nonatomic, copy, nullable) NSDate *dateOfIssue;

/**
 *  New document's place of Issue
 */
@property (nonatomic, copy, nullable) NSString *placeOfIssue;

/**
 *  New document's place of Birth
 */
@property (nonatomic, copy, nullable) NSString *placeOfBirth;

/**
 *  New document's issuing country
 */
@property (nonatomic, copy, nullable) NSString *issuingCountry;

@end

NS_ASSUME_NONNULL_END
