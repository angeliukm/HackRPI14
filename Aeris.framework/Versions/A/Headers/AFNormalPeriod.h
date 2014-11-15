//
//  AFNormalPeriod.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/11/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFNormalPeriod : AFObject {
	NSString *type_;
	NSNumber *month_;
	NSNumber *date_;
	NSNumber *tempMaxF_;
	NSNumber *tempMaxC_;
	NSNumber *tempMinF_;
	NSNumber *tempMinC_;
	NSNumber *tempAvgF_;
	NSNumber *tempAvgC_;
	NSNumber *precipMonthToDateIN_;
	NSNumber *precipMonthToDateMM_;
	NSNumber *precipYearToDateIN_;
	NSNumber *precipYearToDateMM_;
	NSNumber *snowMonthToDateIN_;
	NSNumber *snowMonthToDateCM_;
	NSNumber *snowYearToDateIN_;
	NSNumber *snowYearToDateCM_;
	NSNumber *heatingDegreeDays_;
	NSNumber *coolingDegreeDays_;
}

///---------------------
/// @name Period Details
///---------------------

/**
 Type of normal: "daily", "monthly" or "annual".
 */
@property (nonatomic, copy) NSString *type;

/**
 Number of the month the period is for (1=January, 12=December). Value will be NULL for annual summaries.
 */
@property (nonatomic, retain) NSNumber *month;

/**
 Day of the month the period is for (1-31). Value will be NULL for both monthly and annual summaries.
 */
@property (nonatomic, retain) NSNumber *date;

///------------------
/// @name Temperature
///------------------

/**
 Normal maximum temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *tempMaxF;

/**
 Normal maximum temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *tempMaxC;

/**
 Normal minimum temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *tempMinF;

/**
 Normal minimum temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *tempMinC;

/**
 Normal average temperature in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *tempAvgF;

/**
 Normal average temperature in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *tempAvgC;

///--------------------
/// @name Precipitation
///--------------------

/**
 Normal precipitation in inches for the month to date. Value will be NULL for annual summaries.
 */
@property (nonatomic, retain) NSNumber *precipMonthToDateIN;

/**
 Normal precipitation in millimeters for the month to date. Value will be NULL for annual summaries.
 */
@property (nonatomic, retain) NSNumber *precipMonthToDateMM;

/**
 Normal precipitation in inches for the year to date.
 */
@property (nonatomic, retain) NSNumber *precipYearToDateIN;

/**
 Normal precipitation in millimeters for the year to date.
 */
@property (nonatomic, retain) NSNumber *precipYearToDateMM;

/**
 Normal snowfall in inches for the month to date. Value will be NULL for annual summaries.
 */
@property (nonatomic, retain) NSNumber *snowMonthToDateIN;

/**
 Normal snowfall in centimeters for the month to date. Value will be NULL for annual summaries.
 */
@property (nonatomic, retain) NSNumber *snowMonthToDateCM;

/**
 Normal snowfall in inches for the year to date.
 */
@property (nonatomic, retain) NSNumber *snowYearToDateIN;

/**
 Normal snowfall in centimeters for the year to date.
 */
@property (nonatomic, retain) NSNumber *snowYearToDateCM;

///------------------
/// @name Degree Days
///------------------

/**
 Normal heating degree days.
 */
@property (nonatomic, retain) NSNumber *heatingDegreeDays;

/**
 Normal cooling degree days.
 */
@property (nonatomic, retain) NSNumber *coolingDegreeDays;

@end
