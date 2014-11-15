//
//  AFEarthquakesLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/10/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import "AFObjectLoader.h"

@interface AFEarthquakesLoader : AFObjectLoader

- (void)requestPlacesAffectedByEarthquakeWithId:(NSString *)quakeId options:(NSDictionary *)options;

@end
