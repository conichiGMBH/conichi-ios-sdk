//
//  CNISDKDynamicRelationshipMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKObjectMapping;

NS_ASSUME_NONNULL_BEGIN

typedef CNISDKObjectMapping *__nonnull (^CNISDKDynamicMappingObjectMappingBlock)(id __nonnull json);


@interface CNISDKDynamicRelationshipMapping : NSObject

@property (nonatomic, strong) NSString *jsonKey;
@property (nonatomic, strong) NSString *propertyName;
@property (nonatomic, copy) CNISDKDynamicMappingObjectMappingBlock objectMappingBlock;

@end

NS_ASSUME_NONNULL_END
