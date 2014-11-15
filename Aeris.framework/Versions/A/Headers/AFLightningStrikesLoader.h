//
//  AFLightningStrikesLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/21/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFPlace.h"

@interface AFLightningStrikesLoader : AFObjectLoader

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests data for a specific lightning strike by id.
 
 @param fire A string of the strike id to request.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestStrike:(NSString *)strike options:(NSDictionary *)options;

@end
