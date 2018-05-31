//
//  CNIUtilities.h
//  conichi
//
//  Created by Anton Domashnev on 9/10/15.
//  Copyright (c) 2015 Conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface CNIUtilities : NSObject

/**
 * Adds an object to an array if it is not nil.
 * @param array - the array to add the object to.
 * @param object - the object to add to the array.
 */
+ (void)array:(NSMutableArray *)array addObject:(nullable id)object;

/**
 * Adds an object to an array if it is not nil.
 * @param array - the array to add the object to.
 * @param objects - the array of objects to add to the array.
 */
+ (void)array:(NSMutableArray *)array addObjects:(nullable NSArray *)objects;

/**
 * Inserts an object to an array if it is not nil.
 * @param array - the array to add the object to.
 * @param object - the object to add to the array.
 * @param index - the index to insert the object at
 */
+ (void)array:(NSMutableArray *)array insertObject:(nullable id)object atIndex:(NSUInteger)index;

/**
 * Sets an object for a key in a dictionary if it is not nil.
 * @param dictionary - the dictionary to set the value for.
 * @param object - the value to set.
 * @param key - the key to set the value for.
 */
+ (void)dictionary:(NSMutableDictionary *)dictionary setObject:(nullable id)object forKey:(nullable id<NSCopying>)key;

/**
 * If an NSError pointer variable isn’t passed in then you can get a crash. This method sets it if it is not nil
 * @param error - the error to set the value for
 * @param errorToSet - the value to set.
 *
 * @return YES if error was set, no if otherwise.
 */
+ (BOOL)error:(NSError *__nullable *)error setError:(nullable NSError *)errorToSet;

/**
 *  Compares NSString objects and it returns YES if string1 and string2 are nil
 *
 *  @param string1 string to compare
 *  @param string2 string to compare
 *
 *  @return comparison result
 */
+ (BOOL)string:(nullable NSString *)string1 isEqualToString:(nullable NSString *)string2;

/**
 *  Compares NSArray objects and it returns YES if array1 and array2 are nil
 *
 *  @param array1 string to compare
 *  @param array2 string to compare
 *
 *  @return comparison result
 */
+ (BOOL)array:(nullable NSArray *)array1 isEqualToArray:(nullable NSArray *)array2;

/**
 *  generate AccessibilityIdentifier in order to kepp the convention of naming in UITests and UIClasses
 *
 *  @param module the module name
 *  @param viewController viewController string class/name
 *  @param outlet outlet string
 *
 *  @return AccessibilityIdentifier as a string.
 */
+ (NSString *)CNIAccessibilityIdentifier:(NSString *)module viewController:(NSString *)viewController outlet:(NSString *)outlet;

@end

NS_ASSUME_NONNULL_END
