//
//  AFGlobals.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/27/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Aeris/AFDebug.h>

///-----------------------------
/// @name API Parameters & Codes
///-----------------------------

// API parameter keys
#define kAFAPIParamClientKey			@"client_id"
#define kAFAPIParamSecretKey			@"client_secret"
#define kAFAPIParamAppIdKey				@"app_id"
#define kAFAPIParamAppVersionKey		@"app_version"
#define kAFAPIParamPlaceKey             @"p"
#define kAFAPIParamQueryKey				@"query"
#define kAFAPIParamLimitKey				@"limit"
#define kAFAPIParamFilterKey			@"filter"
#define kAFAPIParamDateFromKey			@"from"
#define kAFAPIParamDateToKey			@"to"
#define kAFAPIParamRadiusKey			@"radius"
#define kAFAPIParamSortKey				@"sort"
#define kAFAPIParamSkipKey				@"skip"
#define kAFAPIParamPeriodLimitKey		@"plimit"
#define kAFAPIParamPeriodSkipKey		@"pskip"
#define kAFAPIParamPeriodSortKey		@"psort"

// API response keys
#define kAFResponseKey					@"response"
#define kAFResponseCodeKey				@"code"
#define kAFResponseSuccessKey			@"success"
#define kAFResponseErrorKey				@"error"
#define kAFResponseErrorCodeKey			@"code"
#define kAFResponseErrorDetailKey		@"description"
#define kAFResponseErrorUri				@"error_uri"

// API error keys
#define kAFAPIErrorInvalidRequest		@"invalid_request"
#define kAFAPIErrorInvalidToken			@"invalid_token"
#define kAFAPIErrorExpiredToken			@"expired_token"
#define kAFAPIErrorInsufficientScope	@"insufficient_scope"
#define kAFAPIErrorInvalidClient		@"invalid_client"
#define kAFAPIErrorUnauthorizedClient	@"unauthorized_client"
#define kAFAPIErrorInvalidGrant			@"invalid_grant"
#define kAFAPIErrorUnsupportedGrant		@"unsupported_grant_type"
#define kAFAPIErrorInvalidScope			@"invalid_scope"

// Notification Center keys
#define kAFEngineReady					@"AF_engine_ready"

// Time Helpers
#define AF_SECOND	1
#define AF_MINUTE	60
#define AF_HOUR		(60 * AF_MINUTE)
#define AF_DAY		(24 * AF_HOUR)
#define AF_WEEK		(7 * AF_DAY)
#define AF_MONTH	(30.5 * AF_DAY)
#define AF_YEAR		(365 * AF_DAY)

// Safe releases (modeled after Three20)
#define AF_RELEASE(__POINTER) { [__POINTER release]; __POINTER = nil; }
#define AF_RELEASE_CF(__REF) { if (nil != (__REF)) { CFRelease(__REF); __REF = nil; } }
#define AF_INVALIDATE_TIMER(__TIMER) { [__TIMER invalidate]; __TIMER = nil; }

// default expiration times
#define kAFDefaultCacheExpirationAge	AF_WEEK
#define kAFMinCacheExpirationAge		AF_MINUTE

// common symbols
#define kAFDegree	[NSString stringWithUTF8String:"\xC2\xB0"]

///----------------
/// @name Utilities
///----------------

/** Make all categories in the current file loadable without using -load-all.
 *
 * Normally, compilers will skip linking files that contain only categories.
 * Adding a call to this macro adds a dummy class, which causes the linker
 * to add the file.
 *
 * @param UNIQUE_NAME A globally unique name.
 */
#define AF_MAKE_CATEGORIES_LOADABLE(UNIQUE_NAME) @interface FORCELOAD_##UNIQUE_NAME @end @implementation FORCELOAD_##UNIQUE_NAME @end

#if !defined(MIN)
	#define MIN(A,B)((A) < (B) ? (A) : (B))
#endif

#if !defined(MAX)
	#define MAX(A,B)((A) > (B) ? (A) : (B))
#endif

#ifndef NS_ENUM
	#define NS_ENUM(_type, _name) enum _name : _type _name; enum _name : _type
#endif

/**
 * Creates a mutable array which does not retain references to the objects it contains.
 *
 * Typically used with arrays of delegates.
 */
NSMutableArray* AFCreateNonRetainingArray(void);

/**
 * Creates a mutable dictionary which does not retain references to the values it contains.
 *
 * Typically used with dictionaries with delegates.
 */
NSMutableDictionary* AFCreateNonRetainingDictionary(void);

/**
 * Tests if an object is a non-empty string.
 */
BOOL AFIsNonEmptyString(id object);
BOOL AFIsEmpty(id object);