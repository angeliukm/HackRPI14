//
//  AFImage.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/25/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 An enumeration of static map types.
 */
typedef enum {
	AFImageTypeCurrent,					/** Current condition map group. */
	AFImageTypeWarning,					/** Severe weather map group. */
	AFImageTypeRadar,					/** Radar map group. */
	AFImageTypeSatellite,				/** Satellite map group. */
	AFImageTypeForecastTemperature,		/** Forecast temperatures map group. */
	AFImageTypeForecastWeather,			/** Forecast weather map group. */
	AFImageTypeForecastPrecipitation	/** Forecast precipitation map group. */
} AFImageType;

/**
 An enumeration of static map regions.
 */
typedef enum {
	AFImageRegionUS,
	AFImageRegionNortheastUS,
	AFImageRegionEastCentralUS,
	AFImageRegionSoutheastUS,
	AFImageRegionNorthCentralUS,
	AFImageRegionCentralUS,
	AFImageRegionSouthCentralUS,
	AFImageRegionNorthwestUS,
	AFImageRegionWestCentralUS,
	AFImageRegionSouthwestUS,
	AFImageRegionCanada,
	AFImageRegionMexico,
	AFImageRegionCaribbean,
	AFImageRegionNorthAmerica,
	AFImageRegionSouthAmerica,
	AFImageRegionEurope,
	AFImageRegionAfrica,
	AFImageRegionMiddleEast,
	AFImageRegionNorthAsia,
	AFImageRegionSouthAsia,
	AFImageRegionAustralia,
	AFImageRegionWorld
} AFImageRegion;

/**
 String to represent the standard tiny map size.
 */
#define kAFMapSizeTiny		@"320x240"

/**
 String to represent the standard small map size.
 */
#define kAFMapSizeSmall		@"480x360"

/**
 String to represent the standard medium map size.
 */
#define kAFMapSizeMedium	@"640x480"

/**
 String to represent the standard large map size.
 */
#define kAFMapSizeLarge		@"800x600"

@interface AFImage : NSObject

///---------------------
/// @name Map Properties
///---------------------

/**
 Returns an array of map type groups currently supported as code strings.
 */
+ (NSArray *)types;

/**
 Returns the proper code string for the specified `AFImageType` enumerated value.
 
 @param type Enumerated `AFImageType` value
 */
+ (NSString *)codeForType:(AFImageType)type;

/**
 Returns the proper enumerated `AFImageType` value for the specified code string.
 
 @param code The string associated with an `AFImageType` enumerated value.
 */
+ (AFImageType)typeForCode:(NSString *)code;

/**
 Returns an array of map regions currently supported as code strings.
 */
+ (NSArray *)regions;

/**
 Returns the proper code string for the specified `AFImageRegion` enumerated value.
 
 @param region Enumerated `AFImageRegion` value.
 */
+ (NSString *)codeForRegion:(AFImageRegion)region;

/**
 Returns the proper enumerated `AFImageRegion` value for the specified code string.
 
 @param code The string associated with an `AFImageRegion` enumerated value.
 */
+ (AFImageRegion)regionForCode:(NSString *)code;

/**
 Returns an array of data code strings keyed by their respective `AFImageType` numerated value.
 
 @param type Enumerated `AFImageType` value.
 */
+ (NSArray *)dataCodesForType:(AFImageType)type;

/**
 Returns the map title for the specified map type code.
 
 @param code The string associated with an `AFImageType` enumerated value.
 */
+ (NSString *)titleForCode:(NSString *)code;

@end
