//
//  CNISDKObjectMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/25/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import <CNISDKCoreKit/CNISDKMacros.h>

#import "CNISDKAttributeMapping.h"
#import "CNISDKRelationshipMapping.h"
#import "CNISDKDynamicRelationshipMapping.h"
#import "CNISDKMapping.h"
#import "CNISDKObjectMappingValidation.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKObjectMapping : NSObject

@property (nonatomic, assign, readonly) Class mappingClass;

/**
 * NSDictionary of pairs [@"JSONKey": CNISDKAttributeMapping]
 */
@property (nonatomic, strong, readonly) NSDictionary *attributesMapping;
@property (nonatomic, strong, readonly) NSDictionary *hasOneRelationshipsMapping;
@property (nonatomic, strong, readonly) NSDictionary *hasManyRelationshipsMapping;
@property (nonatomic, strong, readonly) NSDictionary *hasOneDynamicRelationshipsMapping;
@property (nonatomic, strong, readonly) NSDictionary *hasManyDynamicRelationshipsMapping;
@property (nonatomic, strong, readonly) NSArray *validationsArray;

+ (instancetype)mappingForClass:(Class)mappingClass;

/************************* Attributes *************************/
- (void)mapJSONKeysToThePropertyKeys:(NSDictionary *)jsonKeyPropertyNamesDictionary;

- (void)mapJSONKey:(NSString *)jsonKey
  toTheProperyName:(NSString *)propertyName;

- (void)mapJSONKey:(NSString *)jsonKey
  toTheProperyName:(NSString *)propertyName
      mappingBlock:(nullable CNISDKAttributeMappingBlock)mappingBlock;

- (void)mapJSONKey:(NSString *)jsonKey
       toTheProperyName:(NSString *)propertyName
           mappingBlock:(nullable CNISDKAttributeMappingBlock)mappingBlock
    reverseMappingBlock:(nullable CNISDKAttributeMappingBlock)reverseMappingBlock;

- (void)mapJSONKey:(NSString *)jsonKey
  toTheProperyName:(NSString *)propertyName
      mappingBlock:(nullable CNISDKAttributeMappingBlock)mappingBlock
   completionBlock:(nullable CNISDKAttributeMappingCompletonBlock)completionBlock;

- (void)mapJSONKey:(NSString *)jsonKey
          toTheProperyName:(NSString *)propertyName
              mappingBlock:(nullable CNISDKAttributeMappingBlock)mappingBlock
    mappingCompletionBlock:(nullable CNISDKAttributeMappingCompletonBlock)mappingCompletionBlock
       reverseMappingBlock:(nullable CNISDKAttributeMappingBlock)reverseMappingBlock;

/************************* Has One *************************/
- (void)mapHasOneRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                         fromJSONKey:(NSString *)jsonKey
                   toThePropertyName:(NSString *)propertyName;

- (void)mapHasOneRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                         fromJSONKey:(NSString *)jsonKey
                   toThePropertyName:(NSString *)propertyName
                     completionBlock:(nullable CNISDKRelationshipMappingCompletonBlock)completionBlock;

- (void)mapHasOneRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                         fromJSONKey:(NSString *)jsonKey
                   toThePropertyName:(NSString *)propertyName
                       objectMapping:(nullable CNISDKObjectMapping *)mapping
                     completionBlock:(nullable CNISDKRelationshipMappingCompletonBlock)completionBlock;

- (void)mapHasOneDynamicRelationshipFromJSONKey:(NSString *)jsonKey
                              toThePropertyName:(NSString *)propertyName
                             objectMappingBlock:(CNISDKDynamicMappingObjectMappingBlock)objectMappingBlock;

/************************* Has Many *************************/
- (void)mapHasManyRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                          fromJSONKey:(NSString *)jsonKey
                    toThePropertyName:(NSString *)propertyName;

- (void)mapHasManyRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                          fromJSONKey:(NSString *)jsonKey
                    toThePropertyName:(NSString *)propertyName
                      completionBlock:(nullable CNISDKRelationshipMappingCompletonBlock)completionBlock;

- (void)mapHasManyRelationshipOfClass:(Class<CNISDKMapping>)relationshipClass
                          fromJSONKey:(NSString *)jsonKey
                    toThePropertyName:(NSString *)propertyName
                        objectMapping:(nullable CNISDKObjectMapping *)mapping
                      completionBlock:(nullable CNISDKRelationshipMappingCompletonBlock)completionBlock;

- (void)mapHasManyDynamicRelationshipFromJSONKey:(NSString *)jsonKey
                               toThePropertyName:(NSString *)propertyName
                              objectMappingBlock:(CNISDKDynamicMappingObjectMappingBlock)objectMappingBlock;

/************************* Validation *************************/

- (void)addValidation:(CNISDKObjectMappingValidation *)validation;

@end

NS_ASSUME_NONNULL_END
