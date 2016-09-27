//
//  CNISDKPropertyHelper+Mapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/26/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKPropertyHelper.h"

@class CNISDKAttributeMapping;


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPropertyHelper (Mapping)

+ (void)setPropertyWithMapping:(CNISDKAttributeMapping *)mapping onObject:(id)object fromRepresentation:(id<CNISDKObjectRepresentation>)representation;

@end

NS_ASSUME_NONNULL_END
