//
//  CNISDKReservationGuest+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 19/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKReservationGuest.h"

#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKReservationGuest (Properties)

/**
 *  First name of the guest
 */
@property (nonatomic, copy, nullable, readwrite) NSString *firstName;

/**
 *  Last name of the guest
 */
@property (nonatomic, copy, nullable, readwrite) NSString *lastName;

/**
 *  Unique identifier of the guest inside the PMS
 */
@property (nonatomic, copy, readwrite) NSString *profileCode;

@end

/**
 *  The `CNISDKReservationGuest+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKReservationGuest (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
