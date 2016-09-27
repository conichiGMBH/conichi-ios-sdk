//
//  CNISDKVenueCard+Private.h
//  conichiSDK
//
//  Created by alex on 12/30/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKVenueCard.h"
#import "CNISDKMapping.h"
@class CNISDKVenueCardSection;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKVenueCard (Properties)

@property (nonatomic, strong, readwrite) NSString *name;
@property (nonatomic, strong, readwrite) NSString *category;
@property (nonatomic, strong, readwrite) NSString *headerImageURLString;
@property (nonatomic, strong, readwrite) NSString *iconImageURLString;
@property (nonatomic, strong, readwrite) NSNumber *position;
@property (nonatomic, strong, readwrite, nullable) NSString *footer;
@property (nonatomic, strong, readwrite) NSArray<CNISDKVenueCardSection *> *sections;

@end


@interface CNISDKVenueCard (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
