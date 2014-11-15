//
//  AFParser.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/10/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

/**
 A parser is responsible for transforming a string of data into
 a dictionary, which allows for easier mapping of model properties
 using key-value coding.
 
 Modeled after RestKit parsers.
 */
@protocol AFParser

/**
 Return a key-value representation of a payload.
 Object attributes are encoded as a dictionary and collections
 of objects are returned as arrays.
 
 @param string The NSString instance to convert to an object.
 */
- (id)objectFromString:(NSString*)string;

/**
 Return a string representation of a dictionary/array series as a string.
 
 @param object The object to convert to an NSString instance.
 */
- (NSString*)stringFromObject:(id)object;

@end;
