//
//  CNISDKDigitalKeyProviderInformation+Private.h
//  CNISDKDigitalKeyCommon
//
//  Created by Anton Domashnev on 15/11/2016.
//
//

#import "CNISDKDigitalKeyProviderInformation.h"

#import <CNISDKCoreKit/CNISDKMapping.h>


NS_ASSUME_NONNULL_BEGIN


/**
 *  The `CNISDKDigitalKeyProviderInformation+Private` exposes the entity property with readwrite access
 */
@interface CNISDKDigitalKeyProviderInformation (Properties)

/**
 * Name of provider
 */
@property (nonatomic, copy, readwrite) NSString *name;

@end

/**
 *  The `CNISDKDigitalKeyProviderInformation+Mapping` extends the entity with CNISDKMapping protocol
 */
@interface CNISDKDigitalKeyProviderInformation (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
