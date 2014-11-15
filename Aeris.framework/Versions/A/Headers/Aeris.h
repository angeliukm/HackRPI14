//
//  Aeris.h
//  AerisCore
//	$Id$
//
//  Created by Nicholas Shipes on 4/25/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//
	
// Global
#import <Aeris/AFGlobals.h>
#import <Aeris/AFErrorCodes.h>
#import <Aeris/AerisEngine.h>
#import <Aeris/AFObservable.h>
#import <Aeris/AFObservers.h>
#import <Aeris/AFAccessPermissions.h>

// Debug
#import <Aeris/AFDebug.h>

// Request/Response
#import <Aeris/AFRequest.h>
#import <Aeris/AFResponse.h>
#import <Aeris/AFAPIRequest.h>
#import <Aeris/AFAPIResponse.h>
#import <Aeris/AFCache.h>

// Object Mapping
#import <Aeris/AFObject.h>
#import <Aeris/AFObjectLoader.h>
#import <Aeris/AFImageLoader.h>
#import <Aeris/AFPlacesLoader.h>
#import <Aeris/AFObservationsLoader.h>
#import <Aeris/AFForecastsLoader.h>
#import <Aeris/AFAdvisoriesLoader.h>
#import <Aeris/AFStormCellsLoader.h>
#import <Aeris/AFFiresLoader.h>
#import <Aeris/AFLightningStrikesLoader.h>
#import <Aeris/AFStormReportsLoader.h>
#import <Aeris/AFCountriesLoader.h>
#import <Aeris/AFRecordsLoader.h>
#import <Aeris/AFEarthquakesLoader.h>
#import <Aeris/AFSunMoonLoader.h>
#import <Aeris/AFMoonPhasesLoader.h>
#import <Aeris/AFNormalsLoader.h>
#import <Aeris/AFTidesLoader.h>
#import <Aeris/AFPermissionsLoader.h>
#import <Aeris/AFVenuesLoader.h>
#import <Aeris/AFActivitiesLoader.h>

// Weather Models
#import <Aeris/AFPlace.h>
#import <Aeris/AFObservation.h>
#import <Aeris/AFObservationArchive.h>
#import <Aeris/AFForecast.h>
#import <Aeris/AFForecastPeriod.h>
#import <Aeris/AFAdvisory.h>
#import <Aeris/AFStormCell.h>
#import <Aeris/AFStormCellForecast.h>
#import <Aeris/AFFire.h>
#import <Aeris/AFLightningStrike.h>
#import <Aeris/AFStormReport.h>
#import <Aeris/AFCountry.h>
#import <Aeris/AFRecord.h>
#import <Aeris/AFEarthquake.h>
#import <Aeris/AFSunMoon.h>
#import <Aeris/AFMoonPhase.h>
#import <Aeris/AFNormal.h>
#import <Aeris/AFNormalPeriod.h>
#import <Aeris/AFTide.h>
#import <Aeris/AFTidePeriod.h>
#import <Aeris/AFTideStation.h>
#import <Aeris/AFPermission.h>
#import <Aeris/AFImage.h>
#import <Aeris/AFVenue.h>
#import <Aeris/AFActivity.h>
#import <Aeris/AFActivityPeriod.h>

// Additions
#import <Aeris/Aeris+Additions.h>
