//
//  CNISDKCheckoutRequest+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 8/5/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKCheckoutRequest.h"

#import "CNISDKObjectMapping.h"


@interface CNISDKCheckoutRequest (Properties)

@property (nonatomic, copy, readwrite) NSString *state;

@property (nonatomic, strong, readwrite) CNISDKVenue *venue;
@property (nonatomic, strong, readwrite) CNISDKGuest *user;
@property (nonatomic, strong, readwrite) NSArray *deliverableItems;

@end


@interface CNISDKCheckoutRequest (Mapping) <CNISDKMapping>

@end
