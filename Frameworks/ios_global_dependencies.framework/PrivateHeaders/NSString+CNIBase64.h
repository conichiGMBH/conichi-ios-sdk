//
//  NSString+CNIBase64.h
//  ios-authentication
//
//  Created by Anton Domashnev on 11/3/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSString (CNIBase64)

+ (NSString *)cni_base64UrlEncodedStringFromBase64String:(NSString *)base64String;

@end

NS_ASSUME_NONNULL_END
