//
//  AFEarthquake.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/10/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFEarthquake : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSString *_name;
	NSString *_city;
	NSString *_state;
	NSString *_country;
	NSString *_region;
	NSTimeZone *_timeZone;
	NSString *_quakeId;
	NSDate *_timestamp;
	NSNumber *_magnitude;
	NSString *_type;
	NSNumber *_depthKM;
	NSNumber *_depthMI;
}

///---------------------------
/// @name Location Information
///---------------------------

/**
 Latitude position of the event.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the event.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 The place or nearest place to the event
 */
@property (nonatomic, copy) NSString *name;

/**
 Place or nearest place to the event.
 */
@property (nonatomic, copy) NSString *city;

/**
 Abbreviated state in which the event occurred.
 */
@property (nonatomic, copy) NSString *state;

/**
 Abbreviated country in which the event occurred.
 */
@property (nonatomic, copy) NSString *country;

/**
 USGS region in which the event occurred.
 */
@property (nonatomic, copy) NSString *region;

/**
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

///----------------------
/// @name Earthquake Data
///----------------------

/**
 USGS earthquake id.
 */
@property (nonatomic, copy) NSString *quakeId;

/**
 GMT date when the event took place.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Magnitude of the earthquake.
 */
@property (nonatomic, retain) NSNumber *magnitude;

/**
 Earthquake category based on magnitude.
 
 mini:		0 - 2.9
 minor:		3 - 3.9
 light:		4 - 4.9
 moderate:	5 - 5.9
 strong:	6 - 6.9
 major:		7 -7.9
 great:		8+
 */
@property (nonatomic, copy) NSString *type;

/**
 Depth of the earthquake in kilometers.
 */
@property (nonatomic, retain) NSNumber *depthKM;

/**
 Depth of the earthquake in miles.
 */
@property (nonatomic, retain) NSNumber *depthMI;

@end
