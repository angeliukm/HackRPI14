//
//  AFForecastPeriod.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"


@interface AFForecastPeriod : AFObject {
    NSDate* _timestamp;
	NSDate* _validTime;
	NSTimeZone *_timeZone;
	NSString* _weather;
	NSString* _weatherCoded;
	NSString* _weatherFull;
	NSArray* _weatherFullCoded;
	NSString* _cloudsCoded;
	NSNumber* _skyCoverage;
	NSString* _icon;
	NSNumber* _maxTempF;
	NSNumber* _maxTempC;
	NSNumber* _minTempF;
	NSNumber* _minTempC;
	NSNumber* _tempF;
	NSNumber* _tempC;
	NSNumber *_avgTempF;
	NSNumber *_avgTempC;
	NSNumber* _feelslikeF;
	NSNumber* _feelslikeC;
	NSNumber* _dewpointF;
	NSNumber* _dewpointC;
	NSNumber* _pop;
	NSNumber* _precipIN;
	NSNumber* _precipMM;
	NSNumber* _snowIN;
	NSNumber* _snowCM;
	NSNumber* _windSpeedKTS;
	NSNumber* _windSpeedMPH;
	NSNumber* _windSpeedKMH;
	NSNumber* _windGustKTS;
	NSNumber* _windGustMPH;
	NSNumber* _windGustKMH;
	NSNumber* _windSpeedMaxKTS;
	NSNumber* _windSpeedMaxMPH;
	NSNumber* _windSpeedMaxKMH;
	NSNumber* _windSpeedMinKTS;
	NSNumber* _windSpeedMinMPH;
	NSNumber* _windSpeedMinKMH;
	NSString* _windDirection;
	NSNumber* _windDirectionDEG;
	NSString *_windDirMin;
	NSNumber *_windDirMinDEG;
	NSString *_windDirMax;
	NSNumber *_windDirMaxDEG;
	NSNumber *_pressureIN;
	NSNumber *_pressureMB;
	NSDate* _sunrise;
	NSDate* _sunset;
	BOOL _isDay;
}

/**
 GMT date for the period.
 */
@property (nonatomic, retain) NSDate* timestamp;

/*
 Local date for the period in the location's local time.
 @deprecated Provided the same value as `timestamp` so use `timestamp` for the `NSDate` for this period.
 */
@property (nonatomic, retain) NSDate* validTime;

/**
 Local timezone for the forecast.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 The short primary weather phrase for the period.
 */
@property (nonatomic, copy) NSString* weather;

/**
 The primary coded weather type for the period.
 */
@property (nonatomic, copy) NSString* weatherCoded;

/**
 The full weather phrase for the period.
 */
@property (nonatomic, copy) NSString* weatherFull;

/**
 All coded weather types for the period.
 */
@property (nonatomic, copy) NSArray* weatherFullCoded;

/**
 Sky coverage code.
 */
@property (nonatomic, copy) NSString* cloudsCoded;

/**
 Sky coverage as a percentage.
 */
@property (nonatomic, retain) NSNumber* skyCoverage;

/**
 Weather icon for the primary weather type.
 */
@property (nonatomic, copy) NSString* icon;

/**
 Maximum temperature forecasted for the period in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber* maxTempF;

/**
 Maximum temperature forecasted for the period in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber* maxTempC;

/**
 Minimum temperature forecasted for the period in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber* minTempF;

/**
 Minimum temperature forecasted for the period in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber* minTempC;

/**
 Forecasted temperature for the date specified by `validDate` in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber* tempF;

/**
 Forecasted temperature for the date specified by 'validDate` in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber* tempC;

/**
 The average temperature across the period in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *avgTempF;

/**
 The average temperature across the period in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *avgTempC;

/**
 The forecasted apparent temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber* feelslikeF;

/**
 Forecasted apparent temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber* feelslikeC;

/**
 Forecasted dew point at the start of the period in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber* dewpointF;

/**
 Forecasted dew point at the start of the period in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber* dewpointC;

/**
 Probability of precipitation (POP) for the period as a percentage.
 */
@property (nonatomic, retain) NSNumber* pop;

/**
 Forecasted forecasted precipitation for the period in inches.
 **/
