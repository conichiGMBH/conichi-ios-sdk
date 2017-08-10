//
//  CNISDKDigitalKeyProviderInformation.h
//  CNISDKDigitalKeyCommon
//
//  Created by Anton Domashnev on 15/11/2016.
//
//

#import <CNISDKCoreKit/CNISDKCoreKit.h>


#define CNISDKDigitalKeyProviderInformationKeypath(NAME) CNISDKKeypath(CNISDKDigitalKeyProviderInformation, NAME)


NS_ASSUME_NONNULL_BEGIN


/**
 The enum with all supported digital key providers by conichi and iOS SDK
 
 - CNISDKDigitalKeyProviderUnknown: Unknown key provider (not a subject to use, likely its an internal error)
 - CNISDKDigitalKeyProviderMesserschmitt: Messerschmitt (http://www.messerschmitt.com)
 - CNISDKDigitalKeyProviderAssaAbloy: Assa Abloy (https://www.assaabloy.com)
 */
typedef NS_ENUM(NSInteger, CNISDKDigitalKeyProvider) {
    CNISDKDigitalKeyProviderUnknown,
    CNISDKDigitalKeyProviderMesserschmitt,
    CNISDKDigitalKeyProviderAssaAbloy
};

/**
 *  The `CNISDKDigitalKeyProviderInformation` defines entity that represents information about the digital key provider
 */
@interface CNISDKDigitalKeyProviderInformation : NSObject

/**
 * Name of provider
 */
@property (nonatomic, assign, readonly) CNISDKDigitalKeyProvider provider;


@end

NS_ASSUME_NONNULL_END
