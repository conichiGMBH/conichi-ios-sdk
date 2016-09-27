//
//  CNIErrorCodeConverter.h
//  ios-utilities example
//
//  Created by Anton Domashnev on 14/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 * `CNIErrorCodeConverter` is a class that converts any of the possible error codes for specific conichi codes
 */
@protocol CNIErrorCodeConverter <NSObject>

/**
 *  Converts given error code into conichi knowable error code
 *
 *  @param code error code to be converted
 *
 *  @return newly error code
 */
+ (NSInteger)convertErrorCodeToConichiErrorCode:(NSInteger)code;

@end

/**
 * `CNINSURLErrorConverter` is a class that converts NSURL error codes for specific conichi codes
 */
@interface CNINSURLErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIHTTPResponseErrorConverter` is a class that converts HTTP response error codes for specific conichi codes
 */
@interface CNIHTTPResponseErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIConichiResponseErrorConverter` is a class that converts Conichi API error codes for specific conichi codes
 */
@interface CNIConichiResponseErrorConverter : NSObject <CNIErrorCodeConverter>
@end

/**
 * `CNIPaymentProviderErrorConverter` is a class that converts payment provider error codes for specific conichi codes
 */
@interface CNIPaymentProviderErrorConverter : NSObject <CNIErrorCodeConverter>
@end

NS_ASSUME_NONNULL_END
