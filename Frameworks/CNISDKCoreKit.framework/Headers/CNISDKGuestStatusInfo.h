//
//  CNISDKGuestStatusInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/22/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKTrackin;
@class CNISDKCheckin;

#import "CNISDKMacros.h"


#define CNISDKGuestStatusInfoKeypath(NAME) CNISDKKeypath(CNISDKGuestStatusInfo, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKGuestStatusInfo` defines entity that represents the status of the guest
 */
@interface CNISDKGuestStatusInfo : NSObject

/**
 *  Current open checkin on the backend if exists
 */
@property (nonatomic, strong, nullable, readonly) CNISDKCheckin *checkin;

/**
 *  Current open trackin on the backend if exists
 */
@property (nonatomic, strong, nullable, readonly) CNISDKTrackin *trackin;

/**
 *  Status of the guest https://github.com/conichiGMBH/backend-api/wiki/V1-UserStatus
 */
@property (nonatomic, copy, readonly) NSString *status;

@end

NS_ASSUME_NONNULL_END
