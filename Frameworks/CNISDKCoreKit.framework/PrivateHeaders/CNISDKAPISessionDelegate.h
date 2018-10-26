//
//  CNISDKAPISessionDelegate.h
//  CNISDKCoreKit
//
//  Created by WLADYSLAW SURALA on 23/11/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKConfiguration;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPISessionDelegate : NSObject <NSURLSessionDelegate>

- (instancetype)initWithSDKConfiguration:(CNISDKConfiguration *)configuration NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
