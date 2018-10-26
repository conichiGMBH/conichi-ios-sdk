//
//  CNISDKBusinessAddress.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/23/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKAddress.h"

#import "CNISDKMacros.h"


#define CNISDKBusinessAddressKeypath(NAME) CNISDKKeypath(CNISDKBusinessAddress, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKBusinessAddress` defines entity that represents business postal address
 */
@interface CNISDKBusinessAddress : CNISDKAddress

/**
 *  Postal address business name
 */
@property (nonatomic, strong, readonly) NSString *businessName;

/**
 *  Business VAT ID
 */
@property (nonatomic, strong, readonly) NSString *businessVAT;

@end

NS_ASSUME_NONNULL_END
