//
//  CNISDKResult.h
//  CNISDKSumUpKit
//
//  Created by Anton Domashnev on 11.07.17.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

#define CNISDKResultSuccess(result) [CNISDKResult<typeof(result)> succeededWithResult:result]
#define CNISDKResultFailure(error) [CNISDKResult failedWithError:error]

typedef NS_ENUM(NSInteger, CNISDKResultType) {
    CNISDKResultTypeSuccess,
    CNISDKResultTypeFail
};


/**
 * The object that incapsulates in itself the result of any operation. Either failure or success
 */
@interface CNISDKResult <__covariant ResultType> : NSObject

@property (nonatomic, assign, readonly) CNISDKResultType type;
@property (nonatomic, strong, readonly, nullable) ResultType result;
@property (nonatomic, strong, readonly, nullable) NSError *error;

+ (instancetype)failedWithError:(NSError *)error;
+ (instancetype)succeededWithResult:(ResultType)result;

@end

NS_ASSUME_NONNULL_END
