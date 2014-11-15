//
//  NSString+AFAdditions.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (AFAdditions)

///----------------------------------
/// @name URL Escaping and Unescaping
///----------------------------------

/**
 Returns a new string escaped for a URL query parameter.
 
 The following characters are escaped: `\n\r:/=,!$&'()*+;[]@#?%`. 
 Spaces are escaped to the `+` character. (`+` is escaped to `%2B`).
 
 @return A new string escaped for a URL query parameter.
 @see stringByUnescapingFromURLQuery
 */
- (NSString *)stringByEscapingForURLQuery;

/**
 Returns a new string unescaped from a URL query parameter.
 
 `+` characters are unescaped to spaces.
 
 @return A new string escaped for a URL query parameter.
 @see stringByEscapingForURLQuery
 */
- (NSString *)stringByUnescapingFromURLQuery;

//-----------------
// String Utilities
//-----------------

/**
 Capitalizes all instances of cardinal abbreviations (e.g., "N", "ESE", "SE", etc) found in the string.
 
 @return A new string with capitalized cardinal abbreviations.
 */
- (NSString *)stringByFormattingCardinalAbbreviations;

/**
 Converts the string to a NSNumber instance.
 */
- (NSNumber *)toNumber;

/**
 Determines if the string contains numbers only.
 */
- (BOOL)isNumeric;

///------------------------------
/// @name Aeris String Validation
///------------------------------

/**
 Determines if the string is a valid place.
 
 A valid place must contain at least a city name and either a state or country. A city, state, country format is the
 preferred method of defining a place.
 */
- (BOOL)isPlace;

/**
 Determines if the string is a valid zipcode.
 */
- (BOOL)isZipcode;

/**
 Determines if the string is a valid point definition (e.g. x,y or lat,lon).
 */
- (BOOL)isPoint;

@end
