//
//  AFNormal.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFNormal : AFObject {
	NSString *stationId_;
	NSNumber *lon_;
	NSNumber *lat_;
	NSString *city_;
	NSString *state_;
	NSString *country_;
	NSArray *periods_;
}

///---------------------------
/// @name Location Information
///---------------------------

/**
 The coop/station id that the normal data is based on.
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

///--------------
/// @name Periods
///--------------

/**
 Array of AFNormalPeriod objects that contain the normals, where each object is for a specific period (day, month, year etc).
 */
@property (nonatomic, copy) NSArray *periods;

@end
