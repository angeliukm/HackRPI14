//
//  AFTidePeriod.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFTidePeriod : AFObject {
	NSDate *timestamp_;
	NSTimeZone *timeZone_;
	NSString *type_;
	NSNumber *heightFT_;
	NSNumber *heightM_;
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
 Type of tide, "l" for low and "h" for high.
 */
@property (nonatomic, retain) NSString *type;

/**
 Tide height in feet.
 */
@property (nonatomic, retain) NSNumber *heightFT;

/**
 Tide height in meters.
 */
@property (nonatomic, retain) NSNumber *heightM;

@end
