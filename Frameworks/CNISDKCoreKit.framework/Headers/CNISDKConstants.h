//
//  CNISDKConstants.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/10/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKSession;
@class CNISDKCreditCard;
@class CNISDKGuest;

/**
 *  General typedef for result/error blocks
 *
 *  @param object any object
 *  @param error  error object
 */
typedef void (^CNISDKIDErrorBlock)(id object, NSError *error);

/**
 *  Typedef for string specific result/error blocks
 *
 *  @param result any string
 *  @param error  error object
 */
typedef void (^CNISDKStringErrorBlock)(NSString *result, NSError *error);

/**
 *  Typedef for integer specific result/error blocks
 *
 *  @param result any integer
 *  @param error  error object
 */
typedef void (^CNISDKIntegerErrorBlock)(NSInteger result, NSError *error);

/**
 *  Typedef for boolean specific result/error blocks
 *
 *  @param success any boolean
 *  @param error   error object
 */
typedef void (^CNISDKBooleanErrorBlock)(BOOL success, NSError *error);

/**
 *  Typedef for CNISDKSession specific result/error blocks
 *
 *  @param session any session object
 *  @param error   error object
 */
typedef void (^CNISDKSessionErrorBlock)(CNISDKSession *session, NSError *error);

/**
 *  Typedef for CNISDKGuest specific result/error blocks
 *
 *  @param guest any guest object
 *  @param error error object
 */
typedef void (^CNISDKGuestErrorBlock)(CNISDKGuest *guest, NSError *error);

/**
 *  General typedef for blocks without any parameters
 */
typedef void (^CNISDKEmptyBlock)();

/**
 *  General typedef for blocks with boolean parameter
 */
typedef void (^CNISDKBooleanBlock)(BOOL result);

/**
 *  General typedef for blocks with boolean parameter
 */
typedef void (^CNISDKErrorBlock)(NSError *error);

/**
 *  Default currency code is used by SDK
 */
extern NSString *const kCNISDKDefaultCurrencyCode;

/**
 *  Default requests time out used by SDK
 */
extern NSTimeInterval const kCNISDKDefaultRequestTimeoutInterval;
