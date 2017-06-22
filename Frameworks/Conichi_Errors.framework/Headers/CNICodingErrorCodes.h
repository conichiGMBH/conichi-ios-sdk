//
//  CNICodingErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNICodingErrorCodes_h
#define CNICodingErrorCodes_h

typedef NS_ENUM(NSInteger, CNICodingErrorCode) {
    /**
     * The error code for unknown error raised when archiving/unarchiving objects
     */
    CNICodingErrorCodeUnknown,
    /**
     * The error code (internal) archiving/unarchiving objects (NSCoding)
     */
    CNICodingErrorCodeStandard
};


#endif /* CNICodingErrorCodes_h */
