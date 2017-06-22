//
//  CNIArgumentValidationErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIArgumentValidationErrorCodes_h
#define CNIArgumentValidationErrorCodes_h

typedef NS_ENUM(NSInteger, CNIArgumentValidationErrorCode) {

    /**
     *  Unknown error for argument validation
     */
    CNIArgumentValidationErrorCodeUnknown,

    /**
     *  Error code for missing argument error
     */
    CNIArgumentValidationErrorCodeRequired,

    /**
     *  Error code for invalid argument error
     */
    CNIArgumentValidationErrorCodeInvalid

};


#endif /* CNIArgumentValidationErrorCodes_h */
