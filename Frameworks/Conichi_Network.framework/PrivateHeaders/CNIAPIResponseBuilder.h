//
//  CNIAPIResponseBuilder.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 30/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIResponse;
@class CNIAPIRequest;
@class CNIAPIHTTPResponseValidator;


NS_ASSUME_NONNULL_BEGIN

/**
 `CNIAPIResponseBuilder` builds the `CNIAPIResponse` object based on the NSURLSession response
 */
@interface CNIAPIResponseBuilder : NSObject

- (instancetype)initWithResponseValidator:(CNIAPIHTTPResponseValidator *)validator NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(responseValidator:));
- (instancetype)init NS_UNAVAILABLE;

- (CNIAPIResponse *)buildForRequest:(CNIAPIRequest *)request completedWithResponse:(NSHTTPURLResponse *)response data:(nullable NSData *)data NS_SWIFT_NAME(build(for:completedWith:data:));

- (CNIAPIResponse *)buildForRequest:(CNIAPIRequest *)request completedWithError:(NSError *)error NS_SWIFT_NAME(build(for:completedWith:));

@end

NS_ASSUME_NONNULL_END
