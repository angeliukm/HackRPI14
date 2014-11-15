//
//  AFRecord.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/10/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFRecord : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSString *_type;
	NSNumber *_code;
	NSString *_stationId;
	NSString *_stationType;
	NSString *_stationName;
	NSString *_city;
	NSString *_state;
	NSString *_country;
	NSTimeZone *_timeZone;
	NSString *_name;
	NSDate *_timestamp;
	NSString *_newValue;
	NSNumber *_newSnowIN;
	NSNumber *_newSnowCM;
	NSNumber *_newRainIN;
	NSNumber *_newRainMM;
	NSNumber *_newTempF;
	NSNumber *_newTempC;
	NSDate *_previousTimestamp;
	NSString *_previousValue;
	NSNumber *_previousSnowIN;
	NSNumber *_previousSnowCM;
	NSNumber *_previousRainIN;
	NSNumber *_previousRainMM;
	NSNumber *_previousTempF;
	NSNumber *_previousTempC;
	BOOL _isTied;
}

///---------------------------
/// @name Location Information
///---------------------------

/**
 Latitude position of the record.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the record.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 Record type as a code.
 
 prcp:	precipitation/rain
 snow:	snow
 maxt:	maximum temperature
 mint:	minimum temperature
 himn:	high minimum temperature
 lomx:	low maximum temperature
 */
@property (nonatomic, copy) NSString *type;

/**
 Numeric representation of the record type.
 */
@property (nonatomic, retain) NSNumber *code;

/**
 Station id where the record occurred.
 */
@property (nonatomic, copy) NSString *stationId;

/**
 Type of reporting station.
 */
@property (nonatomic, copy) NSString *stationType;

/**
 Name of the reporting station.
 */
@property (nonatomic, copy) NSString *stationName;

/**
 Place or nearest place to the event.
 */
@property (nonatomic, copy) NSString *city;

/**
 The state abbreviation in which the event occurred
 */
@property (nonatomic, copy) NSString *state;

/**
 The country abbreviation in which the event occurred
 */
@property (nonatomic, copy) NSString *country;

/**
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Brief description of the event, usually contains the location or relative distance from a populated place.
 */
@property (nonatomic, copy) NSString *name;

///----------------------
/// @name New Record Data
///----------------------

/**
 GMT date when the new record took place.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Actual reported value from the report (rainfall or snowfall total, temperature, etc).
 */
@property (nonatomic, copy) NSString *value;

/**
 For snow-related records, the observed snowfall in inches.
 */
@property (nonatomic, retain) NSNumber *snowIN;

/**
 For snow-related records, the observed snowfall in centimeters.
 */
@property (nonatomic, retain) NSNumber *snowCM;

/**
 For rain-related records, the observed rainfall in inches.
 */
@property (nonatomic, retain) NSNumber *rainIN;

/**
 For rain-related records, the observed rainfall in millimeters.
 */
@property (nonatomic, retain) NSNumber *rainMM;

/**
 For temperature-related records, the observed temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *tempF;

/**
 For temperature-related records, the observed temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *tempC;

///---------------------------
/// @name Previous Record Data
///---------------------------

/**
 GMT date when the previous record took place.
 */
@property (nonatomic, retain) NSDate *previousTimestamp;

/**
 Actual previous value from the report (rainfall or snowfall total, temperature, etc).
 */
@property (nonatomic, copy) NSString *previousValue;

/**
 For snow-related records, the previously observed snowfall in inches.
 */
@property (nonatomic, retain) NSNumber *previousSnowIN;

/**
 For snow-related records, the previously observed snowfall in centimeters.
 */
@property (nonatomic, retain) NSNumber *previousSnowCM;

/**
 For rain-related records, the previously observed rainfall in inches.
 */
@property (nonatomic, retain) NSNumber *previousRainIN;

/**
 For rain-related records, the previously observed rainfall in millimeters.
 */
@property (nonatomic, retain) NSNumber *previousRainMM;

/**
 For temperature-related records, the previously observed temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *previousTempF;

/**
 For temperature-related records, the previously observed temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *previousTempC;

/**
 Whether or not the record was tied.
 */
@property (nonatomic, assign) BOOL isTied;

@end
