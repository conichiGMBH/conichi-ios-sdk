//
//  CNIError+Messerschmitt.h
//  Conichi_Errors
//
//  Created by Mourad on 12/2/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <Conichi_Errors/Conichi_Errors.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * `CNIError+Messerschmitt` that contains all helper methods to create error for conichi SDK from Messerschmitt digital key provider
 */
@interface CNIError (Messerschmitt)

/**
 *  Creates an NSError object with CNIErrorDomain. It can assign developerCode, developerMessage, underlyingError if exists
 *
 *  @param code generated by Messerschmitt digital key provider
 *  @param message that will be added to the new returned error object. If it's nill, then there will be a custom message.
 *
 *  @return new error object
 */
+ (NSError *)messerschmittProviderErrorWithCode:(NSInteger)code message:(nullable NSString *)message;

@end

NS_ASSUME_NONNULL_END