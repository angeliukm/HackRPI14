//
//  AFStormCellsLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/5/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFStormCell.h"
#import "AFPlace.h"

/**
 * Requests and loads remote storm cell data into local domain objects from the API.
 */
@interface AFStormCellsLoader : AFObjectLoader {
    
}

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests data for a specific storm cell by a cell id.
 
 @param cell A string of the cell id to request.
 @param params A NSDictionary containing the optional parameters for the request.
 */
- (void)requestStormCell:(NSString *)cell options:(NSDictionary *)options;

/**
 Requests all locations affected by the specified storm cell id.
 
 @param cell A string of the cell id to request.
 @param params A NSDictionary containing the optional parameters for the request.
 */
- (void)requestPlacesAffectedByStormCellWithId:(NSString *)cellId options:(NSDictionary *)options;

@end
