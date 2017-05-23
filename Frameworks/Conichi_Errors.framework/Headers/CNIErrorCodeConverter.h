// MARK: Formatter Exempt
//  CNIErrorCodeConverter.h
//  ios-utilities example
//
//  Created by Anton Domashnev on 14/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;
@import Conichi_Meta;

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
+ (NSInteger)convertErrorCodeToConichiErrorCode:(NSInteger)code __attribute__((deprecated("this method is from old version of Errors API, please use instance method instead and use CNIErrorCodeConverterFactory to obtain proper converter")));
- (NSInteger)convertErrorCodeToConichiErrorCode:(NSInteger)code NS_SWIFT_NAME(convertToConichiErrorCode(code:));
@end

/**
 * `CNINSURLErrorConverter` is a class that converts NSURL error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNINSURLErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIHTTPResponseErrorConverter` is a class that converts HTTP response error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNIHTTPResponseErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIConichiResponseErrorConverter` is a class that converts Conichi API error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNIConichiResponseErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIPaymentProviderErrorConverter` is a class that converts payment provider error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNIPaymentProviderErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIASSAAbloyDigitalKeyProviderErrorConverter` is a class that converts ASSA Abloy digital key provider error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNIASSAAbloyDigitalKeyProviderErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIMesserschmittDigitalKeyProviderErrorConverter` is a class that converts Messerschmitt digital key provider error codes to specific conichi codes
 */
__attribute__((deprecated("direct converters are deprecated, use CNIErrorCodeConverterFactory instead")))
@interface CNIMesserschmittDigitalKeyProviderErrorConverter : NSObject <CNIErrorCodeConverter>
@end

NS_ASSUME_NONNULL_END
