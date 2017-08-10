//
//  CNIAPIRequestHeaderBuilder.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIRequest;

#import "CNIAPITypes.h"


NS_ASSUME_NONNULL_BEGIN

@protocol CNIAPIRequestHeaderBuilder <NSObject>

/**
 *  Creates all required headers for the given request
 *
 *  @param request for what to build headers
 *
 *  @return built `CNIAPIHeaders`
 */
- (CNIAPIHeaders *)buildHeadersForRequest:(CNIAPIRequest *)request NS_SWIFT_NAME(buildHeaders(For:));

@end

NS_ASSUME_NONNULL_END
