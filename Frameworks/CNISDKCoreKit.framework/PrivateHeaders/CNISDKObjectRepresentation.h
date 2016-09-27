//
//  CNISDKObjectRepresentation.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/26/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

@protocol CNISDKObjectRepresentation <NSObject>

- (NSInteger)integerValueForKey:(NSString *)key;
- (BOOL)boolValueForKey:(NSString *)key;
- (float)floatValueForKey:(NSString *)key;
- (nullable id)objectValueForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
