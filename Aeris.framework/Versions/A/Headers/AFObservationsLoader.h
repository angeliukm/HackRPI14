//
//  AFObservationsLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFPlace.h"

/**
 * Requests and loads remote observation data into local domain objects from the API.
 */
@interface AFObservationsLoader : AFObjectLoader {
    
}

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests and loads observations for the specified `AFPlace` instance and request options.
 
 @param place The `AFPlace` to request observation data for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestObservationForPlace:(AFPlace *)place options:(NSDictionary *)options;

/**
 Requesets and loads recent observations for the specified `AFPlace` instance and request options.
 
 @param place The `AFPlace` to request observation data for.
 @param total The total number of observations to return.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestRecentObservationsForPlace:(AFPlace *)place total:(NSInteger)total options:(NSDictionary *)options;

/**
 Requests archived observations for the specified `AFPlace` instance and date ranges.
 
 @param place The `AFPlace` to request observation data for.
 @param fromDate The starting date for the date range.
 @param toDate The ending date for the date range.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestObservationsForPlace:(AFPlace *)place fromDate:(NSDate *)fromDate toDate:(NSDate *)toDate options:(NSDictionary *)options;

@end
