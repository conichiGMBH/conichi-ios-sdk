//
//  CNISDKCryptoArchive.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 * @see http://robnapier.net/aes-commoncrypto
 */
@interface CNISDKCryptoArchive : NSObject <NSSecureCoding>

@property (nonatomic, strong, readonly) NSData *iv;
@property (nonatomic, strong, readonly) NSData *salt;
@property (nonatomic, strong, readonly) NSData *cypher;
@property (nonatomic, strong, readonly) Class rootObjectClass;

- (nullable instancetype)initWithRootObject:(id<NSCoding>)rootObject password:(NSString *)password;

- (nullable id)unarchiveRootObjectWithPassword:(NSString *)password;

- (nullable NSData *)unarchiveDataWithPassword:(NSString *)password;

@end

NS_ASSUME_NONNULL_END
