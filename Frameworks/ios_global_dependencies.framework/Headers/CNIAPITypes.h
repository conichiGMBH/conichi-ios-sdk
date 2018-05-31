//
//  CNIAPITypes.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

@class CNIAPIResponse;

NS_ASSUME_NONNULL_BEGIN

typedef NSString CNIAPIHeaderField;
typedef NSString CNIAPIHeaderValue;
typedef NSDictionary<CNIAPIHeaderField *, CNIAPIHeaderValue *> CNIAPIHeaders;
typedef NSDictionary<NSString *, NSObject *> CNIAPIRequestParameters;

typedef void (^CNIAPIRequestCompletion)(CNIAPIResponse *response);

NS_ASSUME_NONNULL_END
