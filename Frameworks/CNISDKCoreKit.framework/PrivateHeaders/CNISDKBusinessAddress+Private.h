//
//  CNISDKBusinessAddress+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 9/23/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKBusinessAddress.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKBusinessAddress (Properties)

@property (nonatomic, strong, readwrite) NSString *businessName;

@end


@interface CNISDKBusinessAddress (Mapping) <CNISDKMapping>

+ (CNISDKObjectMapping *)creditCardBusinessAddressMapping;

@end

NS_ASSUME_NONNULL_END
