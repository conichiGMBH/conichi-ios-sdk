//
//  CNIURLErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIURLErrorCodes_h
#define CNIURLErrorCodes_h
typedef NS_ENUM(NSInteger, CNIURLErrorCode) {

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIURLErrorCodeUnknown,
    /**
     * The error code when no internet connection
     */
    CNIURLErrorCodeNoInternetConnection,

    /**
     *  The server is currently unable to handle the request due to a temporary overloading or maintenance of the server.
     */
    CNIURLErrorCodeServerUnavailable,

    /**
     *  General error code when there is a timeout while sending the request
     */
    CNIURLErrorCodeRequestTimeout,

    /**
     *  The server has not found anything matching the Request-URI.
     */
    CNIURLErrorCodeNotFound,

    /**
     *  The server encountered an unexpected condition which prevented it from fulfilling the request.
     */
    CNIURLErrorCodeServerError,

    /**
     *  General error code when request requires user authentication.
     */
    CNIURLErrorCodeUnauthorized,

    /**
     *  General error code when request could not be understood by the server due to malformed syntax. The client SHOULD NOT repeat the request
     *  without modifications.
     */
    CNIURLErrorCodeBadRequest


};


#endif /* CNIURLErrorCodes_h */
