//
//  CNIConichiAPIErrorJSONExtractor.h
//  Conichi_Errors
//
//  Created by Anton Domashnev on 19.07.17.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

@interface CNIConichiAPIErrorJSONInformation : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *message;
@property (nonatomic, assign, readonly) NSInteger code;

- (instancetype)initWithCode:(NSInteger)code message:(nullable NSString *)message;

@end

//**************************************************************//

@interface CNIConichiAPIErrorJSONExtractor : NSObject

- (nullable NSArray<CNIConichiAPIErrorJSONInformation *> *)extractErrorJSONInformationsFromConichiAPIResponseData:(nullable NSData *)responseData;

@end

NS_ASSUME_NONNULL_END
