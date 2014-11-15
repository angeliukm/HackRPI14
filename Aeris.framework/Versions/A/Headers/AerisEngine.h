//
//  AerisEngine.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/23/11.
//  Copyright 2011 HAMweather, LLC. All rights reserved.

#import <Foundation/Foundation.h>
#import <Aeris/AFAccessPermissions.h>

@interface AerisEngine : NSObject <AFAccessPermissionsDelegate>

/**
 The consumer key (client ID) to be used for all API requests.
 */
@property (nonatomic, readonly) NSString *consumerKey;

/**
 The consumer secret (client secret) to be used for all API requests.
 */
@property (nonatomic, readonly) NSString *consumerSecret;

/**
 The bundle name for the current application.
 */
@property (nonatomic, readonly) NSString *consumerAppName;

/**
 The version number of the current application.
 */
@property (nonatomic, readonly) NSString *consumerAppVersion;

/**
 The account access key to use for AerisGraphics static map accounts.
 **/
@property (nonatomic, readonly) NSString *consumerGraphicsKey;

/**
 The specific API version being used for all requests.
 
 If this value is not set, then the latest stable API version will always be used.
 */
@property (nonatomic, readonly) NSString *apiVersion;

/**
 Initializes the framework API engine with the proper consumer key and secret values.
 
 @param consumerKey The client ID to be used for all requests
 @param consumerSecret The client secret to be used for all requests
 */
+ (void)engineWithKey:(NSString *)consumerKey secret:(NSString *)consumerSecret;

/**
 Initializes the framework API engine with the proper consumer key and secret values and specific API version.
 
 @param consumerKey The client ID to be used for all requests
 @param consumerSecret The client secret to be used for all requests
 @param version The specific API version to use for all requests
 */
+ (void)engineWithKey:(NSString *)consumerKey secret:(NSString *)consumerSecret version:(NSString *)version;

/**
 Initializes the framework API engine with the proper consumer key and secret values.
 The key should contain both the consumer key and secret joined by and underscore ("_").
 
 @param consumerKey The client ID and secret joined by and underscore ("_")
 */
+ (void)engineWithKey:(NSString *)consumerKey;

/**
 Returns the current version of the framework.
 */
+ (NSString *)version;

/**
 The current AerisEngine singleton instance.
 */
+ (AerisEngine *)currentEngine;

+ (NSString *)baseURL;
+ (void)enableDebug;
+ (BOOL)isDebugEnabled;
+ (BOOL)isEngineReady;
+ (void)setGraphicsKey:(NSString *)key;

@end
