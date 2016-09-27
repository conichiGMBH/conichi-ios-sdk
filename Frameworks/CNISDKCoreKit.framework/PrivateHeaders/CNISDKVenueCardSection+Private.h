//
//  CNISDKVenueCardSection+Private.h
//  conichiSDK
//
//  Created by alex on 12/30/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKVenueCardSection.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKVenueCardSection (Properties)

@property (nonatomic, strong, readwrite) NSString *title;
@property (nonatomic, strong, readwrite) NSString *content;

@end


@interface CNISDKVenueCardSection (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
