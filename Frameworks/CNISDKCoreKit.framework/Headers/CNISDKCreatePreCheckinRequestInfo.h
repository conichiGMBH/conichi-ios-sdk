//
//  CNISDKCreatePreCheckinRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 20/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKDeliverableCountableItem;

#import "CNISDKRequestInfo.h"
#import "CNISDKEnums.h"


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKCreatePreCheckinRequestInfo` class helps to build request to create pre checkin request
 */
@interface CNISDKCreatePreCheckinRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  Venue's conichi id to send pre checkin request to
 */
@property (nonatomic, copy) NSString *venueConichiID;

/**
 *  Guest's arrive date
 */
@property (nonatomic, copy) NSDate *arriveDate;

/**
 *  Guest's departure date
 */
@property (nonatomic, copy) NSDate *departureDate;

/**
 *  Guest's arrive time (optional)
 */
@property (nonatomic, assign) CNISDKPreCheckinRequestArriveTime arriveTime;

/**
 *  Guest's requested items (optional)
 */
@property (nonatomic, strong, nullable) NSArray<CNISDKDeliverableCountableItem *> *requestedItems;

/**
 *  Guest's reservation number (optional)
 */
@property (nonatomic, copy, nullable) NSString *reservationNumber;

/**
 *  Guest's booked room type (optional)
 */
@property (nonatomic, copy, nullable) NSString *bookedRoomType;

/**
 *  Guest's travel purpose
 */
@property (nonatomic, assign) CNISDKPreCheckinRequestTravelPurpose travelPurpose;

/**
 *  Converts CNISDKPreCheckinRequestArriveTime enum value into NSString value
 *
 *  @param arriveTime enum arrive time value
 *
 *  @return string arrive time value
 */
+ (nullable NSString *)convertArriveTimeEnumToString:(CNISDKPreCheckinRequestArriveTime)arriveTime;

/**
 *  Converts CNISDKPreCheckinRequestTravelPurpose enum value into NSString value
 *
 *  @param travelPurpose enum travel purpose value
 *
 *  @return string travel purpose value
 */
+ (nullable NSString *)convertTravelPurposeEnumToString:(CNISDKPreCheckinRequestTravelPurpose)travelPurpose;

@end

NS_ASSUME_NONNULL_END
