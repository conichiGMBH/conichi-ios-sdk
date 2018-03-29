//
//  CNISDKGuestStay+Private.h
//  CNISDKCoreKit
//
//  Created by ShengHua Wu on 06/11/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#import "CNISDKGuestStay.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKGuestStay (Properties)

@property (nonatomic, strong, readwrite, nullable) NSDate *arrivalDate;
@property (nonatomic, strong, readwrite) NSDate *departureDate;
@property (nonatomic, assign, readwrite, getter=isMobileCheckin) BOOL mobileCheckin;
@property (nonatomic, assign, readwrite, getter=isCompleted) BOOL completed;
@property (nonatomic, strong, readwrite, nullable) NSNumber *rating;
@property (nonatomic, strong, readwrite, nullable) NSString *reservationNumber;
@property (nonatomic, strong, readwrite, nullable) NSString *checkinConichiID;
@property (nonatomic, strong, readwrite) CNISDKVenue *associatedVenue;
@property (nonatomic, strong, readwrite, nullable) CNISDKPreCheckinRequest *preCheckinRequest;

@end


@interface CNISDKGuestStay (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
