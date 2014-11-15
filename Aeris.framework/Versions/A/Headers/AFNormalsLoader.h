//
//  AFNormalsLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObjectLoader.h"

@interface AFNormalsLoader : AFObjectLoader

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests and loads normals for the specified `AFPlace` instance and request options.
 
 @param place The `AFPlace` to request normals data for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestNormalsForPlace:(AFPlace *)place options:(NSDictionary *)options;

/**
 Requests and loads normals for the specified station and request options.
 
 @param stationId The station id to request data for.
 @param options A NSDictionary containing the options parameters for the request.
 */
- (void)requestNormalsForStation:(NSString *)stationId options:(NSDictionary *)options;

/**
 Requests and loads station profile information for the specified station id and request options.
 
 @param stationId The station id to request data for
 */
- (void)requestStationWithId:(NSString *)stationId;

/**
 Requests stations closest to the specified `AFPlace` instance.
 
 Query will limit the search to within 50 miles from the passed location. In order to query a broader region,
 set the `radius` option to your custom value (e.g. @"500mi", @"radius").
 
 @param place The `AFPlace` from which to search for closest stations from.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestClosestStations:(AFPlace *)place options:(NSDictionary *)options;

@end
