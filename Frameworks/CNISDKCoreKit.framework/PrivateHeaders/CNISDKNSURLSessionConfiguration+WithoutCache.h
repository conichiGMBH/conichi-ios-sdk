//
//  CNISDKNSURLSessionConfiguration+WithoutCache
//  CNISDKCoreKit
//
//  Created by WLADYSLAW SURALA on 18/11/2016.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSURLSessionConfiguration (WithoutCache)

+ (NSURLSessionConfiguration *)cnisdk_DefaultSessionConfigurationWithoutCache;

@end

NS_ASSUME_NONNULL_END
