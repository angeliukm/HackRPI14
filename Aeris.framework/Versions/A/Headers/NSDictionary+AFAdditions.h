//
//  NSDictionary+AFAdditions.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/30/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (AFAdditions)

///----------------------------
/// @name Creating Dictionaries
///----------------------------

/**
 Creates and initializes a dictionary with key value pairs, with the keys specified
 first instead of the objects. This allows for a more sensible definition of the
 property to element and relationship mappings.
 */
+ (id)dictionaryWithKeysAndObjects:(id)firstKey, ... NS_REQUIRES_NIL_TERMINATION;

///-----------------------------
/// @name Modifying Dictionaries
///-----------------------------

/**
 Merges the keys and objects from one dictionary instance into another.
 
 @param dict1 The NSDictionary instance to merge from, overriding values for matching keys from dict2.
 @param dict2 The NSDictionary instance to merge into.
 @return The resulting merged NSDictionary instance.
 */
+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1 with:(NSDictionary *)dict2;

/**
 Merges the dictionary into the keys and objects of the provided dictionary instance.
 
 @param dict The dictionary into which this dictionary will be merged into.
 @return The resulting merged NSDictionary instance.
 */
- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict;

///-------------------------
/// @name HTTP Query Strings
///-------------------------

/**
 Returns a dictionary of the decoded key-value pairs in an http query string of the form
 key1=value1&key2=value2&..&keyN=valueN.
 Keys and values will be unescaped automatically, and only the first value for a repeated key is used.
 
 @param queryString The query string arguments to convert to a dictionary.
 */
+ (NSDictionary *)dictionaryWithHttpQueryString:(NSString *)queryString;

/**
 Gets a string representation of the dictionary in the form key1=value1&key2=value2&...&keyN=valueN, suitable for use
 as either URL arguments (after a '?') or POST body.
 Keys and values will be escaped automatically, so should be unescaped in the dictionary.
 */
- (NSString *)httpQueryString;

- (id)parseValueForKeyMapping:(NSString *)keyPath;

@end
