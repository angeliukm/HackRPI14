//
//  AFMoonPhase.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/17/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFMoonPhase : AFObject {
	NSDate *timestamp_;
	NSTimeZone *timeZone_;
	NSNumber *code_;
	NSString *name_;
}

/**
 GMT date when the event took place.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 
 */
@property (nonatomic, retain) NSNumber *code;

/**
 
 */
@property (nonatomic, copy) NSString *name;

@end
