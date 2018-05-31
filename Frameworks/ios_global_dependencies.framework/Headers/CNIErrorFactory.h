//
//  CNIErrorFactory.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 13/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const CNIAssaAbloyErrorDomain;
extern NSErrorDomain const CNIMesserschmittErrorDomain;
extern NSErrorDomain const CNIPaymentErrorDomain;
extern NSErrorDomain const CNIConichiAPIErrorDomain;
extern NSErrorDomain const CNIArgumentValidatorErrorDomain;
extern NSErrorDomain const CNIURLErrorDomain;
extern NSErrorDomain const CNIHTTPErrorDomain;
extern NSErrorDomain const CNICoreLocationErrorDomain;
extern NSErrorDomain const CNIJSONErrorDomain;
extern NSErrorDomain const CNILocalCacheErrorDomain;
extern NSErrorDomain const CNICodingErrorDomain;
extern NSErrorDomain const CNIUnknownErrorDomain;

@class CNIConichiAPIErrorFactory;
@class CNIArgumentValidationErrorFactory;


@interface CNIErrorFactory : NSObject

/**
 This method is a helper to get all error domains for checks around the Conichi_Errors framework

 @return array of all available error domains in Conichi_Errors
 */

+ (NSArray *)arrayOfErrorDomains;
/**
 This is abstract factory method which should be used to obtain concrete error factory for specific conichi error domain unless access to specific (for domain) error creation methods are not needed.

 @param errorDomain Conichi domain for which factory is to be created.
 @return Concrete error factory.
 */
+ (CNIErrorFactory *)factoryForErrorDomain:(NSErrorDomain)errorDomain NS_SWIFT_NAME(factory(for:));

/**
 Creates an error for specific error code in factory's error domain.

 @param code Conichi Error for which error is to be created.
 @return Error created for specific error code in factory's error domain.
 */
- (NSError *)errorWithCode:(NSInteger)code NS_SWIFT_NAME(error(with:));
/**
 *  Creates NSError object with CNIErrorDomain
 *
 *  @param code - code for error
 *  @param userInfo - information about error
 *
 *  @return new error object
 */
- (NSError *)errorWithCode:(NSInteger)code userInfo:(nullable NSDictionary *)userInfo NS_SWIFT_NAME(error(with:userInfo:));
@end

NS_ASSUME_NONNULL_END
