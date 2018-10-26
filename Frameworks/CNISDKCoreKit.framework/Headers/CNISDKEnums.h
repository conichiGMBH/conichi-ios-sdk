//
//  CNISDKEnums.h
//  conichiSDK
//
//  Created by Anton Domashnev on 1/15/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;

/**
 *  Different sdk environment
 *
 *  @warning Make sure you have the right api key for the environment
 */
typedef NS_ENUM(NSInteger, CNISDKEnvironment) {
    /**
     *  conichi internal development environment
     */
    CNISDKEnvironmentDevelopment,

    /**
     *  conichi internal staging environment
     */
    CNISDKEnvironmentStaging,

    /**
     *  Live environment
     */
    CNISDKEnvironmentProduction
};

/**
 *  Log level
 */
typedef NS_ENUM(NSInteger, CNISDKLogLevel) {
    /**
     *  Logging is off
     */
    CNISDKLogLevelOff,
    /**
     *  Logs only error message
     */
    CNISDKLogLevelError,
    /**
     *  Logs error and warning messages
     */
    CNISDKLogLevelWarning,
    /**
     *  Logs error, warning and info messages
     */
    CNISDKLogLevelInfo,
    /**
     *  Logs everything
     */
    CNISDKLogLevelTrace
};

/**
 *  The pre checkin request's status
 */
typedef NS_ENUM(NSInteger, CNISDKPreCheckinRequestStatus) {
    /**
     *  The pre checkin request status is currently unknown
     */
    CNISDKPreCheckinRequestStatusUnknown,

    /**
     *  The pre checkin request status is open and it's waiting to be resolved
     */
    CNISDKPreCheckinRequestStatusOpen,

    /**
     *  The pre checkin request status is closed
     */
    CNISDKPreCheckinRequestStatusClosed
};

/**
 *  Deliverable category use cases (specified the guest action for that category is available)
 */
typedef NS_ENUM(NSInteger, CNISDKDeliverableCategoryUseCase) {
    /**
     *  Unknown category use case
     */
    CNISDKDeliverableCategoryUseCaseUnknown,

    /**
     *  Category is available only during the pre checkin
     */
    CNISDKDeliverableCategoryUseCasePreCheckin,

    /**
     *  Category is available only during the checkout
     */
    CNISDKDeliverableCategoryUseCaseCheckout
};

/**
 *  Guest's arrival time. Can be used to specify period of the guest's arrival date
 */
typedef NS_ENUM(NSInteger, CNISDKPreCheckinRequestArriveTime) {

    /**
     *  Guest does not know the ETA
     */
    CNISDKPreCheckinRequestArriveTimeUnknown,

    /**
     *  Guest is arriving to the hotel in the early morning
     */
    CNISDKPreCheckinRequestArriveTimeEarlyMorning,

    /**
     *  Guest is arriving to the hotel in the morning
     */
    CNISDKPreCheckinRequestArriveTimeMorning,

    /**
     *  Guest is arriving to the hotel in the midday
     */
    CNISDKPreCheckinRequestArriveTimeMidday,

    /**
     *  Guest is arriving to the hotel in the afternoon
     */
    CNISDKPreCheckinRequestArriveTimeAfternoon,

    /**
     *  Guest is arriving to the hotel in the evening
     */
    CNISDKPreCheckinRequestArriveTimeEvening,

    /**
     *  Guest is arriving to the hotel in the night
     */
    CNISDKPreCheckinRequestArriveTimeNight
};

/**
 *  Guest's arrival time. Can be used to specify period of the guest's arrival date
 */
typedef NS_ENUM(NSInteger, CNISDKPreCheckinRequestTravelPurpose) {

    /**
     *  Guest's travel purpose is unknown
     */
    CNISDKPreCheckinRequestTravelPurposeUnknown,

    /**
     *  Guest's travel purpose is Leisure
     */
    CNISDKPreCheckinRequestTravelPurposeLeisure,

    /**
     *  Guest's travel purpose is Business
     */
    CNISDKPreCheckinRequestTravelPurposeBusiness
};

/**
 *  Converted by NSJSONSerialization object's type
 */
typedef NS_ENUM(NSInteger, CNISDKJSONType) {
    /**
     *  Converted JSON object should be kind of NSDictionary
     */
    CNISDKJSONTypeObject = 1,
    /**
     *  Converted JSON object should be kind of NSArray
     */
    CNISDKJSONTypeCollection
};

/**
 *  Authorization provider
 */
typedef NS_ENUM(NSInteger, CNISDKAPIManagerProvider) {

    /**
     *  Unknown authorization provider. Used when guest authorizes by some unknown provider
     */
    CNISDKAPIManagerProviderUnknown,

    /**
     *  Facebook authorization provider. Used when guest authorizes by facebook
     */
    CNISDKAPIManagerProviderFacebook,

    /**
     *  Xing authorization provider. Used when guest authorizes by xing
     */
    CNISDKAPIManagerProviderXing,

    /**
     *  Linkedin authorization provider. Used when guest authorizes by linkedin
     */
    CNISDKAPIManagerProviderLinkedin,

    /**
     *  conichi authorization provider. Used when guest authorizes by conichi
     */
    CNISDKAPIManagerProviderConichi,

    /**
     * external authorization provider. Used when external provider authorizes guest by unique external id during sign up
     */
    CNISDKAPIManagerProviderExternal
};
