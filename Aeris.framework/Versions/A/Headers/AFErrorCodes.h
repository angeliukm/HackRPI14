//
//  AFErrorCodes.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 5/3/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

extern NSString *const kAFErrorDomain;

///------------------
/// @name JSON Errors
///------------------
extern NSString* const kAFJSONErrorDomain;
extern NSInteger const kAFJSONErrorCodeInvalidJSON;

///-----------------
/// @name API Errors
///-----------------
extern NSInteger const kAFJSONErrorCodeInvalidRequest;
extern NSInteger const kAFJSONErrorCodeInvalidClient;
extern NSInteger const kAFJSONErrorCodeUnauthorizedClient;
extern NSInteger const kAFJSONErrorCodeRedirectMismatch;
extern NSInteger const kAFJSONErrorCodeAccessDenied;
extern NSInteger const kAFJSONErrorCodeUnsupportedResponse;
extern NSInteger const kAFJSONErrorCodeInvalidScope;
extern NSInteger const kAFJSONErrorCodeInvalidToken;
extern NSInteger const kAFJSONErrorCodeExpiredToken;
extern NSInteger const kAFJSONErrorCodeInsufficientScope;

///-------------------
/// @name Image Errors
///-------------------
extern NSString* const kAFNetworkErrorDomain;
extern NSInteger const kAFNetworkErrorCodeInvalidImage;
extern NSInteger const kAFNetworkErrorCodeRequestTimeout;

///-----------------
/// @name API Errors
///-----------------
extern NSString *const kAFAPIErrorDomain;
extern NSInteger const kAFAPIErrorCodeInvalidPlace;
extern NSInteger const kAFAPIInvalidParameter;