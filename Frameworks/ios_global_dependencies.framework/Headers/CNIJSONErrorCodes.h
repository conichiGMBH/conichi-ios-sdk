//
//  CNIJSONErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIJSONErrorCodes_h
#define CNIJSONErrorCodes_h

typedef NS_ENUM(NSInteger, CNIJSONErrorCode) {
    /**
     * The error code for unknown error raised when handling JSON
     */
    CNIJSONErrorCodeUnknown,
    /**
     * The error code for invalid response JSON format
     */
    CNIJSONErrorCodeParsing
};
#endif /* CNIJSONErrorCodes_h */
