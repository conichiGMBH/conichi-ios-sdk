//
//  CNISDKExternalSignUpRequestInfo.h
//  CNISDKCoreKit
//
//  Created by WLADYSLAW SURALA on 21/12/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import "CNISDKRequestInfo.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKExternalSignUpRequestInfo : NSObject <CNISDKRequestInfo>

/**
 external identifier used to anonymize users authenticating from external source, this can be any kind of string
 */
@property (nonatomic, strong) NSString *externalID;

/**
 external user e-mail, optional. If null, no e-mail will be passed to the server.
 */
@property (nonatomic, nullable, strong) NSString *externalEmail;

/**
 first name of user registering with this request info
 */
@property (nonatomic, strong) NSString *firstName;

/**
 last name of user registering with this request info
 */
@property (nonatomic, strong) NSString *lastName;

@end

NS_ASSUME_NONNULL_END
