//
//  CNISDKConichiIDMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 05/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKAttributeMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKConichiIDMapping : NSObject

+ (CNISDKAttributeMappingBlock)conichiIDAttributeMappingBlock;

@end

NS_ASSUME_NONNULL_END
