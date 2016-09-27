//
//  CNISDKGuestStatusInfo+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 2/23/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import "CNISDKGuestStatusInfo.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKGuestStatusInfo (Private)

@property (nonatomic, strong, nullable, readwrite) CNISDKCheckin *checkin;

@property (nonatomic, strong, nullable, readwrite) CNISDKTrackin *trackin;

@property (nonatomic, copy, readwrite) NSString *status;

@end


@interface CNISDKGuestStatusInfo (Mapping) <CNISDKMapping>
@end

NS_ASSUME_NONNULL_END
