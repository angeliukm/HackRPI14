//
//  AFActivity.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 5/3/13.
//  Copyright (c) 2013 HAMweather, LLC. All rights reserved.
//

#import "AFGlobals.h"
#import "AFObject.h"

typedef NS_ENUM (NSUInteger, AFActivityType) {
	AFActivityTypeUnknown = 0,
	AFActivityTypeSnowmobile,
	AFActivityTypeAtv
};

typedef NS_ENUM (NSUInteger, AFActivityQuality) {
	AFActivityQualityUnknown = 0,
	AFActivityQualityBad,
	AFActivityQualityPoor,
	AFActivityQualityGood,
	AFActivityQualityExcellent,
	AFActivityQualityBest
};

@class AFActivityPeriod;

@interface AFActivity : AFObject

///---------------------------
/// @name Location Information
///---------------------------

/**
 Longitude position of the event.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 Latitude position of the event.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Name of the station.
 */
@property (nonatomic, copy) NSString *city;

/**
 Abbreviated state in which the event occurred.
 */
@property (nonatomic, copy) NSString *state;

/**
 Abbreviated country in which the event occurred.
 */
@property (nonatomic, copy) NSString *country;

/**
 Local time zone of the event location.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

//--------------------
// @name Activity Data
//--------------------

/**
 The enumerated representation of the activity type.
 */
@property (nonatomic, readonly) AFActivityType activityType;

/**
 The string representation of the activity type.
 */
@property (nonatomic, copy) NSString *activityTypeENG;

/**
 An `AFActivityPeriod` containing activity-related data based on current conditions.
 */
@property (nonatomic, retain) AFActivityPeriod *current;

/**
 Array of AFActivityPeriod instances that contain the activity-related data for that period.
 */
@property (nonatomic, copy) NSArray *periods;

@end
