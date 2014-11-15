//
//  AFRequest.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/9/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Aeris/AFResponse.h>
#import <Aeris/AFURL.h>
#import "ASIHTTPRequest.h"
#import "ASIHTTPRequestDelegate.h"

@class AFResponse;
@protocol AFRequestDelegate;

/**
 Core request class that depends upon the internal ASIHTTPRequest framework to provide primary request functionality.
 */
@interface AFRequest : NSObject <ASIHTTPRequestDelegate> {
    AFURL* _URL;
	NSString* _requestMethod;
	ASIHTTPRequest* _URLRequest;
	AFResponse* _response;
	NSObject<AFRequestDelegate>* _delegate;
	
	NSDate* _loadedTime;
	BOOL _isLoading;
	BOOL _isLoaded;
	BOOL _isLoadingMore;
	BOOL _isOutdated;
	BOOL _allowDebug;
}

/**
 The URL this request is loading.
 */
@property (nonatomic, readonly) AFURL* URL;

/**
 The HTTP verb the request is sent via.
 */
@property (nonatomic, readonly) NSString* requestMethod;

/**
 The underlying ASIHTTPRequest sent for this request.
 */
@property (nonatomic, assign) ASIHTTPRequest* URLRequest;

/**
 The AFResponse instance that handles remote responses and statuses.
 */
@property (nonatomic, readonly) AFResponse* response;

/**
 The delegate to inform about request events.
 
 If the object implements the AFRequestDelegate protocol, it
 will receive request lifecycle event messages.
 */
@property (nonatomic, assign) NSObject<AFRequestDelegate>* delegate;

/**
 The timestamp of the last successful request.
 */
@property (nonatomic, retain) NSDate* loadedTime;

/*
 The meta data associated with the request.
 */
@property (nonatomic, retain) NSDictionary *userInfo;

///------------------------
/// @name Creating Requests
///------------------------

/**
 Creates and returns a new request instance configured with the specified URL and delegate object.
 
 @param URL An AFURL or NSURL instance for the request.
 @param delegate The AFRequestDelegate object that receives notifications for the request.
 @return An autoreleased AFRequest instance.
 */
+ (AFRequest*)requestWithURL:(NSURL*)URL delegate:(id)delegate;

/**
 Creates and returns a new request instance configured with the specified URL and delegate object.
 */
- (id)initWithURL:(NSURL*)URL delegate:(id)delgate;

/**
 Basic method for sending a request using the default expiration and cache configuration.
 */
- (void)send:(NSDictionary*)options;

/**
 Send the request while setting the max age the usable cached data can be.
 */
- (void)sendWithExpiration:(NSInteger)maxAge options:(NSDictionary*)options;

/**
 Send the request asynchronously while setting the ASICachePolicy to use and the default expiration interval.
 */
- (void)sendWithCachePolicy:(ASICachePolicy)cachePolicy options:(NSDictionary*)options;

/**
 Run a request synchronously, and return control when the request completes or fails.
 */
- (void)sendSynchronously;

/**
 Run a request in the background.
 */
- (void)sendAsynchronously;

/**
 Cancels the underlying request.
 */
- (void)cancel;

/**
 Prepares a request by setting the initial configuration and instantiation.
 */
- (void)prepareRequestWithExpiration:(NSInteger)maxAge cachePolicy:(ASICachePolicy)cachePolicy options:(NSDictionary*)options;

///---------------------
/// @name Request Status
///---------------------

/**
 Indicates that the request has loaded.
 */
- (BOOL)isLoaded;

/**
 Indicates that the request is in the process of loading.
 */
- (BOOL)isLoading;

/**
 Indicates that the request is in the process of loading additional data.
 */
- (BOOL)isLoadingMore;

/**
 Indicates that the request is out of date and should be reloaded as soon as possible.
 */
- (BOOL)isOutdated;

/**
 Indicates if the data associated with the request is cached and not expired.
 */
- (BOOL)isCached;

- (void)disableDebug;

///----------------------------
/// @name Delegate Notification
///----------------------------

/**
 Notifies delegates that the request started to load.
 */
- (void)loadDidStart;

/**
 Notifies delegates that the request finished loading.
 */
- (void)loadDidFinish:(AFResponse*)response;

/**
 Notifies delegates that the request failed to load.
 */
- (void)loadDidFailWithError:(NSError *)error;

/**
 Notifies delegates that the request was cancelled.
 */
- (void)loadDidCancel;

@end

/**
 Lifecycle events for AFRequests.
 */
@protocol AFRequestDelegate
@optional

/**
 Sent when a request has finished loading.
 */
- (void)request:(AFRequest*)request didLoadResponse:(AFResponse*)response;

/**
 Sent when a request has failed due to an error.
 */
- (void)request:(AFRequest*)request didFailLoadWithError:(NSError*)error;

/**
 Send when a request has started loading.
 */
- (void)requestDidStartLoad:(AFRequest*)request;

@end;
