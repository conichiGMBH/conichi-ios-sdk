//
//  CNIAlgorithm.h
//  ios-authentication
//
//  Created by Anton Domashnev on 11/3/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol CNIAlgorithm <NSObject>

- (NSData *)encodeString:(NSString *)string withSecret:(NSString *)secret;

- (NSString *)version;

@end


@interface CNIAlgorithmHS256 : NSObject <CNIAlgorithm>

@end

NS_ASSUME_NONNULL_END
