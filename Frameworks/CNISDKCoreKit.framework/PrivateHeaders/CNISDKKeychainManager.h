//
//  CNISDKKeychainManager.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/13/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKKeychainManager : NSObject

+ (nullable NSString *)keychainValueForIdentifier:(NSString *)identifier;
+ (BOOL)setKeychainValue:(NSString *)value forIdentifier:(NSString *)identifier;
+ (BOOL)deleteItemFromKeychainWithIdentifier:(NSString *)identifier;

@end

NS_ASSUME_NONNULL_END
