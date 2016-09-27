//
//  CNISDKVenueCard.h
//  conichiSDK
//
//  Created by alex on 12/30/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKObject.h"

@class CNISDKVenueCardSection;

#import "CNISDKMacros.h"


#define CNISDKVenueCardKeypath(NAME) CNISDKKeypath(CNISDKVenueCard, NAME)


NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKVenueCard` class represents the conichi venue card.
 *  This class is a subclass of a <CNISDKObject>.
 */
@interface CNISDKVenueCard : CNISDKObject

/**
 *  Venue's card name
 */
@property (nonatomic, strong, readonly) NSString *name;

/**
 *  Venue's card category. Received from backend, now can be 'custom', 'info', 'finess','food'
 */
@property (nonatomic, strong, readonly) NSString *category;

/**
 *  Venue's card header image URL
 */
@property (nonatomic, strong, readonly) NSString *headerImageURLString;

/**
 *  Venue's card icon image URL
 */
@property (nonatomic, strong, readonly) NSString *iconImageURLString;


/**
 *  Venue's card position
 */
@property (nonatomic, strong, readonly) NSNumber *position;

/**
 *  Venue's card footer
 */
@property (nonatomic, strong, readonly, nullable) NSString *footer;

/**
 *  Array of Venue's card sections
 */
@property (nonatomic, strong, readonly) NSArray<CNISDKVenueCardSection *> *sections;

@end

NS_ASSUME_NONNULL_END
