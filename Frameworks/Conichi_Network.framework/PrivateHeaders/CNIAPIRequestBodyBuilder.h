//
//  CNIAPIRequestBodyBuilder.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import "CNIAPITypes.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const CNIAPIRequestJSONBodyBuilderErrorDomain;

/**
 * Error codes related to `CNIAPIRequestJSONBodyBuilderErrorDomain`

 - CNIAPIRequestJSONBodyBuilderErrorCodeInvalidParameters: `CNIAPIRequestBodyBuilder` can not fulfill the parameters to build request body
 */
typedef NS_ENUM(NSInteger, CNIAPIRequestJSONBodyBuilderErrorCode) {
    CNIAPIRequestJSONBodyBuilderErrorCodeInvalidParameters
};


@protocol CNIAPIRequestBodyBuilder <NSObject>

/**
 *  Builds the parameters query from given `CNIAPIRequestParameters`
 *
 *  @param parameters parameters to be used to build a query from
 *
 *  @return newly created body data. Returns nil in case of empty parameters or error
 */
+ (nullable NSData *)buildBodyFromParameters:(nullable CNIAPIRequestParameters *)parameters error:(NSError **)error;

@end

//***********************************************************************//

/**
 *  `CNIAPIRequestJSONBodyBuilder` builds a HTTP request body as a JSON
 */
@interface CNIAPIRequestJSONBodyBuilder : NSObject <CNIAPIRequestBodyBuilder>

@end

//***********************************************************************//

FOUNDATION_EXTERN NSString *const CNIAPIRequestMultipartBodyBuilderFileDataParameterKey;
FOUNDATION_EXTERN NSString *const CNIAPIRequestMultipartBodyBuilderFileNameParameterKey;
FOUNDATION_EXTERN NSString *const CNIAPIRequestMultipartBodyBuilderJSONKeyParameterKey;

/**
 *  `CNIAPIRequestMultipartBodyBuilder` builds a HTTP request body for multipart request
 */
@interface CNIAPIRequestMultipartBodyBuilder : NSObject <CNIAPIRequestBodyBuilder>

@end


NS_ASSUME_NONNULL_END
