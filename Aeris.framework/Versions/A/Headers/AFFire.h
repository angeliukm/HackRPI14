//
//  AFFire.h
//  Aeris
//	$Id$
//
//  Created by Nick Shipes on 9/18/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import "AFObject.h"

@interface AFFire : AFObject {
	NSNumber *_lat;
	NSNumber *_lon;
	NSString *_city;
	NSString *_state;
	NSString *_country;
	
	NSString *_fireId;
	NSString *_type;
	NSDate *_timestamp;
	NSTimeZone *_timeZone;
	NSString *_name;
	NSString *_location;
	NSDate *_startDate;
	NSNumber *_confidence;
	NSNumber *_areaKM;
	NSNumber *_areaMI;
	NSNumber *_areaAC;
	NSNumber *_percentContained;
	
	NSNumber *_satelliteWidthKM;
	NSNumber *_satelliteWidthMI;
	NSNumber *_satelliteHeightKM;
	NSNumber *_satelliteHeightMI;
	NSNumber *_satelliteTempK;
	NSNumber *_satelliteTempC;
	NSNumber *_satelliteTempF;
	NSString *_satelliteSource;
	NSString *_satelliteCode;
}

//---------------
// @name Location
//---------------

/**
 Latitude position of the fire.
 */
@property (nonatomic, retain) NSNumber *latitude;

/**
 Longitude position of the fire.
 */
@property (nonatomic, retain) NSNumber *longitude;

/**
 Populated place the fire is near.
 */
@property (nonatomic, copy) NSString *city;

/**
 Abbreviated state in which the fire is located.
 */
@property (nonatomic, copy) NSString *state;

/**
 Abbreviated country in which the fire is located.
 */
@property (nonatomic, copy) NSString *country;

//-------------------
// @name Fire Profile
//-------------------

/**
 Unique identifier for the fire event.
 */
@property (nonatomic, copy) NSString *fireId;

/**
 Type of fire observation.
 
 "L" = Confirmed large fire as deteremined by the USFS
 "M" = Fire detection by the MODIS satellite
 */
@property (nonatomic, copy) NSString *type;

/**
 GMT date for the observation.
 */
@property (nonatomic, retain) NSDate *timestamp;

/**
 Local time zone in which the fire is located.
 */
@property (nonatomic, retain) NSTimeZone *timeZone;

/**
 Name assigned to the fire event.
 */
@property (nonatomic, copy) NSString *name;

/**
 Descriptive location of the fire.
 */
@property (nonatomic, copy) NSString *location;

/**
 GMT date when the fire started.
 
 This property is usually only provided for critical/large fires (type="L"), but not always.
 */
@property (nonatomic, retain) NSDate *startDate;

/**
 The confidence percentage of the fire ranging from 0 to 100%.
 */
@property (nonatomic, retain) NSNumber *confidence;

/**
 Estimated coverage of the fire in square kilometers.
 */
@property (nonatomic, retain) NSNumber *areaKM;

/**
 Estimated coverage of the fire in square miles.
 */
@property (nonatomic, retain) NSNumber *areaMI;

/**
 Estimated coverage of the fire in acres.
 */
@property (nonatomic, retain) NSNumber *areaAC;

/**
 Percentage of the fire that is currently contained.
 
 This property is usually only provided for critical/large fires (type="L"), but not always.
 */
@property (nonatomic, retain) NSNumber *percentContained;

//--------------------------
// @name Satellite Detection
//--------------------------

/**
 Satellite-estimated width of the fire in kilometers.
 */
@property (nonatomic, retain) NSNumber *satelliteWidthKM;

/**
 Satellite-estimated width of the fire in miles.
 */
@property (nonatomic, retain) NSNumber *satelliteWidthMI;

/**
 Satellite-estimated height of the fire in kilometers.
 */
@property (nonatomic, retain) NSNumber *satelliteHeightKM;

/**
 Satellite-estimated height of the fire in miles.
 */
@property (nonatomic, retain) NSNumber *satelliteHeightMI;

/**
 Measured brightness temperature of the detected fire in degrees Kelvin.
 */
@property (nonatomic, retain) NSNumber *satelliteTempK;

/**
 Measured brightness temperature of the detected fire in degrees Celsius.
 */
@property (nonatomic, retain) NSNumber *satelliteTempC;

/**
 Measured brightness temperature of the detected fire in degrees Fahrenheit.
 */
@property (nonatomic, retain) NSNumber *satelliteTempF;

/**
 Station source of MODIS data and detection (for MODIS-detected fires only).
 
 "gsfc": NASA-Goddard Space Flight Center MODIS Rapid Response System
 "rsac": USDA Forecast Serice Remote Sensing Application Center
 "ssec": University of Wisconsin Space Science Engineering Center
 "uaf": University of Alaska-Fairbanks
 */
@property (nonatomic, copy) NSString *satelliteSource;

/**
 Satellite source of MODIS data and detection (for MODIS-detected fires only).
 
 "T": TERRA MODIS
 "A": AQUA MODIS
 */
@property (nonatomic, copy) NSString *satelliteCode;

@end
