//
//  CNISDKPMS.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKConfiguration;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKPMS' extends the sdk with the property management system functionality.
 */
@interface CNISDKPMS : NSObject <CNISDKKit>

/**
 *  Configuration that was used to initialize kit instance
 */
@property (nonatomic, strong, readonly) CNISDKConfiguration *configuration;

@end

NS_ASSUME_NONNULL_END
