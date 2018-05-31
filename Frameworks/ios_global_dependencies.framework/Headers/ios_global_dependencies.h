//
//  ios_global_dependencies.h
//  ios-global-dependencies
//
//  Created by ShengHua Wu on 14.05.18.
//  Copyright © 2018 ShengHua Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ios_global_dependencies.
FOUNDATION_EXPORT double ios_global_dependenciesVersionNumber;

//! Project version string for ios_global_dependencies.
FOUNDATION_EXPORT const unsigned char ios_global_dependenciesVersionString[];

// Meta
#import <ios_global_dependencies/CNITypedefs.h>
#import <ios_global_dependencies/CNIMacros.h>
#import <ios_global_dependencies/CNIUtilities.h>

// Errors
#import <ios_global_dependencies/CNIError.h>
#import <ios_global_dependencies/CNIErrorCodes.h>
#import <ios_global_dependencies/CNIErrorFacade.h>
#import <ios_global_dependencies/CNIErrorTransmuter.h>
#import <ios_global_dependencies/CNIErrorFactory.h>
#import <ios_global_dependencies/CNIErrorUserInfoBuilder.h>
#import <ios_global_dependencies/CNIErrorCodeConverterFactory.h>
#import <ios_global_dependencies/CNIConichiAPIErrorJSONExtractor.h>
#import <ios_global_dependencies/CNIPaymentErrorCodes.h>
#import <ios_global_dependencies/CNIURLErrorCodes.h>
#import <ios_global_dependencies/CNIConichiAPIErrorCodes.h>
#import <ios_global_dependencies/CNILocalCacheErrorCodes.h>
#import <ios_global_dependencies/CNIJSONErrorCodes.h>
#import <ios_global_dependencies/CNIMesserschmittErrorCodes.h>
#import <ios_global_dependencies/CNIArgumentValidationErrorCodes.h>
#import <ios_global_dependencies/CNIAssaAbloyErrorCodes.h>
#import <ios_global_dependencies/CNICodingErrorCodes.h>
#import <ios_global_dependencies/CNIHTTPErrorCodes.h>
#import <ios_global_dependencies/CNICoreLocationErrorCodes.h>

// Network
#import <ios_global_dependencies/CNIAPIRequestHeaderBuilder.h>
#import <ios_global_dependencies/CNIAPIRequestBuilder.h>
#import <ios_global_dependencies/CNIAPIRequest.h>
#import <ios_global_dependencies/CNIAPIRequestRetryTimer.h>
#import <ios_global_dependencies/CNIAPIRequestExponentialRetryTimer.h>
#import <ios_global_dependencies/CNIAPIRequestRetryResolver.h>
#import <ios_global_dependencies/CNIAPIRequestDefaultRetryResolver.h>
#import <ios_global_dependencies/CNIAPIRequestManagerConfiguration.h>
#import <ios_global_dependencies/CNIAPIRequestManager.h>
#import <ios_global_dependencies/CNIAPIOperation.h>
#import <ios_global_dependencies/CNIAPIResponse.h>
#import <ios_global_dependencies/CNIAPITypes.h>

// Authentication
#import <ios_global_dependencies/CNIAlgorithm.h>
#import <ios_global_dependencies/CNIAuthenticationRequestHeaderBuilder.h>
#import <ios_global_dependencies/CNINormalizer.h>
#import <ios_global_dependencies/CNIAuthentication.h>
#import <ios_global_dependencies/CNISession.h>
