//
//  CNIMesserschmittErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIMesserschmittErrorCodes_h
#define CNIMesserschmittErrorCodes_h

typedef NS_ENUM(NSInteger, CNIMesserchmittErrorCode) {
    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIMesserchmittErrorCodeUnknown,

    /**
     *  Messerschmitt: There were no Messerschmitt devices found during the scanning process.
     */
    CNIMesserchmittErrorCodeScanTimeout,

    /**
     *  Messerschmitt: Keydata were invalid.
     */
    CNIMesserchmittErrorCodeOpenDoorFailed,

    /**
     *  Messerschmitt: The door is locked after opening.
     */
    CNIMesserchmittErrorCodeDoorIsLocked,

    /**
     *  Messerschmitt: Authentication failed, happens if keydata and/or device id are incorrect.
     */
    CNIMesserchmittErrorCodeAuthenticationFailed,

    /**
     *  Messerschmitt: The door is not ready.
     */
    CNIMesserchmittErrorCodeDoorIsNotReady
};

#endif /* CNIMesserschmittErrorCodes_h */
