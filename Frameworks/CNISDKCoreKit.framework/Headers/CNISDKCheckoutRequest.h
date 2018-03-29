//
//  CNISDKCheckoutRequest.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKGuest;
@class CNISDKVenue;
@class CNISDKDeliverableItem;
@class CNISDKDeliverableCheckoutItem;

#import "CNISDKMacros.h"


#define CNISDKCheckoutRequestKeypath(NAME) CNISDKKeypath(CNISDKCheckoutRequest, NAME)


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISDKCheckoutRequestStatePending;
extern NSString *const kCNISDKCheckoutRequestStateReady;
extern NSString *const kCNISDKCheckoutRequestStateCancelled;

/**
 *  The `CNISDKCheckoutRequest` defines entity that represents guest request to checkout from hotel created on the side
 *  of guest iOS app
 */
@interface CNISDKCheckoutRequest : CNISDKObject

/**
 *  Checkout request's state
 *  see constants kCNISDKCheckoutRequestStatePending or kCNISDKCheckoutRequestStateReady
 */
@property (nonatomic, copy, readonly) NSString *state;

/**
 *  Venue for which checkout request was sent
 */
@property (nonatomic, strong, readonly) CNISDKVenue *venue;

/**
 *  Guest that sent checkout request
 */
@property (nonatomic, strong, readonly) CNISDKGuest *user;

/**
 *  Items associated to checkout request that guest wants to pay
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKDeliverableItem *> *deliverableItems;

@end

NS_ASSUME_NONNULL_END
