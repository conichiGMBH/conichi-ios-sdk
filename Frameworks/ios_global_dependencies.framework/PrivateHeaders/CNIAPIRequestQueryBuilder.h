//
//  CNIAPIRequestQueryBuilder.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import "CNIAPITypes.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNIAPIRequestQueryBuilder : NSObject

/**
 *  Builds the parameters query from given `CNIAPIRequestParameters`
 *
 *  @param parameters parameters to be used to build a query from
 *
 *  @return newly created query string. Returns nil in case of empty parameters
 */
+ (nullable NSString *)buildQueryFromParameters:(nullable CNIAPIRequestParameters *)parameters;

@end


NS_ASSUME_NONNULL_END
