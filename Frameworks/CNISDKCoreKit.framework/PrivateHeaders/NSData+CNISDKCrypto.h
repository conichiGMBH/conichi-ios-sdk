//
//  NSData+CNISDKCrypto.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface NSData (CNISDKCrypto)

- (NSData *)CNISDKAESEncryptedDataWithPassword:(NSString *)password IV:(NSData *)IV salt:(NSData *)salt error:(__autoreleasing NSError **)error;
- (NSData *)CNISDKAESDecryptedDataWithPassword:(NSString *)password IV:(NSData *)IV salt:(NSData *)salt error:(__autoreleasing NSError **)error;

@end

NS_ASSUME_NONNULL_END
