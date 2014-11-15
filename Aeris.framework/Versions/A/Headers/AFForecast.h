//
//  AFForecast.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"


@interface AFForecast : AFObject {
    NSArray* _periods;
}

/**
 An array of AFForecastPeriod instances returned for this forecast.
 */
@property (nonatomic, copy) NSArray *periods;

@end
