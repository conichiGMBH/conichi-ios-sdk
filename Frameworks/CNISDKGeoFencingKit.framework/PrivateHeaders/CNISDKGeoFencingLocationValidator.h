//
//  CNISDKGeoFencingLocationValidator.h
//  CNISDKGeoFencingKit
//
//  Created by ShengHua Wu on 29/11/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

@import Foundation;

@class CLLocation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The 'CNISDKGeoFenceLocationValidator' validate a given location
 */
@interface CNISDKGeoFencingLocationValidator : NSObject

/**
 *  Validate a given location with its timestamp and horizontal accuracy
 *
 *  @param location location needs validating
 *
 *  @return validation result Boolean flag
 */
- (BOOL)validateTimestampAndHorizontalAccuracyOfLocation:(CLLocation *)location;

/**
 *  Validate a given location with its coordinate
 *
 *  @param location location needs validating
 *  @param error    validation result error
 *
 *  @return validation result Boolean flag
 */
- (BOOL)validateCoordinateOfLocation:(CLLocation *)location error:(NSError *__autoreleasing *)error;
@end

NS_ASSUME_NONNULL_END
