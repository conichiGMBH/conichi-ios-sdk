//
//  NSString+CNIAPIPercentEscape.h
//  Conichi_Network
//
//  Created by Anton Domashnev on 27/01/2017.
//  Copyright © 2017 conichi GmbH. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSString (CNIAPIPercentEscape)

/**
 *   Returns a percent-escaped string following RFC 3986 for a query string key or value.
 *   RFC 3986 states that the following characters are "reserved" characters.
 *   - General Delimiters: ":", "#", "[", "]", "@", "?", "/"
 *   - Sub-Delimiters: "!", "$", "&", "'", "(", ")", "*", "+", ",", ";", "="
 *
 *  @return new optional string
 */
- (nullable NSString *)cniapi_stringByPercentEscape;

@end

NS_ASSUME_NONNULL_END
