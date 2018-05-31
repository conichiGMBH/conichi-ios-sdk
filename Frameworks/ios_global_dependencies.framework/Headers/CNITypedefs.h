//
//  CNITypedefs.h
//  ios-guest
//
//  Created by Anton Domashnev on 4/10/15.
//  Copyright (c) 2015 Conichi. All rights reserved.
//

@import Foundation;
@import UIKit;
typedef void (^CNIEmptyBlock)(void);
typedef void (^CNIIndexPathBlock)(NSIndexPath *indexPath);
typedef void (^CNIBooleanBlock)(BOOL result);
typedef void (^CNIViewBlock)(UIView *view);
typedef void (^CNIIDErrorBlock)(id object, NSError *error);
typedef void (^CNIStringErrorBlock)(NSString *result, NSError *error);
typedef void (^CNIIntegerErrorBlock)(NSInteger result, NSError *error);
typedef void (^CNIBooleanErrorBlock)(BOOL success, NSError *error);
