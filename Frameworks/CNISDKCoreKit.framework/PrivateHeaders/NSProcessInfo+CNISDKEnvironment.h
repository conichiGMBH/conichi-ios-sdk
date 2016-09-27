//
//  NSProcessInfo+CNISDKEnvironment.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/2/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface NSProcessInfo (CNISDKEnvironment)

- (BOOL)isRunningTests;

@end

NS_ASSUME_NONNULL_END
