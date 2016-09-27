//
//  CNISDKRelationshipMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKObjectMapping;

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Mapping completion block
 *
 *  @param mappedValue value that has been just maped
 *  @param object      object that is beeing created
 */
typedef void (^CNISDKRelationshipMappingCompletonBlock)(id __nullable mappedValue, id __nonnull object);


@interface CNISDKRelationshipMapping : NSObject

@property (nonatomic, strong) Class<CNISDKMapping> relationshipClass;
@property (nonatomic, strong) NSString *jsonKey;
@property (nonatomic, strong) NSString *propertyName;

/**
 * @note If it's nil mapping will be taken from [relationshipClass objectMapping]
 */
@property (nonatomic, strong, nullable) CNISDKObjectMapping *objectMapping;

@property (nonatomic, copy, nullable) CNISDKRelationshipMappingCompletonBlock completionBlock;

@end

NS_ASSUME_NONNULL_END
