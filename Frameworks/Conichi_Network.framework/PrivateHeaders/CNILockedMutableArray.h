//
//  CNILockedMutableArray.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 26.06.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 Class `CNILockedMutableArray` intends to replicate the `NSMutableArray` object with internal lock approach
 */
@interface CNILockedMutableArray <__covariant ObjectType> : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithLock:(NSRecursiveLock *)lock NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(lock:));

- (void)removeObject:(ObjectType)anObject NS_SWIFT_NAME(remove(object:));
- (void)removeAllObjects NS_SWIFT_NAME(removeAllObjects());
- (void)addObject:(ObjectType)anObject NS_SWIFT_NAME(add(object:));

- (nullable ObjectType)popFirst NS_SWIFT_NAME(popFirst());

- (NSUInteger)count NS_SWIFT_NAME(count());

- (NSArray<ObjectType> *)cloneAllObjects NS_SWIFT_NAME(cloneAll());

@end

NS_ASSUME_NONNULL_END
