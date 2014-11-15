//
//  AFPlace.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/8/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "AFObject.h"

/**
 * Base model class for all place-specific objects.
 */
@interface AFPlace : AFObject {
	NSNumber* _lat;
	NSNumber* _lon;
	
    NSString* _name;
	NSString* _state;
	NSString* _stateFull;
	NSString* _country;
	NSString* _countryFull;
	NSString* _region;
	NSString* _regionFull;
	NSString* _continent;
	NSString* _continentFull;
	NSString *_zipcode;
	
	NSNumber* _tzoffset;
	NSString* _tzname;
	NSString *_tz;
	BOOL _isDst;
	NSNumber* _elevationM;
	NSNumber* _elevationFT;
	NSNumber* _population;
}

/**
 Latitude position of the location.
 */
@property (nonatomic, retain) NSNumber* latitude;

/**
 Longitude position of the location.
 */
@property (nonatomic, retain) NSNumber* longitude;

/**
 Primary name of the location.
 */
@property (nonatomic, copy) NSString* name;

/**
 Abbreviated state or province for the location, if available.
 */
@property (nonatomic, copy) NSString* state;

/**
 Full state or province name for the location, if available.
 */
@property (nonatomic, copy) NSString* stateFull;

/**
 Abbreviated country for the location.
 */
@property (nonatomic, copy) NSString* country;

/**
 Full country name for the location.
 */
@property (nonatomic, copy) NSString* countryFull;

/**
 Zip code associated with the place, if defined.
 */
@property (nonatomic, copy) NSString *zipcode;

/**
 Abbreviated geographical region for the location (US-based locations only).
 */
@property (nonatomic, copy) NSString* region;

/**
 Geographical region for the location (US-based locations only).
 */
@property (nonatomic, copy) NSString* regionFull;

/**
 Abbreviated continent the location belongs to.
 */
@property (nonatomic, copy) NSString* continent;

/**
 Full continent name the location belongs to.
 */
@property (nonatomic, copy) NSString* continentFull;

/**
 Timezone offset from GMT for the location in seconds.
 */
@property (nonatomic, retain) NSNumber* tzoffset;

/**
 Timezone abbreviation for the location.
 */
@property (nonatomic, copy) NSString* tzname;

/**
 Timezone identifier string.
 */
@property (nonatomic, copy) NSString *tz;

/**
 Whether or not the location is current observing daylight savings time (DST).
 */
@property (nonatomic, assign) BOOL isDst;

/**
 Elevation of the location in meters.
 */
@property (nonatomic, retain) NSNumber* elevationM;

/**
 Elevation of the location in feet.
 */
@property (nonatomic, retain) NSNumber* elevationFT;

/**
 Population of the location.
 */
@property (nonatomic, retain) NSNumber* population;


/**
 Creates and returns an autoreleased `AFPlace` instance with a city, state and country.
 */
+ (AFPlace*)placeWithCity:(NSString*)city state:(NSString*)state country:(NSString*)country;

/**
 Creates and returns an autoreleased `AFPlace` instance with a latitude and longitude position.
 */
+ (AFPlace*)placeWithLatitude:(NSNumber*)lat longitude:(NSNumber*)lon;

/**
 Creates and returns an autoreleased `AFPlace` instance for the provided coordinate.
 */
+ (AFPlace *)placeWithCoordinate:(CLLocationCoordinate2D)coordinate;

/**
 Creates and returns an autoreleased `AFPlace` instance with a zipcode.
 
 Only US and Canadian zipcodes are currently supported.
 */
+ (AFPlace*)placeWithZipcode:(NSString*)zipcode;

- (id)initWithCity:(NSString*)city state:(NSString*)state country:(NSString*)country;
- (id)initWithLatitude:(NSNumber*)lat longitude:(NSNumber*)lon;
- (id)initWithZipcode:(NSString*)zipcode;

/**
 Generates the place string properly formatted for API requests based on this place configuration.
 */
- (NSString*)stringForQuery;

/**
 Generates the string required for direct-queries via the API based on this place configuration.
 */
- (NSString*)stringForSearch;

@end
