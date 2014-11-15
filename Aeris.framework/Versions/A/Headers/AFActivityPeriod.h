//
//  AFActivityPeriod.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 5/3/13.
//  Copyright (c) 2013 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"
#import "AFActivity.h"

@interface AFActivityPeriod : AFObject

/**
 GMT date for the period.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 The enumerated activity quality value.
 */
@property (nonatomic, readonly) AFActivityQuality quality;

/**
 The `NSNumber` representation of the quality index.
 */
@property (nonatomic, retain) NSNumber *qualityIndex;

/**
 The string representation of the quality index.
 */
@property (nonatomic, copy) NSString *qualityENG;

@end
