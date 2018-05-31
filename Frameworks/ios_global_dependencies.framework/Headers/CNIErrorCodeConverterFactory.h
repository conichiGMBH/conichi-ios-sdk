//
//  CNIErrorCodeConverterFactory.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 13/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 * `CNIErrorCodeConverter` is a class that converts any of the possible error codes to specific conichi codes
 */
@protocol CNIErrorCodeConverter <NSObject>

/**
 *  Converts given error code into conichi knowable error code
 *
 *  @param code error code to be converted
 *
 *  @return newly error code
 */
@optional
- (NSInteger)convertErrorCodeToConichiErrorCode:(NSInteger)code NS_SWIFT_NAME(convertToConichiErrorCode(code:));
@end


@interface CNIErrorCodeConverterFactory : NSObject

/**
 Error code converter factory return specific error code converter for the error domain

 @param errorDomain string for which we want to have a code converter
 @return error code converter that converts external error codes to conichi-specific error codes in relevant domain, if supplied domain is not recognized by factory - returns nil
 */
+ (id<CNIErrorCodeConverter>)codeConverterForErrorDomain:(NSErrorDomain)errorDomain NS_SWIFT_NAME(codeConverter(for:));

@end

NS_ASSUME_NONNULL_END
