//
//  CNISDKAPIInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/17/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

#import "CNISDKMapping.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKAPIInfo : NSObject

@property (nonatomic, strong) NSNumber *version;

@end


@interface CNISDKAPIInfo (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
