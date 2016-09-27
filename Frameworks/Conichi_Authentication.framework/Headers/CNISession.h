//
//  CNISession.h
//  ios-authentication
//
//  Created by Anton Domashnev on 11/04/16.
//  Copyright © 2016 conichi. All rights reserved.
//

@import Foundation;


NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCNISessionActiveSessionDidChangeNotification;

/**
 *  The `CNISession` class represents the conichi cloud session
 */
@interface CNISession : NSObject

/**
 *  The api key that session is using
 */
@property (nonatomic, strong, readonly) NSString *apiKey;

/**
 *  The api secret that session is using
 */
@property (nonatomic, strong, readonly) NSString *apiSecret;

/**
 *  The session identifier. Usually it's UUID string
 */
@property (nonatomic, strong, readonly, nullable) NSString *sessionID;

/**
 *  The flag whether this session is authorized or not
 */
@property (nonatomic, assign, readonly) BOOL isAuthorized;

/**
 *  Init is unavailable. Please consider to use initWithApiKey:apiSecret or initWithApiKey:apiSecret:sessionID:
 *
 *  @return nothing
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 *  Creates a new `CNISession` instance with the given apiKey and apiSecret
 *
 *  @param apiKey    conichi API consumer key
 *  @param apiSecret conichi API consumer secret
 *
 *  @return The session object associated with given apiKey and apiSecret
 */
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret NS_DESIGNATED_INITIALIZER;

/**
 *  Creates a new `CNISession` instance with the given apiKey, apiSecret and sessionID
 *
 *  @param apiKey    conichi API consumer key
 *  @param apiSecret conichi API consumer secret
 *  @param sessionID conichi session ID
 *
 *  @return The session object associated with given apiKey and apiSecret
 */
- (instancetype)initWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret sessionID:(NSString *)sessionID;

/**
 *  Makes the current `CNISession` instance active, it sends the notification kCNISessionActiveSessionDidChangeNotification
 */
- (void)makeActive;

/**
 *  Opens session with the new one with the given apiKey
 *
 *  @param apiKey    conichi API consumer key
 *  @param apiSecret conichi API consumer secret
 *
 *  @discussion If another session is active at the time, it becomes closed automatically.
 *
 *  @return The session object associated with given apiKey and apiSecret
 */
+ (instancetype)openWithApiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

/**
 *  Opens session with the given sessionID, apiKey, apiSecret
 *
 *  @param sessionID conichi session id to make a request that requires authorization
 *  @param apiKey    conichi API consumer key
 *  @param apiSecret conichi API consumer secret
 *
 *  @discussion If another session is active at the time, it becomes closed automatically.
 *
 *  @return The session object associated with given apiKey, apiSecret and sessionID
 */
+ (instancetype)openWithSessionID:(NSString *)sessionID apiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

/**
 *  Returns current active session, if there is no one, it will return nil
 *
 *  @discussion if openWithAuthToken:apiKey is called, the resulting `CNISession` object also becomes the activeSession. If another
 *              session was active at the time, it is closed automatically.
 *
 *  @return current active session
 */
+ (nullable instancetype)activeSession;

/**
 *  Removes current session object if exists. Clears apiSecret, apiKey and sessionID.
 */
+ (void)closeActiveSession;

@end

NS_ASSUME_NONNULL_END
