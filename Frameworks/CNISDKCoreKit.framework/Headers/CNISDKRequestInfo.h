//
//  CNISDKRequestInfo.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/27/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Describes the request info methods
 */
@protocol CNISDKRequestInfo <NSObject>

/**
 *  Representation of request info which will be used to construct HTTP request
 *
 *  @return object that represents parameters in JSON serializable format
 */
- (id)JSONRepresentation;

/**
 *  Checks if request info has valid information for the associated HTTP request
 *
 *  @param error possible validation error object
 *
 *  @return the flag whether info is valid or not
 */
- (BOOL)isValid:(NSError *__nullable *)error;

@end

NS_ASSUME_NONNULL_END
