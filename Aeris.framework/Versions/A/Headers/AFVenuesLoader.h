//
//  AFVenuesLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/16/13.
//  Copyright (c) 2013 HAMweather, LLC. All rights reserved.
//

#import <Aeris/Aeris.h>

extern NSString * const AFVenueTypeGas;
extern NSString * const AFVenueTypeLodging;
extern NSString * const AFVenueTypeFood;
extern NSString * const AFVenueTypeMedical;
extern NSString * const AFVenueTypeEmergencyRooms;

@interface AFVenuesLoader : AFObjectLoader

+ (NSString *)nameForServiceType:(NSString *)serviceType;

@end
