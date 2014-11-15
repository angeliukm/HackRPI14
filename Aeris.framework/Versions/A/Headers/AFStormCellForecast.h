//
//  AFStormCellForecast.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/6/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"

/**
 * Base model class for storm cell forecast objects.
 */
@interface AFStormCellForecast : AFObject {
    NSNumber* _lat;
	NSNumber* _lon;
	
	NSNumber* _degree;
	NSNumber* _distance;
	NSDate* _timestamp;
}

/**
 Forecasted latitude position for the period.
 */
@property (nonatomic, retain) NSNumber* latitude;

/**
 Forecasted longitude position for the period.
 */
@property (nonatomic, retain) NSNumber* longitude;

/**
 Forecasted bearing of the cell relative to the radar station in degrees.
 */
@property (nonatomic, retain) NSNumber* degree;

/**
 Forecasted distance of the cell relative to the radar station in nautical miles.
 */
@property (nonatomic, retain) NSNumber* distance;

/**
 GMT date of the forecasted time for the period.
 */
@property (nonatomic, retain) NSDate* timestamp;

@end
