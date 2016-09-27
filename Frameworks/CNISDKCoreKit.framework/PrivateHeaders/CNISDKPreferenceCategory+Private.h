//
//  CNISDKPreferenceCategory+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/15/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKPreferenceCategory.h"
#import "CNISDKMapping.h"

@class CNISDKPreference;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKPreferenceCategory (Properties)

@property (nonatomic, strong, readwrite) NSString *name;
@property (nonatomic, strong, readwrite) NSString *code;
@property (nonatomic, strong, readwrite) NSNumber *displayOrder;
@property (nonatomic, assign, readwrite) BOOL allowsCustomItems;
@property (nonatomic, strong, readwrite, nullable) NSString *parentCategoryConichiID;

@property (nonatomic, strong, readwrite, nullable) NSArray *categories;
@property (nonatomic, strong, readwrite, nullable) NSArray *preferences;

@end


@interface CNISDKPreferenceCategory (Mutable)

- (void)addPreference:(CNISDKPreference *)preference;
- (void)removePreference:(CNISDKPreference *)preference;

- (void)addCategories:(NSArray *)categories;
- (void)removeCategories:(NSArray *)categories;

@end


@interface CNISDKPreferenceCategory (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
