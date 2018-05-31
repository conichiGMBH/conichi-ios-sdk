//
//  CNISDKTrackin+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/18/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKTrackin.h"
#import "CNISDKMapping.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKTrackin (Properties)

@property (nonatomic, strong, readwrite) CNISDKRegion *associatedRegion;
@property (nonatomic, strong, readwrite) NSString *status;
@property (nonatomic, strong, readwrite) NSString *type;
@property (nonatomic, strong, readwrite) NSString *venueID;

@end


@interface CNISDKTrackin (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
