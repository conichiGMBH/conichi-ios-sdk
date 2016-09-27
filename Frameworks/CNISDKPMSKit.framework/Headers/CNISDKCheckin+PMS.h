//
//  CNISDKCheckin+PMS.h
//  conichiSDK
//
//  Created by Anton Domashnev on 16/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKReservation;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKCheckin+PMS` extends the entity with the PMS related information
 */
@interface CNISDKCheckin (PMS)

/**
 *  If mobile checkin, than it should have associated reservation object
 */
@property (nonatomic, copy, readonly, nullable) CNISDKReservation *reservation;

@end

NS_ASSUME_NONNULL_END
