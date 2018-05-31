//
//  CNIErrorUserInfoBuilder.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 15/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


@interface CNIErrorUserInfoBuilder : NSObject

- (void)addDeveloperMessage:(NSString *_Nullable)developerMessage NS_SWIFT_NAME(add(developerMessage:));
- (void)addArgumentName:(NSString *_Nullable)argumentName NS_SWIFT_NAME(add(argumentName:));
- (void)addArgumentValue:(nullable id)argumentValue NS_SWIFT_NAME(add(argumentValue:));
- (void)addFunctionName:(const char *)functionName NS_SWIFT_NAME(add(functionName:));
- (void)addFilename:(const char *)filename NS_SWIFT_NAME(add(filename:));
- (void)addResponseJSON:(NSDictionary *_Nullable)responseJSON NS_SWIFT_NAME(add(responseJSON:));
- (void)addResponse:(NSURLResponse *_Nullable)response NS_SWIFT_NAME(add(response:));
- (void)addUnderlyingError:(NSError *_Nullable)underlyingError NS_SWIFT_NAME(add(underlyingError:));
- (void)addAdditionalUserInfo:(NSDictionary *_Nullable)additionalUserInfo NS_SWIFT_NAME(add(additionalUserInfo:));
- (void)addLocalizedDescription:(NSString *_Nullable)localizedDescription NS_SWIFT_NAME(add(localizedDescription:));
- (NSDictionary *)builtUserInfo NS_SWIFT_NAME(builtUserInfo());

@end
NS_ASSUME_NONNULL_END
