//
//  CNISDKAuthorizationChangeReason.h
//  conichiSDK
//
//  Created by Anton Domashnev on 4/21/15.
//  Copyright (c) 2015 conichi. All rights reserved.
//

@import Foundation;

/**
 *  Authorization changed reason describes exact reason why authorization changed in each case
 */
typedef NS_ENUM(NSInteger, CNISDKAuthorizationChangeReason) {
    /**
     *  Authorization changed because guest has done log out
     */
    CNISDKAuthorizationChangeReasonLogOut = 1,

    /**
     *  Authorization changed because of the error
     */
    CNISDKAuthorizationChangeReasonError,

    /**
     *  Authorization changed because guest has signed in
     */
    CNISDKAuthorizationChangeReasonSignIn,

    /**
     *  Authorization changed because guest has signed up
     */
    CNISDKAuthorizationChangeReasonSignUp
};