@property (nonatomic, retain) NSNumber* precipIN;

/**
 Forecasted precipitation for the period in millimeters.
 */
@property (nonatomic, retain) NSNumber* precipMM;

/**
 Forecasted snowfall for the period in inches.
 */
@property (nonatomic, retain) NSNumber* snowIN;

/**
 Forecasted snowfall for the period in centimeters.
 */
@property (nonatomic, retain) NSNumber* snowCM;

/**
 Forecasted wind speed in knots (KTS).
 */
@property (nonatomic, retain) NSNumber* windSpeedKTS;

/**
 Forecasted wind speed in miles per hour (MPH).
 */
@property (nonatomic, retain) NSNumber* windSpeedMPH;

/**
 Forecasted wind speed in kilometers per hour (KMH).
 */
@property (nonatomic, retain) NSNumber* windSpeedKMH;

/**
 Forecasted wind gust speed in knots (KTS).
 */
@property (nonatomic, retain) NSNumber* windGustKTS;

/**
 Forecasted wind gust speed in miles per hour (MPH).
 */
@property (nonatomic, retain) NSNumber* windGustMPH;

/**
 Forecasted wind gust speed in kilometers per hour (KMH).
 */
@property (nonatomic, retain) NSNumber* windGustKMH;

/**
 Forecasted maximum wind speed in knots (KTS).
 */
@property (nonatomic, retain) NSNumber* windSpeedMaxKTS;

/**
 Forecasted maximum wind speed in miles per hour (MPH).
 */
@property (nonatomic, retain) NSNumber* windSpeedMaxMPH;

/** Forecasted maximum wind speed in kilometers per hour (KMH).
 */
@property (nonatomic, retain) NSNumber* windSpeedMaxKMH;

/**
 Forecasted minimum wind speed in knots (KTS).
 */
@property (nonatomic, retain) NSNumber* windSpeedMinKTS;

/**
 Forecasted minimum wind speed in miles per hour (MPH).
 */
@property (nonatomic, retain) NSNumber* windSpeedMinMPH;

/**
 Forecasted minimum wind speed in kilometers per hour (KMH).
 */
@property (nonatomic, retain) NSNumber* windSpeedMinKMH;

/**
 The wind speed range rounded to the nearest interval of 5 miles per hour above and below the forecasted value.
 */
@property (nonatomic, readonly) NSString *windSpeedRangeMPH;

/**
 The wind speed range rounded to the nearest interval of 5 kilometers per hour above and below the forecasted value.
 */
@property (nonatomic, readonly) NSString *windSpeedRangeKMH;

/**
 The wind speed range rounded to the nearest interval of 5 knots per hour above and below the forecasted value.
 */
@property (nonatomic, readonly) NSString *windSpeedRangeKTS;

/**
 Forecasted cardinal wind direction (e.g., N, E, S, W).
 */
@property (nonatomic, copy) NSString* windDirection;

/**
 Forecasted wind direction in degrees (0-359, 0=North).
 */
@property (nonatomic, retain) NSNumber* windDirectionDEG;

/**
 Cardinal wind direction at the time of the forecasted minimum wind speed.
 */
@property (nonatomic, copy) NSString *windDirMin;

/**
 Wind direction in degrees at the time of the forecast minimum wind speed.
 */
@property (nonatomic, retain) NSNumber *windDirMinDEG;

/**
 Cardinal wind direction at the time of the forecasted maximum wind speed.
 */
@property (nonatomic, copy) NSString *windDirMax;

/**
 Wind direction in degrees at the time of the forecast maximum wind speed.
 */
@property (nonatomic, retain) NSNumber *windDirMaxDEG;

/**
 Forecasted barometric pressure in inches of mercury.
 */
@property (nonatomic, retain) NSNumber *pressureIN;

/**
 Forecasted barometric pressure in millibars.
 */
@property (nonatomic, retain) NSNumber *pressureMB;

/**
 GMT date of the sunrise for the period.
 */
@property (nonatomic, retain) NSDate* sunrise;

/**
 GMT date of the sunset for the period.
 */
@property (nonatomic, retain) NSDate* sunset;

/**
 Whether or not the period is during the day (between sunrise and sunset times).
 */
@property (nonatomic, assign) BOOL isDay;

@end
