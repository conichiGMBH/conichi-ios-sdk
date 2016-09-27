//
//  CNISDKCryptoHelper.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


@interface CNISDKCryptoHelper : NSObject

+ (NSData *)generateIV;
+ (NSData *)generateSalt;

@end
