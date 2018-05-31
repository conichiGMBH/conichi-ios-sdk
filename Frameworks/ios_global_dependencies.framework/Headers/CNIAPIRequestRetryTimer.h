//
//  CNIAPIRequestRetryTimer.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 17/03/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 Protocol `CNIAPIRequestRetryTimer` describes the object that controls retry time interval
 */
@protocol CNIAPIRequestRetryTimer

/**
 Calculates and returns the next delay before retry

 @return calculated delay time interval
 */
- (NSTimeInterval)calculateNext;

@end

NS_ASSUME_NONNULL_END
