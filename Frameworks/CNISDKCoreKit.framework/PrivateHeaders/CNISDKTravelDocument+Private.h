//
//  CNISDKTravelDocument+Private.h
//  conichiSDK
//
//  Created by Anton Domashnev on 3/24/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

#import "CNISDKTravelDocument.h"
#import "CNISDKMapping.h"


NS_ASSUME_NONNULL_BEGIN


@interface CNISDKTravelDocument (Properties)

@property (nonatomic, strong, readwrite, nullable) NSString *type;
@property (nonatomic, strong, readwrite, nullable) NSString *number;
@property (nonatomic, strong, readwrite, nullable) NSDate *dateOfIssue;
@property (nonatomic, strong, readwrite, nullable) NSDate *dateOfExpiry;
@property (nonatomic, strong, readwrite, nullable) NSString *authority;
@property (nonatomic, strong, readwrite, nullable) NSString *placeOfIssue;

@end


@interface CNISDKTravelDocument (Mapping) <CNISDKMapping>

@end

NS_ASSUME_NONNULL_END
