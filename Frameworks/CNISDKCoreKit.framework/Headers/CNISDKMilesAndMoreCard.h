//
//  CNISDKMilesAndMoreCard.h
//  CNISDKCoreKit
//
//  Created by Kai-Hong Tseng on 3/2/18.
//  Copyright © 2018 conichi. All rights reserved.
//

#import "CNISDKObject.h"
#import "CNISDKMacros.h"

#define CNISDKMilesAndMoreCardKeypath(NAME) CNISDKKeypath(CNISDKMilesAndMoreCard, NAME)

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMilesAndMoreCard` defines entity that represents Miles & More membership card
 */
@interface CNISDKMilesAndMoreCard : CNISDKObject

/**
 *  Card number which consists of 9 or 15 numbers, e.g. 992003020632539
 */
@property (nonatomic, copy, readonly) NSString *cardNumber;

/**
 *  Pin for encryption of the card
 */
@property (nonatomic, copy, readonly) NSString *pin;

/**
 *  Provider information, for now it's miles_and_more
 */
@property (nonatomic, copy, readonly) NSString *provider;

@end

NS_ASSUME_NONNULL_END
