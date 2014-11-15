//
//  AFSunMoon.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/10/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFSunMoon : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSDate *_timestamp;
	NSTimeZone *_timeZone;
	
	NSDate *_sunrise;
	NSDate *_sunset;
	NSDate *_sunTransit;
	NSDate *_twilightCivilBegin;
	NSDate *_twilightCivilEnd;
	NSDate *_twilightNauticalBegin;
	NSDate *_twilightNauticalEnd;
	NSDate *_twilightAstronomicalBegin;
	NSDate *_twilightAstronomicalEnd;
	
	NSDate *_moonrise;
	NSDate *_moonset;
	NSNumber *_moonPhasePercentage;
	NSString *_moonPhaseName;
	NSNumber *_moonIllumination;
	NSNumber *_moonAge;
	NSNumber *_moonAngle;
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
 GMT date for the day the information is for.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

///---------------------------
/// @name Sun Information
///---------------------------

/**
 GMT date for the sunrise.
 */
@property (nonatomic, retain) NSDate *sunrise;

/**
 GMT date for the sunset.
 */
@property (nonatomic, retain) NSDate *sunset;

/**
 GMT date for the point at which the sun is directly overhead.
 */
@property (nonatomic, retain) NSDate *sunTransit;

/**
 GMT date for the first civil twilight.
 */
@property (nonatomic, retain) NSDate *twilightCivilBegin;

/**
 GMT date for the second civil twilight.
 */
@property (nonatomic, retain) NSDate *twilightCivilEnd;

/**
 GMT date for the first nautical twilight.
 */
@property (nonatomic, retain) NSDate *twilightNauticalBegin;

/**
 GMT date for the second nautical twilight.
 */
@property (nonatomic, retain) NSDate *twilightNauticalEnd;

/**
 GMT date for the first astronomical twilight.
 */
@property (nonatomic, retain) NSDate *twilightAstronomicalBegin;

/**
 GMT date for the second astronomical twilight.
 */
@property (nonatomic, retain) NSDate *twilightAstronomicalEnd;

///---------------------------
/// @name Moon Information
///---------------------------

/**
 GMT date for the moon rise.
 */
@property (nonatomic, retain) NSDate *moonrise;

/**
 GMT date for the moon set.
 */
@property (nonatomic, retain) NSDate *moonset;

/**
 Moon phase as a percentage.
 */
@property (nonatomic, retain) NSNumber *moonPhasePercentage;

/**
 Name of the moon phase.
 */
@property (nonatomic, copy) NSString *moonPhaseName;

/**
 Percentage of the moon that is illuminated.
 */
@property (nonatomic, retain) NSNumber *moonIllumination;

/**
 Age of the moon phase in days.
 */
@property (nonatomic, retain) NSNumber *moonAge;

/**
 Angle of the moon phase.
 */
@property (nonatomic, retain) NSNumber *moonAngle;

@end
