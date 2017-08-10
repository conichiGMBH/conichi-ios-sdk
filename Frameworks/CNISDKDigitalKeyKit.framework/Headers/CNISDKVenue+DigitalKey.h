//
//  CNISDKVenue+DigitalKey.h
//  CNISDKDigitalKeyCommon
//
//  Created by Anton Domashnev on 15/11/2016.
//
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>

@class CNISDKDigitalKeyProviderInformation;


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKVenue+PMS` extends the entity with the digital key related information
 */
@interface CNISDKVenue (DigitalKey)

/**
 *  Contains the information about integrated digital key into the venue
 */
@property (nonatomic, strong, readonly, nullable) CNISDKDigitalKeyProviderInformation *digitalKeyInformation;

@end

NS_ASSUME_NONNULL_END
