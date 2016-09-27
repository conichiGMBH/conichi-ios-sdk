//
//  CNISDKPreCheckinRequest+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 11/10/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKPreCheckinRequest.h"
#import "CNISDKMapping.h"

@class CNISDKDeliverableCountableItem;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKPreCheckinRequestArriveTimeEarlyMorning;
extern NSString *const kCNISDKPreCheckinRequestArriveTimeMorning;
extern NSString *const kCNISDKPreCheckinRequestArriveTimeMidday;
extern NSString *const kCNISDKPreCheckinRequestArriveTimeAfternoon;
extern NSString *const kCNISDKPreCheckinRequestArriveTimeEvening;
extern NSString *const kCNISDKPreCheckinRequestArriveTimeNight;


@interface CNISDKPreCheckinRequest (Properties)

@property (nonatomic, strong, readwrite) NSDate *arriveDate;
@property (nonatomic, strong, readwrite) NSDate *departureDate;
@property (nonatomic, strong, readwrite) NSString *status;
@property (nonatomic, strong, readwrite) NSNumber *arriveTime;
;
@property (nonatomic, strong, readwrite) CNISDKVenue *venue;
@property (nonatomic, strong, readwrite) NSArray<CNISDKDeliverableCountableItem *> *requestedItems;

@end


@interface CNISDKPreCheckinRequest (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
