//
//  AFTide.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFTide : AFObject {
	NSString *stationId_;
	NSNumber *lon_;
	NSNumber *lat_;
	NSString *name_;
	NSString *state_;
	NSString *country_;
	NSTimeZone *timeZone_;
	NSArray *periods_;
}

///---------------------------
/// @name Location Information
///---------------------------

/**
 
 */
@property (nonatomic, copy) NSString *stationId;

/**
 Longitude position of the event.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 Latitude position of the event.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Name of the station.
 */
@property (nonatomic, copy) NSString *name;

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
 Array of AFTidePeriod instances that contain the tidal information, where each object is for a specific tidal period (high, low etc).
 */
@property (nonatomic, copy) NSArray *periods;

@end
