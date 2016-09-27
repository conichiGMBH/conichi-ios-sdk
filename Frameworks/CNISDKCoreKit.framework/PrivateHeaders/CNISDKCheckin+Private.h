//
//  CNISDKCheckin+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/17/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCheckin.h>

#import "CNISDKMapping.h"

@class CNISDKReservation;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKCheckin (Properties)

@property (nonatomic, copy, readwrite) NSString *status;

@property (nonatomic, strong, readwrite) NSDate *createdAt;

@property (nonatomic, strong, readwrite, nullable) NSDate *closedAt;

@property (nonatomic, strong, readwrite, nullable) NSNumber *rating;

@property (nonatomic, strong, readwrite) CNISDKVenue *associatedVenue;

@property (nonatomic, strong, readwrite, nullable) CNISDKReservation *reservation;

@end


@interface CNISDKCheckin (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
