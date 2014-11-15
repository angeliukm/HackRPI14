//
//  AFObservationArchive.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/4/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFObservationArchive : AFObject {
	NSString *_stationId;
	NSNumber *_lat;
	NSNumber *_lon;
	NSString *_name;
	NSString *_state;
	NSString *_country;
	NSArray *_periods;
}

/**
 
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
 The observation locations name. Null if not available.
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
 Array of observation objects.
 */
@property (nonatomic, copy) NSArray *periods;

@end
