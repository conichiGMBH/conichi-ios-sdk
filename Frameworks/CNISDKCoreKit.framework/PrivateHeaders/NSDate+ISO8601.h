//
//  NSDate+ISO8601.h
//  conichiSDK
//
//  Created by Anton Domashnev on 12/17/15.
//  Copyright © 2015 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface NSDate (ISO8601)

/**
 * Converts string in ISO8601 to NSDate object
 * @param string - string that should be converted into date
 * @return created date. It can return nil if the format of the string is not ISO8601
 */
+ (nullable NSDate *)CNISDK_dateFromISO8601String:(nullable NSString *)string;

/**
 * @return string from NSDate instance using ISO8601 format
 */
- (nullable NSString *)CNISDK_ISO8601String;

@end

NS_ASSUME_NONNULL_END
