//
//  CNISDKNotification+Private.h
//  conichiSDK
//
//  Created by alex on 11/17/15.
//  Copyright © 2015 conichi. All rights reserved.
//

#import "CNISDKNotification.h"
#import "CNISDKMapping.h"

NS_ASSUME_NONNULL_BEGIN


@interface CNISDKNotification (Private)

@property (nonatomic, strong, readwrite) NSString *title;
@property (nonatomic, strong, readwrite) NSString *message;
@property (nonatomic, strong, readwrite) NSString *imageURL;
@property (nonatomic, strong, readwrite) NSString *type;
@property (nonatomic, strong, readwrite) NSString *venueName;
@property (nonatomic, assign, getter=isRead, readwrite) BOOL read;
@property (nonatomic, assign, getter=isFavourite, readwrite) BOOL favourite;
@property (nonatomic, strong, readwrite) NSDate *createdAt;

@end


@interface CNISDKNotification (Mapping) <CNISDKMapping>

@end


NS_ASSUME_NONNULL_END
