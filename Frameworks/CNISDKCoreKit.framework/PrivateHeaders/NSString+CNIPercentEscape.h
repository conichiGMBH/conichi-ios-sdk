//
//  NSString+CNIPercentEscape.h
//  conichiSDK
//
//  Created by Anton Domashnev on 18/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN


@interface NSString (CNIPercentEscape)

/**
 *   Returns a percent-escaped string following RFC 3986 for a query string key or value.
 *   RFC 3986 states that the following characters are "reserved" characters.
 *   - General Delimiters: ":", "#", "[", "]", "@", "?", "/"
 *   - Sub-Delimiters: "!", "$", "&", "'", "(", ")", "*", "+", ",", ";", "="
 *
 *  @return new optional string
 */
- (nullable NSString *)cni_stringByPercentEscape;

@end

NS_ASSUME_NONNULL_END
