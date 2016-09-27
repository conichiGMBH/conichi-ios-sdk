//
//  CNISDKKeyedUnarchiver.h
//  conichiSDK
//
//  Created by Anton Domashnev on 6/12/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKKeyedUnarchiver : NSObject

+ (nullable id)unarchiveObjectWithData:(NSData *)data;
+ (nullable id)unarchiveObjectWithFile:(NSString *)path;

/**
 * @discussion Usually SDK stores all objects as crypted archived. This method decrypts archiveData and returns decrypted data
 * @param archivedData - archive data
 * @return decrypted archive data
 */
+ (nullable NSData *)unarchiveDataWithArchivedData:(NSData *)archivedData;

@end

NS_ASSUME_NONNULL_END
