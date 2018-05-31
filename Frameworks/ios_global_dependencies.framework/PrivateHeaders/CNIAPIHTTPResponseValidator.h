//
//  CNIAPIHTTPResponseValidator.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 15/03/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

/**
 Class `CNIAPIHTTPResponseValidator` implements validation of http response from Cocoa Network layer
 */
@interface CNIAPIHTTPResponseValidator : NSObject

/**
 Validates the given response according the internal rules

 @param response response to be validated
 @return flag whether the given response is valid or not
 */
- (BOOL)validateHTTPResponse:(NSHTTPURLResponse *)response NS_SWIFT_NAME(validate(httpResponse:));

@end

NS_ASSUME_NONNULL_END
