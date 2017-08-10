//
//  CNIErrorTransmuter.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 15/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol CNIErrorCodeConverter;
@class CNIErrorFactory;

/**
 CNIError transmuter is a class used to generate NSErrors with valid, error specific conichi error domain and error code out of external error code. Internally it uses converter implementing CNIErrorCodeConverter for specific error domain (to convert external error to one of conichi error codes) and an instance of CNIErrorFactory also specific for error domain (to create and return NSError instance).
 */
@interface CNIErrorTransmuter : NSObject

- (instancetype)initWith:(CNIErrorFactory *)factory converter:(id<CNIErrorCodeConverter>)codeConverter NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(factory:converter:));

- (instancetype)initWith:(NSErrorDomain)domain NS_SWIFT_NAME(init(domain:));

- (instancetype)init NS_UNAVAILABLE;

- (NSError *)conichiErrorForExternalErrorCode:(NSInteger)errorCode NS_SWIFT_NAME(conichiError(for:));

- (NSError *)conichiErrorForExternalErrorCode:(NSInteger)errorCode userInfo:(nullable NSDictionary *)userInfo NS_SWIFT_NAME(conichiError(for:userInfo:));

@end

NS_ASSUME_NONNULL_END
