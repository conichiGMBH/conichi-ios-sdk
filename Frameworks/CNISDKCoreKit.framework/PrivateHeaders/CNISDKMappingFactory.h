//
//  CNISDKMappingFactory.h
//  conichiSDK
//
//  Created by Anton Domashnev on 10/28/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

@class CNISDKObjectMapping;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKMappingFactory : NSObject

+ (CNISDKObjectMapping *)creditCardMappingForJSON:(NSDictionary *)json;

@end

NS_ASSUME_NONNULL_END
