//
//  AFResponse.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/9/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Aeris/AFRequest.h>
#import "ASIHTTPRequest.h"
#import "ASIHTTPRequestDelegate.h"

@class AFRequest;

/**
 Core response object tied to a request that handles all ASIHTTPRequest responses, statuses and data.
 */
@interface AFResponse : NSObject <ASIHTTPRequestDelegate> {
    AFRequest* _request;
	NSDictionary* _responseHeaders;
	NSMutableData* _data;
	NSError* _failureError;
	BOOL _loading;
}

/**
 The request that generated this response.
 */
@property (nonatomic, assign) AFRequest* request;

/**
 Dictionary object storing the header key-value pairs from the response.
 */
@property (nonatomic, readonly) NSDictionary* responseHeaders;

/**
 The status code of the response body.
 */
@property (nonatomic, readonly) NSInteger statusCode;

/**
 The URL the response was loaded from.
 */
@property (nonatomic, readonly) NSURL* URL;

/**
 The data returned from the request.
 */
@property (nonatomic, readonly) NSData* data;

/**
 The error returned if the URL request fails.
 */
@property (nonatomic, readonly) NSError* failureError;

/**
 Initializes a new response object for the specified request.
 
 @param request The AFRequest instance to attach with this response.
 */
- (id)initWithRequest:(AFRequest*)request;

/**
 Processes the successful response from a request when loaded.
 */
- (NSError*)request:(ASIHTTPRequest *)request processResponse:(NSDictionary *)response data:(id)data;

///------------------------------
/// @name Returning Response Data
///------------------------------

/**
 Return the response data as an NSString
 */
- (NSString*)dataAsString;

/**
 Return the response data parsed as JSON into an object.
 */
- (id)dataAsJSON;

/**
 Return the response data converted into a UIImage instance.
 */
- (UIImage*)dataAsImage;

/**
 Return the content type as specified in the response header.
 */
- (NSString*)contentType;

/**
 Return the content length as specified in the response header.
 */
- (NSString*)contentLength;

///----------------------
/// @name Response Status
///----------------------

- (BOOL)isFailure;
- (BOOL)isInvalid;
- (BOOL)isSuccessful;
- (BOOL)isRedirection;
- (BOOL)isClientError;
- (BOOL)isServerError;
- (BOOL)isError;
- (BOOL)isOK;
- (BOOL)isForbidden;
- (BOOL)isNotFound;
- (BOOL)isServiceUnavailable;

///-----------------------------
/// @name Response Content Types
///-----------------------------

- (BOOL)isHTML;
- (BOOL)isXHTML;
- (BOOL)isXML;
- (BOOL)isJSON;
- (BOOL)isImage;
- (BOOL)isJPG;
- (BOOL)isPNG;
- (BOOL)isGIF;

@end
