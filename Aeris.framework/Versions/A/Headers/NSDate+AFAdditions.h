//
//  NSDate+AFAdditions.h
//  Aeris
//	$Id$
//
//	Original utilities distributed as part of NSDate+Helper (original license below).
//	https://github.com/billymeltdown/nsdate-helper/
//	
//	Copyright (c) 2009, 2010, ZETETIC LLC
//	All rights reserved.
// 
//	Redistribution and use in source and binary forms, with or without
//	modification, are permitted provided that the following conditions are met:
//		* Redistributions of source code must retain the above copyright
//		notice, this list of conditions and the following disclaimer.
//		* Redistributions in binary form must reproduce the above copyright
//		notice, this list of conditions and the following disclaimer in the
//		documentation and/or other materials provided with the distribution.
//		* Neither the name of the ZETETIC LLC nor the
//		names of its contributors may be used to endorse or promote products
//		derived from this software without specific prior written permission.
// 
//	THIS SOFTWARE IS PROVIDED BY ZETETIC LLC ''AS IS'' AND ANY
//	EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//	DISCLAIMED. IN NO EVENT SHALL ZETETIC LLC BE LIABLE FOR ANY
//	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//	
//	
//
//  Modified and implemented by Nicholas Shipes on 8/3/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

// Formatting hints
typedef enum {
    DateFormatHintNone, 
    DateFormatHintRFC822, 
    DateFormatHintRFC3339,
	DateFormatHintISO8601
} DateFormatHint;


@interface NSDate (AFAdditions)

///----------------------
/// @name Date Formatting
///----------------------

+ (NSString *)dateFormatString;
+ (NSString *)timeFormatString;
+ (NSString *)timestampFormatString;
+ (NSString *)dbFormatString;
+ (void)setDefaultTimeZone:(NSTimeZone *)timeZone;

+ (NSDate *)dateFromString:(NSString *)string;
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;
+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)format;
+ (NSString *)stringFromDate:(NSDate *)date;
+ (NSString *)stringForDisplayFromDate:(NSDate *)date;
+ (NSString *)stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed;
+ (NSString *)stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed alwaysDisplayTime:(BOOL)displayTime;

///---------------------
/// @name Relative Dates
///---------------------

+ (NSDate *)dateTomorrow;
+ (NSDate *)dateYesterday;
+ (NSDate *)dateWithDaysFromNow:(NSUInteger)days;
+ (NSDate *)dateWithDaysBeforeNow:(NSUInteger)days;
+ (NSDate *)dateWithHoursFromNow:(NSUInteger)hours;
+ (NSDate *)dateWithHoursBeforeNow:(NSUInteger)hours;
+ (NSDate *)dateWithMinutesFromNow:(NSUInteger)minutes;
+ (NSDate *)dateWithMinutesBeforeNow:(NSUInteger)minutes;

- (NSString *)string;
- (NSString *)stringWithFormat:(NSString *)format;
- (NSString *)stringWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle;

- (NSUInteger)daysAgo;
- (NSUInteger)daysAgoAgainstMidnight;
- (NSString *)stringDaysAgo;
- (NSString *)stringDaysAgoAgainstMidnight:(BOOL)flag;

- (NSDate *)beginningOfWeek;
- (NSDate *)beginningOfDay;
- (NSDate *)endOfWeek;

- (NSString *)fuzzyString;
- (NSString *)fuzzyStringWithAdjustmentForTimeZone:(NSTimeZone *)timeZone;

///----------------------
/// @name Date Comparison
///----------------------

- (BOOL)isEqualToDateIgnoringTime:(NSDate *)date;
- (BOOL)isToday;
- (BOOL)isTonight;
- (BOOL)isTomorrow;
- (BOOL)isYesterday;
- (BOOL)isNight;
- (BOOL)isSameWeekAsDate:(NSDate *)date;
- (BOOL)isThisWeek;
- (BOOL)isNextWeek;
- (BOOL)isLastWeek;
- (BOOL)isSameYearAsDate:(NSDate *)date;
- (BOOL)isThisYear;
- (BOOL)isNextYear;
- (BOOL)isLastYear;
- (BOOL)isEarlierThanDate:(NSDate *)date;
- (BOOL)isLaterThanDate:(NSDate *)date;

///-----------------------
/// @name Date Adjustments
///-----------------------

- (NSDate *)dateByAddingDays:(NSUInteger)days;
- (NSDate *)dateBySubtractingDays:(NSUInteger)days;
- (NSDate *)dateByAddingHours:(NSUInteger)hours;
- (NSDate *)dateBySubtractingHours:(NSUInteger)hours;
- (NSDate *)dateByAddingMinutes:(NSUInteger)minutes;
- (NSDate *)dateBySubtractingMinutes:(NSUInteger)minutes;
- (NSDate *)dateAtStartOfDay;

///---------------------------
/// @name Retrieving Intervals
///---------------------------

- (NSInteger)minutesAfterDate:(NSDate *)date;
- (NSInteger)minutesBeforeDate:(NSDate *)date;
- (NSInteger)hoursAfterDate:(NSDate *)date;
- (NSInteger)hoursBeforeDate:(NSDate *)date;
- (NSInteger)daysAfterDate:(NSDate *)date;
- (NSInteger)daysBeforeDate:(NSDate *)date;

///---------------------------
/// @name Parsing Date Strings
///---------------------------

/**
 Get date from RFC3339 or RFC822 string
 
 A format/specification hint can be used to speed up, otherwise both will be attempted in order to get a date.
 */
+ (NSDate *)dateFromInternetDateTimeString:(NSString *)dateString formatHint:(DateFormatHint)hint;

/**
 Get date from a string using a specific date specification.
 */
+ (NSDate *)dateFromRFC3339String:(NSString *)dateString;
+ (NSDate *)dateFromRFC822String:(NSString *)dateString;
+ (NSDate *)dateFromISO8601String:(NSString *)dateString;
+ (NSTimeZone *)timeZoneFromISO8601String:(NSString *)dateString;

///------------------------
/// @name Decomposing Dates
///------------------------

@property (readonly) NSInteger nearestHour;
@property (readonly) NSInteger hour;
@property (readonly) NSInteger minute;
@property (readonly) NSInteger seconds;
@property (readonly) NSInteger day;
@property (readonly) NSInteger month;
@property (readonly) NSInteger week;
@property (readonly) NSInteger weekday;
@property (readonly) NSInteger nthWeekday;	// e.g., 2nd Tuesday of the month == 2
@property (readonly) NSInteger year;

@end
