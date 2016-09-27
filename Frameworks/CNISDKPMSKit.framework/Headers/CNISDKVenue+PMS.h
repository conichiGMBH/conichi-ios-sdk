//
//  CNISDKVenue+PMS.h
//  conichiSDK
//
//  Created by Anton Domashnev on 26/05/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKVenue+PMS` extends the entity with the PMS related information
 */
@interface CNISDKVenue (PMS)

/**
 *  If venue has PMS integration
 */
@property (nonatomic, assign, getter=isPMSIntegrated, readonly) BOOL PMSIntegrated;

@end

NS_ASSUME_NONNULL_END
