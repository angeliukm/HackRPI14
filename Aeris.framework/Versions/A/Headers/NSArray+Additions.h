//
//  NSArray+Additions.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/27/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSArray (Additions)

/**
 Calls performSelector on all objects that can receive the selector in the array.
 Makes an iterable copy of the array, making it possible for the selector to modify
 the array.
 */
- (void)perform:(SEL)selector;
- (void)perform:(SEL)selector withObject:(id)p1;
- (void)perform:(SEL)selector withObject:(id)p1 withObject:(id)p2;

/**
 @return nil or an object that matches value with isEqual.
 */
- (id)objectWithValue:(id)value forKey:(id)key;

- (NSArray *)reversedArray;

///------------------
/// @name Enumeration
///------------------
- (NSString *)stringWithEnum:(NSUInteger)e;
- (NSUInteger)enumFromString:(NSString *)str default:(NSUInteger)def;
- (NSUInteger)enumFromString:(NSString *)str;

@end
