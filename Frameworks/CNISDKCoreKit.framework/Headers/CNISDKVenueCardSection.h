//
//  CNISDKVenueCardSection.h
//  conichiSDK
//
//  Created by alex on 12/30/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

#import "CNISDKMacros.h"


#define CNISDKVenueCardSectionKeypath(NAME) CNISDKKeypath(CNISDKVenueCardSection, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKVenueCardSection` class represents the conichi venue card section.
 *  This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKVenueCardSection : NSObject

/**
 *  Venue's card section title
 */
@property (nonatomic, strong, readonly) NSString *title;

/**
 *  Venue's card section content
 */
@property (nonatomic, strong, readonly) NSString *content;

@end

NS_ASSUME_NONNULL_END
