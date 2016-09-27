//
//  CNISDKCurrencyMapping.h
//  conichiSDK
//
//  Created by Anton Domashnev on 20/06/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKAttributeMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKCurrencyMapping : NSObject

+ (CNISDKAttributeMappingBlock)currencyAttributeMappingBlock;

@end

NS_ASSUME_NONNULL_END
