//
//  CNIAssaAbloyErrorCodes.h
//  Conichi_Errors
//
//  Created by WLADYSLAW SURALA on 20/02/2017.
//  Copyright © 2017 conichi. All rights reserved.
//

#ifndef CNIAssaAbloyErrorCodes_h
#define CNIAssaAbloyErrorCodes_h

typedef NS_ENUM(NSInteger, CNIAssaAbloyErrorCode) {

    /**
     * The error code for error that sdk cannot interpret.
     */
    CNIAssaAbloyErrorCodeUnknown,

    /**
     *  ASSA Abloy: An internal error occured. Recommended user action is to restart app or reboot device.
     */
    CNIAssaAbloyErrorCodeInternal,

    /**
     *  ASSA Abloy: Attempt to invoke a method which requires an endpoint that is setup. Recommended user action is to contact the key administrator and request an invitation code.
     */
    CNIAssaAbloyErrorCodeEndpointNotSetup,

    /**
     *  ASSA Abloy: One asynchrounous method of the API is already running. Recommended user action is to retry the action.
     */
    CNIAssaAbloyErrorCodeSDKBusy,

    /**
     *  ASSA Abloy: The TSM replied NOT ELIGIBLE (FATAL during Setup, Invitation code is consumed and can no longer be used). Recommended user action is to contact the key administrator.
     */
    CNIAssaAbloyErrorCodeDeviceNotEligible,

    /**
     *  ASSA Abloy: Server replied API INCOMPATIBLE. Recommended user action is to upgrade the application. Recommended developer is to upgrade the SDK.
     */
    CNIAssaAbloyErrorCodeSDKIncompatible,

    /**
     *  ASSA Abloy: The server communication failed. This is normally because of a network problem. Recommended user action is to check internet connectivity or try again later.
     */
    CNIAssaAbloyErrorCodeServerUnreachable,

    /**
     *  ASSA Abloy: The TSM failed to install the endpoint with a fatal error (FATAL, Invitation code no longer useful). Recommended user action is to contact the key administrator.
     */
    CNIAssaAbloyErrorCodeSetupFailed,

    /**
     *  ASSA Abloy: The TSM Reported that the invitation code was not valid. Recommended user action is to retype or contact the key administrator.
     */
    CNIAssaAbloyErrorCodeInvalidInvitationCode,

    /**
     *  ASSA Abloy: Unable to serve the request to open the specified reader since the request contained an OpeningType that was not in the list of permitted OpeningTypes. Recommended user/developer action is to reconfigure reader.
     */
    CNIAssaAbloyErrorCodeOpeningTypeNotPermitted,

    /**
     *  ASSA Abloy: Unable to serve the request since Bluetooth Low Energy is unavailable. Recommended user action is to change permissions.
     */
    CNIAssaAbloyErrorCodeBluetoothLENotAvailable

};

#endif /* CNIAssaAbloyErrorCodes_h */
