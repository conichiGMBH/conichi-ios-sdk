//
//  Conichi_Errors.h
//  Conichi_Errors
//
//  Created by Anton Domashnev on 14/09/16.
//  Copyright © 2016 conichi. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Conichi_Errors.
FOUNDATION_EXPORT double Conichi_ErrorsVersionNumber;

//! Project version string for Conichi_Errors.
FOUNDATION_EXPORT const unsigned char Conichi_ErrorsVersionString[];

//legacy + error code converter
#import <Conichi_Errors/CNIErrorCodeConverter.h>
#import <Conichi_Errors/CNIError.h>
#import <Conichi_Errors/CNIError+Payment.h>
#import <Conichi_Errors/CNIError+General.h>
#import <Conichi_Errors/CNIError+API.h>
#import <Conichi_Errors/CNIError+Messerschmitt.h>
#import <Conichi_Errors/CNIError+ASSAAbloy.h>

//error codes
#import <Conichi_Errors/CNIErrorCodes.h>

//logic
#import <Conichi_Errors/CNIErrorFacade.h>
#import <Conichi_Errors/CNIErrorTransmuter.h>

//creation
#import <Conichi_Errors/CNIErrorFactory.h>
#import <Conichi_Errors/CNIErrorUserInfoBuilder.h>
#import <Conichi_Errors/CNIErrorCodeConverterFactory.h>

//helpers
#import <Conichi_Errors/CNIConichiAPIErrorJSONExtractor.h>
