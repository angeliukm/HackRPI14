//
//  AFForecastsLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFPlace.h"

/**
 Requests and loads remote forecast data into local domain objects from the API.
 */
@interface AFForecastsLoader : AFObjectLoader {
    
}

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests and loads extended forecasts for the specified `AFPlace` instance and request options.
 
 @param place The `AFPlace` to return forecast data for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestForecastForPlace:(AFPlace *)place options:(NSDictionary *)options;

@end
