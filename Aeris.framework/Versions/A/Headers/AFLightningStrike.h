//
//  AFLightningStrike.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/21/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import "AFObject.h"

@interface AFLightningStrike : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSDate *_timestamp;
	NSTimeZone *_timeZone;
	NSString *_pulseType;
	NSNumber *_peakAmperage;
}

/**
 Latitude position of the strike.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the strike.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 GMT date of the strike.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local time zone in which the strike occurred.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 
 */
@property (nonatomic, copy) NSString *pulseType;

/**
 
 */
@property (nonatomic, retain) NSNumber *peakAmperage;

@end
