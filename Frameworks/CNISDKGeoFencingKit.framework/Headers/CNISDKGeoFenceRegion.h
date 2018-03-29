//
//  CNISDKGeoFenceRegion.h
//  CNISDKGeoFencingKit
//
//  Created by Mourad on 11/1/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CLCircularRegion;

@interface CNISDKGeoFenceRegion : NSObject

/**
 *  Underlying core location circular region
 */
@property (nonatomic, strong, readonly) CLCircularRegion *clRegion;

/**
 *  Default constructor to create new instance of `CNISDKGeoFenceVenueRegion`
 *
 *  @param region core location geo fence region
 *  @return newly created instance of `CNISDKGeoFenceVenueRegion`
 */
- (instancetype)initWithClRegion:(CLCircularRegion *)region;

@end

NS_ASSUME_NONNULL_END

