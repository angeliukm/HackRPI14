//
//  AFAdvisory.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/6/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"

/**
 * Base model class for advisory objects.
 */
@interface AFAdvisory : AFObject {
    NSString* _type;
	NSString* _name;
	NSString *_zone;
	NSString* _body;
	NSString* _bodyFull;
	NSDate* _issued;
	NSDate* _begins;
	NSDate* _expires;
	NSDate *_added;
	NSTimeZone *_timeZone;
	
	NSString* _polygon;
}

/**
 Valid-time event code (VTEC) for the advisory.
 */
@property (nonatomic, copy) NSString* type;

/**
 Type name of the advisory.
 */
@property (nonatomic, copy) NSString* name;

/**
 Weather zone for the advisory.
 */
@property (nonatomic, copy) NSString *zone;

/**
 Shortened and formatted version of the advisory body text.
 */
@property (nonatomic, copy) NSString* body;

/**
 Complete, unmodified version of the advisory body text including raw headers.
 */
@property (nonatomic, copy) NSString* bodyFull;

/**
 GMT date when the advisory was issued.
 */
@property (nonatomic, retain) NSDate* issued;

/**
 GMT date when the advisory goes into effect.
 */
@property (nonatomic, retain) NSDate* begins;

/**
 GMT date when the advisory expires.
 */
@property (nonatomic, retain) NSDate* expires;

/**
 GMT date when the advisory was stored.
 */
@property (nonatomic, retain) NSDate *added;

/**
 Time zone of the location for the advisory.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 A comma-delimited string of coordinates (latitude, longitude) defining the boundary for the advisory.
 
 Typically this is only used for certain short-fuse advisories, such as tornado and severe thunderstorm warnings.
 */
@property (nonatomic, copy) NSString* polygon;

@end
