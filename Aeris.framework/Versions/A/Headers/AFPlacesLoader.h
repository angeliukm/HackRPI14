//
//  AFPlacesLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/29/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFPlace.h"

/**
 * Requests and loads remote place data into local domain objects from the API.
 */
@interface AFPlacesLoader : AFObjectLoader {
    AFPlace* _place;
}

/**
 * The `AFPlace` instance associated with this loader object.
 */
@property (nonatomic, retain) AFPlace* place;

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests profile data for the specified `AFPlace` instance.
 
 @param place The `AFPlace` to request data for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestPlace:(AFPlace*)place options:(NSDictionary*)options;

/**
 Searches for a place using the provided `AFPlace` instance.
 
 The result will be an NSArray of AFPlace instances for all places that matched the initial search query.
 
 @param place The `AFPlace` to search for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)searchForPlace:(AFPlace*)place options:(NSDictionary*)options;

/**
 Searches for a place using a zip code.
  
 @param place The `AFPlace` containing the zip code to search for.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)searchForPlaceWithZipcode:(NSString *)zipcode options:(NSDictionary*)options;

/**
 Searches for a place with a specified city name, state and country. Use `nil` for a location that does not have a state.
 
 @param name The city name to use in the query.
 @param state (optional) The state abbreviation to use in the query.
 @param country The country to use in the query.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)searchForPlaceWithName:(NSString *)name state:(NSString *)state country:(NSString *)country options:(NSDictionary*)options;

@end