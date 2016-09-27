//
//  CNISDKMutablePreferenceUpdateResult.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/21/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKPreferenceUpdateResult.h"

#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The `CNISDKMutablePreferenceUpdateResult` defines entity that represents mutable preference update result if use batch update
 */
@interface CNISDKMutablePreferenceUpdateResult : CNISDKPreferenceUpdateResult

/**
 *  Updated preference conichiID
 */
@property (nonatomic, copy, readwrite) NSString *preferenceConichiID;

/**
 *  Whether update is succeeded or failed
 */
@property (nonatomic, strong, getter=isSucceeded, readwrite) NSNumber *succeeded;

/**
 *  Optional error if update is failed
 */
@property (nonatomic, strong, nullable, readwrite) NSError *error;

@end

/**
 *  The `CNISDKMutablePreferenceUpdateResult+Mapping` defines category that extends class with CNISDKMapping protocol
 */
@interface CNISDKMutablePreferenceUpdateResult (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
