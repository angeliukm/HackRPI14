//
//  AFMappableObject.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/5/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//


@class AFObjectLoader;

/**
 Must be implemented by all classes utilizing the automatic property mapping based on the
 REST responses into domain model classes.
 */
@protocol AFObjectMappable <NSObject>

/**
 Must return a dictionary containing mapping rules from JSON element names to property accessors
 on the model object.
 */
+ (NSDictionary*)propertyMappings;

/**
 Returns a dictionary that maps class types to be used inside properties that are a set of objects within
 a dictionary or array.
 */
+ (NSDictionary*)propertyRelationships;

@optional

/**
 Must return a new autoreleased instance of the model class ready for mapping. Used to initialize the model
 via any method other than alloc and init.
 */
+ (id)object;

/**
 Returns a dictionary that maps a model class to the dictionary instances within an array value on a property.
 All dictionary elements will then be transformed from a dictionary into model instances and mapped accordingly.
 
 @param property The property to return the proper mapping for.
 */
+ (NSString*)relationshipForProperty:(NSString*)property;

@end;