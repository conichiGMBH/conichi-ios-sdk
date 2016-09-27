//
//  CNISDKPreference+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKPreference.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPreference (Properties)

@property (nonatomic, strong, readwrite) NSString *name;
@property (nonatomic, strong, readwrite) NSString *code;
@property (nonatomic, strong, readwrite) NSNumber *displayOrder;
@property (nonatomic, strong, readwrite) NSString *categoryConichiID;
@property (nonatomic, strong, readwrite) NSString *categoryCode;
@property (nonatomic, assign, getter=isSelected, readwrite) BOOL selected;
@property (nonatomic, assign, getter=isPopular, readwrite) BOOL popular;
@property (nonatomic, assign, getter=isPublic, readwrite) BOOL public;

@end


@interface CNISDKPreference (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
