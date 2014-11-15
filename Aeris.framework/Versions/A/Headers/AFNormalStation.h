//
//  AFNormalStation.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFNormalStation : AFObject {
	NSString *stationId_;
	NSNumber *lat_;
	NSNumber *lon_;
	NSString *city_;
	NSString *state_;
	NSString *country_;
	NSTimeZone *timeZone_;
	NSNumber *elevationFT_;
	NSNumber *elevationM_;
	NSString *wmoId_;
	BOOL hasTemp_;
	BOOL hasPrecip_;
	BOOL hasSnow_;
}

/**
 Coop/station id.
 */
@property (nonatomic, copy) NSString *stationId;

/**
 Latitude position of the event.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the event.
 */
@property (nonatomic, retain) NSNumber *longitude;

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
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Elevation of the station in feet.
 */
@property (nonatomic, retain) NSNumber *elevationFT;

/**
 Elevation of the station in meters.
 */
@property (nonatomic, retain) NSNumber *elevationM;

/**
 WMO id of the station, if available.
 */
@property (nonatomic, copy) NSString *wmoId;

/**
 Whether or not the station has temperature normals data.
 */
@property (nonatomic, assign) BOOL hasTemp;

/**
 Whether or not the station has precipitation normals data.
 */
@property (nonatomic, assign) BOOL hasPrecip;

/**
 Whether or not the station has snowfall normals data.
 */
@property (nonatomic, assign) BOOL hasSnow;

@end
