//
//  AFAdvisoriesLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/6/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFAdvisory.h"
#import "AFPlace.h"

/**
 Requests and loads remote advisory data into local domain objects from the API.
 */
@interface AFAdvisoriesLoader : AFObjectLoader {
    
}

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests and loads advisories for the specified location instance and request options.
 
 @param place The `AFPlace` to return advisories for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestAdvisoriesForPlace:(AFPlace *)place options:(NSDictionary *)options;

@end
