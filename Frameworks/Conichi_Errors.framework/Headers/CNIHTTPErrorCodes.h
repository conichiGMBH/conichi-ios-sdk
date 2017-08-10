//
//  CNIHTTPErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIHTTPErrorCodes_h
#define CNIHTTPErrorCodes_h

typedef NS_ENUM(NSInteger, CNIHTTPErrorCode) {

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIHTTPErrorCodeUnknown,

    /**
     *  The server is currently unable to handle the request due to a temporary overloading or maintenance of the server.
     */
    CNIHTTPErrorCodeServerUnavailable,

    /**
     *  The server has not found anything matching the Request-URI.
     */
    CNIHTTPErrorCodeNotFound,

    /**
     *  The server encountered an unexpected condition which prevented it from fulfilling the request.
     */
    CNIHTTPErrorCodeServerError,

    /**
     *  General error code when request requires user authentication.
     */
    CNIHTTPErrorCodeUnauthorized,

    /**
     *  General error code when request could not be understood by the server due to malformed syntax. The client SHOULD NOT repeat the request
     *  without modifications.
     */
    CNIHTTPErrorCodeBadRequest,

    /**
     *  General error code when request could not be understood by the server due to forbidden access.
     */
    CNIHTTPErrorCodeForbidden

};

#endif /* CNIHTTPErrorCodes_h */
