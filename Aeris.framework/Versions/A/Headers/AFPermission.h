//
//  AFPermission.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/19/12.
//  retainright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObject.h"

@interface AFPermission : AFObject {
	NSNumber *allowPlaces_;
	NSNumber *allowObservations_;
	NSNumber *allowForecasts_;
	NSNumber *allowAdvisories_;
	NSNumber *allowEarthquakes_;
	NSNumber *allowFires_;
	NSNumber *allowRecords_;
	NSNumber *allowNormals_;
	NSNumber *allowStormReports_;
	NSNumber *allowStormCells_;
	NSNumber *allowLightning_;
	NSNumber *allowSunmoon_;
	NSNumber *allowMoonphases_;
	NSNumber *allowTides_;
	NSNumber *allowCurrentOverlays_;
	NSNumber *allowRadarOverlays_;
	NSNumber *allowNexradOverlays_;
	NSNumber *allowSatelliteOverlays_;
}

@property (nonatomic, retain) NSNumber *allowPlaces;
@property (nonatomic, retain) NSNumber *allowObservations;
@property (nonatomic, retain) NSNumber *allowForecasts;
@property (nonatomic, retain) NSNumber *allowAdvisories;
@property (nonatomic, retain) NSNumber *allowEarthquakes;
@property (nonatomic, retain) NSNumber *allowFires;
@property (nonatomic, retain) NSNumber *allowRecords;
@property (nonatomic, retain) NSNumber *allowNormals;
@property (nonatomic, retain) NSNumber *allowStormReports;
@property (nonatomic, retain) NSNumber *allowStormCells;
@property (nonatomic, retain) NSNumber *allowLightning;
@property (nonatomic, retain) NSNumber *allowSunmoon;
@property (nonatomic, retain) NSNumber *allowMoonphases;
@property (nonatomic, retain) NSNumber *allowTides;
@property (nonatomic, retain) NSNumber *allowCurrentOverlays;
@property (nonatomic, retain) NSNumber *allowRadarOverlays;
@property (nonatomic, retain) NSNumber *allowNexradOverlays;
@property (nonatomic, retain) NSNumber *allowSatelliteOverlays;

@end
