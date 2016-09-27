//
//  CNISDKReservationGuest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 19/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKReservationGuest;


NS_ASSUME_NONNULL_BEGIN

#define CNISDKReservationGuestKeypath(NAME) CNISDKKeypath(CNISDKReservationGuest, NAME)

/**
 *  The `CNISDKReservationGuest` defines entity that represents information about the guest for the specific reservation
 */
@interface CNISDKReservationGuest : NSObject

/**
 *  First name of the guest
 */
@property (nonatomic, copy, nullable, readonly) NSString *firstName;

/**
 *  Last name of the guest
 */
@property (nonatomic, copy, nullable, readonly) NSString *lastName;

/**
 *  Unique identifier of the guest inside the PMS
 */
@property (nonatomic, copy, readonly) NSString *profileCode;

@end

NS_ASSUME_NONNULL_END
