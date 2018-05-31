//
//  CNIPaymentErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIPaymentErrorCodes_h
#define CNIPaymentErrorCodes_h

typedef NS_ENUM(NSInteger, CNIPaymentErrorCode) {

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIPaymentErrorCodeUnknown,

    /**
     *  Sending a request with a packagename/bundle id that is not registered
     */
    CNIPaymentErrorCodeInvalidApplicationID,

    /**
     *  Sending a request with an invalid API Key
     */
    CNIPaymentErrorCodeInvalidAPIKey,

    /**
     *  Sending a request with a null or empty user token
     */
    CNIPaymentErrorCodeInvalidUserToken,

    /**
     *  Sending a request with a null or empty user token
     */
    CNIPaymentErrorCodeUserTokenNotCreated,

    /**
     *  Sending a request with invalid credit card
     */
    CNIPaymentErrorCodeInvalidInstrument

};


#endif /* CNIPaymentErrorCodes_h */
