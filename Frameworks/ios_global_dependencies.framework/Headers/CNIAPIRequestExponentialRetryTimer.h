//
//  CNIAPIRequestExponentialRetryTimer.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 20/03/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;

#import "CNIAPIRequestRetryTimer.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNIAPIRequestExponentialRetryTimer : NSObject <CNIAPIRequestRetryTimer>

@end

NS_ASSUME_NONNULL_END
