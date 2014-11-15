//
//  AFStormReport.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/29/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import "AFObject.h"

@interface AFStormReport : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSDate *_timestamp;
	NSDate *_datetime;
	NSTimeZone *_timeZone;
	NSString *_code;
	NSString *_type;
	NSString *_name;
	NSString *_reporter;
	NSString *_comments;
	NSString *_wfo;
	NSString *_city;
	NSString *_state;
	NSString *_county;
	NSString *_country;
	NSNumber *_value;
	NSNumber *_windSpeedMPH;
	NSNumber *_windSpeedKMH;
	NSNumber *_windSpeedKTS;
	NSNumber *_rainIN;
	NSNumber *_rainMM;
	NSNumber *_snowIN;
	NSNumber *_snowCM;
	NSNumber *_hailIN;
	NSNumber *_hailMM;
}

/**
 Latitude position of the report.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the report.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 GMT date when the event took place.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local date when the event took place.
 @deprecated Provided the same value as `timestamp`, so use the `timestamp` property instead.
 */
@property (nonatomic, retain) NSDate *datetime;

/**
 Local time zone of the event location.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Report code as assigned by the National Weather Service (NWS).
 */
@property (nonatomic, copy) NSString *code;

/**
 Type of report.
 */
@property (nonatomic, copy) NSString *type;

/**
 Brief description of the event, usually contains the location or relative distance from a populated place.
 */
@property (nonatomic, copy) NSString *name;

/**
 General organization who made the report (e.g., "trained spotter", "NWS employee", "broadcast media").
 */
@property (nonatomic, copy) NSString *reporter;

/**
 Additional details and comments describing the event (not always used).
 */
@property (nonatomic, copy) NSString *comments;

/**
 Weather forecast office (WFO) reporting the event.
 */
@property (nonatomic, copy) NSString *wfo;

/**
 Place or nearest place to the event.
 */
@property (nonatomic, copy) NSString *city;

/**
 Abbreviated state in which the event occurred.
 */
@property (nonatomic, copy) NSString *state;

/**
 County in which the event occurred.
 */
@property (nonatomic, copy) NSString *county;

/**
 Abbreviated country in which the event occurred.
 */
@property (nonatomic, copy) NSString *country;

/**
 Actual reported value from the report (rainfall or snowfall total, wind speed, etc).
 */
@property (nonatomic, retain) NSNumber *value;

/**
 For wind-related events, the observed wind speed in miles per hour.
 */
@property (nonatomic, retain) NSNumber *windSpeedMPH;

/**
 For wind-related events, the observed wind speed in kilometers per hour.
 */
@property (nonatomic, retain) NSNumber *windSpeedKMH;

/**
 For wind-related events, the observed wind speed in knots.
 */
@property (nonatomic, retain) NSNumber *windSpeedKTS;

/**
 For rain/flood-related events, the total rainfall observed in inches.
 */
@property (nonatomic, retain) NSNumber *rainIN;

/**
 For rain/flood-related events, the total rainfall observed in millimeters.
 */
@property (nonatomic, retain) NSNumber *rainMM;

/**
 For snow-related events, the total snowfall observed in inches.
 */
@property (nonatomic, retain) NSNumber *snowIN;

/**
 For snow-related events, the total snowfall observed in centimeters.
 */
@property (nonatomic, retain) NSNumber *snowCM;

/**
 For hail-related events, the hail stone diameter observed in inches.
 */
@property (nonatomic, retain) NSNumber *hailIN;

/**
 For hail-related events, the hail stone diameter observed in millimeters.
 */
@property (nonatomic, retain) NSNumber *hailMM;

@end
