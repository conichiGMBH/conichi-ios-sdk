//
//  CNISDKSumUpAPIRequestHeaderBuilder.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 10.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;
@import Conichi_Network;


NS_ASSUME_NONNULL_BEGIN

@interface CNISDKSumUpAPIRequestHeaderBuilder : NSObject <CNIAPIRequestHeaderBuilder>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithToken:(NSString *)token NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
