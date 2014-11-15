//
//  AFFiresLoader.h
//  Aeris
//	$Id$
//
//  Created by Nick Shipes on 9/18/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFPlace.h"

@interface AFFiresLoader : AFObjectLoader

///----------------------
/// @name Requesting Data
///----------------------

/**
 Requests data for a specific fire by id.
 
 @param fire A string of the fire id to request.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestFire:(NSString *)fire options:(NSDictionary *)options;

@end
