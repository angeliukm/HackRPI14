//
//  AFObservation.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFObservation : AFObject {
	NSString *_id;
	NSNumber *_lat;
	NSNumber *_lon;
	NSString *_city;
	NSString *_state;
	NSString *_country;
    NSDate *_timestamp;
	NSDate *_validTime;
	NSTimeZone *_timeZone;
	NSString *_weather;
	NSString *_weatherCoded;
	NSString *_weatherFull;
	NSString *_weatherFullCoded;
	NSString *_cloudsCoded;
	NSString *_icon;
	NSNumber *_tempF;
	NSNumber *_tempC;
	NSNumber *_feelslikeF;
	NSNumber *_feelslikeC;
	NSNumber *_windchillF;
	NSNumber *_windchillC;
	NSNumber *_heatindexF;
	NSNumber *_heatindexC;
	NSNumber *_dewpointF;
	NSNumber *_dewpointC;
	NSNumber *_humidity;
	NSNumber *_windSpeedKTS;
	NSNumber *_windSpeedMPH;
	NSNumber *_windSpeedKMH;
	NSString *_windDirection;
	NSNumber *_windDirectionDEG;
	NSNumber *_windGustKTS;
	NSNumber *_windGustMPH;
	NSNumber *_windGustKMH;
	NSNumber *_pressureIN;
	NSNumber *_pressureMB;
	NSNumber *_visibilityKM;
	NSNumber *_visibilityMI;
	NSString *_flightRule;
	NSString *_raw;
	NSDate *_sunrise;
	NSDate *_sunset;
	BOOL _isDay;
}

/**
 Station identifier for this location, usually an ICAO.
 */
@property (nonatomic, copy) NSString *identifier;

/**
 Latitude position for the reporting station in degrees.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position for the reporting station in degrees.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 City in which the reporting station is located (if available).
 */
@property (nonatomic, copy) NSString *city;

/**
 State in which the reporting station is located (if available).
 */
@property (nonatomic, copy) NSString *state;

/**
 Country in which the reporting station is located (if available).
 */
@property (nonatomic, copy) NSString *country;

/**
 GMT Date of the observation.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local date of the observation.
 @deprecated Provided the same value as `timestamp` so use `timestamp` for the `NSDate` for this period.
 */
@property (nonatomic, retain) NSDate *validTime;

/**
 Local time zone for the location.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Primary observed weather phrase.
 */
@property (nonatomic, copy) NSString *weather;

/**
 Coded weather for the primary weather observed.
 */
@property (nonatomic, copy) NSString *weatherCoded;

/**
 Full observed weather phrase.
 */
@property (nonatomic, copy) NSString *weatherFull;

/**
 Full set of weather codes for the observed weather.
 */
@property (nonatomic, copy) NSString *weatherFullCoded;

/**
 Sky coverage code.
 */
@property (nonatomic, copy) NSString *cloudsCoded;

/**
 Weather icon representing the observed weather from the default icon set.
 */
@property (nonatomic, copy) NSString *icon;

/**
 Observed temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *tempF;

/**
 Observed temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *tempC;

/**
 Apparent temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *feelslikeF;

/**
 Apparent temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *feelslikeC;

/**
 Calculated wind chill temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *windchillF;

/**
 Calculated wind chill temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *windchillC;

/**
 Calculated heat index temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *heatindexF;

/**
 Calculated heat index temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *heatindexC;

/**
 Observed dew point temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *dewpointF;

/**
 Observed dew point temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *dewpointC;

/**
 Calculated relative humidity as a percentage.
 */
@property (nonatomic, retain) NSNumber *humidity;

/**
 Observed wind speed in knots.
 */
@property (nonatomic, retain) NSNumber *windSpeedKTS;

/**
 Observed wind speed in miles per hour.
 */
@property (nonatomic, retain) NSNumber *windSpeedMPH;

/**
 Observed wind speed in kilometers per hour.
 */
@property (nonatomic, retain) NSNumber *windSpeedKMH;

/**
 Observed cardianal wind direction.
 */
@property (nonatomic, copy) NSString *windDirection;

/**
 Observed wind direction in degrees (0=North).
 */
@property (nonatomic, retain) NSNumber *windDirectionDEG;

/**
 Observed wind gust speed in knots.
 */
@property (nonatomic, retain) NSNumber *windGustKTS;

/**
 Observed wind gust speed in miles per hour.
 */
@property (nonatomic, retain) NSNumber *windGustMPH;

/**
 Observed wind gust speed in kilometers per hour.
 */
@property (nonatomic, retain) NSNumber *windGustKMH;

/**
 Barometric pressure in inches of mercury.
 */
@property (nonatomic, retain) NSNumber *pressureIN;

/**
 Barometric pressure in millibars.
 */
@property (nonatomic, retain) NSNumber *pressureMB;

/**
 Observed visibility in kilometers.
 */
@property (nonatomic, retain) NSNumber *visibilityKM;

/**
 Observed visibility in miles.
 */
@property (nonatomic, retain) NSNumber *visibilityMI;

@property (nonatomic, retain) NSNumber *snowDepthIN;
@property (nonatomic, retain) NSNumber *snowDepthCM;

/**
 Flight rule indicator based on weather conditions only.
 
 Potential values are: LIFR, IFR, MVFR, VFR
 */
@property (nonatomic, copy) NSString *flightRule;

/**
 Raw observation data if available.
 */
@property (nonatomic, copy) NSString *raw;

/**
 GMT date of the sunrise at the reporting location.
 */
@property (nonatomic, retain) NSDate *sunrise;

/**
 GMT date of the sunset at the reporting location.
 */
@property (nonatomic, retain) NSDate *sunset;

/**
 Whether or not the observation occurred during daylight hours based on sunrise and sunset times.
 */
@property (nonatomic, assign) BOOL isDay;

@end
