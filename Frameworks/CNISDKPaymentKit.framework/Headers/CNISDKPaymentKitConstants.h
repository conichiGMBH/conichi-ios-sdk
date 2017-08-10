//
//  CNISDKPaymentKitConstants.h
//  CNISDKPaymentKit
//
//  Created by Anton Domashnev on 07.07.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKGuest;
@class CNISDKCreditCard;


NS_ASSUME_NONNULL_BEGIN

/**
 *  Typedef for CNISDKCreditCard specific result/error blocks also provides the CNISDKGuest that associated with the card
 *
 *  @param guest guest object associated with the card
 *  @param card  any card object
 *  @param error error object
 */
typedef void (^CNISDKGuestCreditCardErrorBlock)(CNISDKGuest *_Nullable guest, CNISDKCreditCard *_Nullable card, NSError *_Nullable error);

NS_ASSUME_NONNULL_END
