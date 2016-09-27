//
//  CNISDKMacros.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/10/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

/********* Asserts **********/

/**
 *  This macro ensures that object.key exists at compile time.
 *  It can accept a chained key path.
 *
 *  @param TYPE object type
 *  @param PATH property key path
 *
 *  @return the keypath
 */
#define CNISDKKeypath(TYPE, PATH) \
    (NSString * __nonnull)[NSString stringWithUTF8String:(((void)(NO && ((void)((TYPE *)(nil)).PATH, NO)), #PATH))]
