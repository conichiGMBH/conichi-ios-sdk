//
//  CNISDKUpdateReservationMasterBillRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 22/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKDeliverableCountableItem;


NS_ASSUME_NONNULL_BEGIN


/**
 *  The `CNISDKUpdateReservationMasterBillRequestInfo` class helps to build request to update reservation's master bill
 */
@interface CNISDKUpdateReservationMasterBillRequestInfo : NSObject <CNISDKRequestInfo>

/**
 *  Conichi id of the reservation to update master bill of
 */
@property (nonatomic, copy) NSString *reservationID;

/**
 *  Conichi deliverable items to be added to the master bill
 */
@property (nonatomic, strong) NSArray<CNISDKDeliverableCountableItem *> *conichiDeliverables;

@end

NS_ASSUME_NONNULL_END
