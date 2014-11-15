//
//  AFStormCell.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/5/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"

/**
 * Base model class for storm cell objects.
 */
@interface AFStormCell : AFObject {
	NSNumber* _lat;
	NSNumber* _lon;
	
	NSDate* _timestamp;
	NSTimeZone *_timeZone;
	NSString *_location;
	NSString *_city;
	NSString *_state;
	NSString *_country;
	
	NSString* _code;
	NSString* _radarId;
	NSString* _cellId;
	NSNumber* _tvs;
	NSNumber* _mda;
	NSNumber* _vil;
	NSNumber* _maxDbz;
	NSNumber* _topFT;
	NSNumber *_height;
	
	NSNumber* _hailSevereProbability;
	NSNumber* _hailProbability;
	NSNumber* _hailMaxSizeIN;
    
    NSNumber* _distanceKM;
    NSNumber* _distanceMI;
    NSNumber* _bearingDEG;
    NSString* _bearing;
	
	NSString* _movingDirection;
	NSNumber* _movingDirectionDEG;
	NSNumber* _movingSpeedKTS;
	NSNumber* _movingSpeedMPH;
	NSNumber* _movingSpeedKMH;
	
	NSArray* _forecast;
	NSArray* _forecastConeWide;
	NSArray* _forecastConeNarrow;
	
}

//--------------------
// @name Cell Location
//--------------------

/**
 Latitude position of the cell.
 */
@property (nonatomic, retain) NSNumber* latitude;

/**
 Longitude position of the cell.
 */
@property (nonatomic, retain) NSNumber* longitude;

/**
 GMT date of the cell observation.
 */
@property (nonatomic, retain) NSDate* timestamp;

/**
 Local time zone the cell is located within.
 @since version 1.0.3
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Location of the cell relative to the nearest populated place.
 @since version 1.0.3
 */
@property (nonatomic, copy) NSString *location;

/**
 Place or nearest place to the cell.
 */
@property (nonatomic, copy) NSString *city;

/**
 Abbreviated state in which the cell is located.
 */
@property (nonatomic, copy) NSString *state;

/**
 Abbreviated country in which the event occurred.
 */
@property (nonatomic, copy) NSString *country;

//-------------------
// @name Cell Details
//-------------------

/**
 
 */
@property (nonatomic, copy) NSString* code;

/**
 Radar station ID reporting the cell.
 */
@property (nonatomic, copy) NSString* radarId;

/**
 Unique cell identifier.
 */
@property (nonatomic, copy) NSString* cellId;

/**
 Tornado vortex signature (TVS).
 
 If the cell contains a tornadic signature or a tornado has been reported, this value will be 1, otherwise 0.
 */
@property (nonatomic, retain) NSNumber* tvs;

/**
 Mesocyclone rotation (MESO).
 
 
 */
@property (nonatomic, retain) NSNumber* mda;

/**
 Vertically integrated liquid value for the cell.
 */
@property (nonatomic, retain) NSNumber* vil;

/**
 Highest reflectivity indicated within the cell.
 */
@property (nonatomic, retain) NSNumber* maxDbz;

/**
 Height of the storm in feet.
 */
@property (nonatomic, retain) NSNumber* topFT;

/**
 Height of the storm structure.
 */
@property (nonatomic, retain) NSNumber *height;

/**
 Probability the cell contains severe hail (3/4" diameter or higher) as a percentage.
 */
@property (nonatomic, retain) NSNumber* hailSevereProbability;

/**
 Probabilty the cell contains hail of any size.
 */
@property (nonatomic, retain) NSNumber* hailProbability;

/**
 Maximum diameter of hail stones found within the cell in inches.
 */
@property (nonatomic, retain) NSNumber* hailMaxSizeIN;

/**
 Distance of the cell relative to the requested location in kilometers.
 */
@property (nonatomic, retain) NSNumber* distanceKM;

/**
 Distance of the cell relative to the requested location in miles.
 */
@property (nonatomic, retain) NSNumber* distanceMI;

/**
 Direction to the cell relative to the requested location in degrees.
 */
@property (nonatomic, retain) NSNumber* bearingDEG;

/**
 Cardinal direction to the cell relative to the requested location.
 */
@property (nonatomic, copy) NSString* bearing;

/**
 Cardinal direction the cell is moving.
 */
@property (nonatomic, copy) NSString* movingDirection;

/**
 Direction the cell is moving in degrees.
 */
@property (nonatomic, retain) NSNumber* movingDirectionDEG;

/**
 Speed the cell is moving in knots.
 */
@property (nonatomic, retain) NSNumber* movingSpeedKTS;

/**
 Speed the cell is moving in miles per hour.
 */
@property (nonatomic, retain) NSNumber* movingSpeedMPH;

/**
 Speed the cell is moving in kilometers per hour.
 */
@property (nonatomic, retain) NSNumber* movingSpeedKMH;

//--------------------
// @name Cell Forecast
//--------------------

/**
 An array of AFStormCellForecast instances returned for this cell.
 */
@property (nonatomic, copy) NSArray* forecast;

/**
 Array of coordinates (latitude, longitude) defining a 5-degree cone of error along the forecast path which can be used
 to better determine locations along the forecast path of the storm.
 */
@property (nonatomic, copy) NSArray* forecastConeWide;

/**
 Array of coordinates (latitude, longitude) defining a 20-degree cone of error along the forecast path.
 */
@property (nonatomic, copy) NSArray* forecastConeNarrow;

@end
