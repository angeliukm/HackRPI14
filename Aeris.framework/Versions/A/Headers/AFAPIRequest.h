//
//  AFAPIRequest.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 5/2/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Aeris/AFRequest.h>
#import <Aeris/AFAPIResponse.h>
#import "ASIFormDataRequest.h"

@protocol AFAPIRequestDelegate;

/**
 An implementation of ASIFormDataRequest that adds additional functionality needed
 for all API calls.
 
 Passes consumer access ids and keys as well as application info as required per API specifications.
 */
@interface AFAPIRequest : AFRequest {
	NSString *_resourcePath;
}

/**
 The resource path portion of this loader's URL.
 */
@property (nonatomic, copy) NSString *resourcePath;

/**
 Creates and returns an AFAPIRequest instance for a specific REST resource and delegate.
 
 @param resource The resource path to initialize the request with
 @param delegate The observer for the request
 @return An auto-released instance of AFAPIRequest
 */
+ (AFAPIRequest *)requestWithResource:(NSString *)resource delegate:(id)delegate;

/**
 Creates and returns an AFAPIRequest instance for a specific REST request and delegate.
 */
- (id)initWithResource:(NSString *)resource delegate:(id)delegate;

@end

@protocol AFAPIRequestDelegate <AFRequestDelegate>

@end