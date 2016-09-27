//
//  CNISDKKeyedArchiver.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;


@interface CNISDKKeyedArchiver : NSObject

+ (NSData *)archivedDataWithRootObject:(id<NSCoding>)rootObject;
+ (BOOL)archiveRootObject:(id<NSCoding>)rootObject toFile:(NSString *)path;
+ (BOOL)archiveRootObject:(id<NSCoding>)rootObject toFile:(NSString *)path error:(NSError *__autoreleasing *)error;

@end
