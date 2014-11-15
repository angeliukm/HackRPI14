//
//  AFVenue.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/16/13.
//  Copyright (c) 2013 HAMweather, LLC. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "AFObject.h"

@interface AFVenue : AFObject

@property (nonatomic, retain) NSString *code;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *source;

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *zipcode;
@property (nonatomic, retain) NSString *phone;
@property (nonatomic, retain) NSString *website;
@property (nonatomic, retain) NSNumber *distanceMI;
@property (nonatomic, retain) NSNumber *distanceKM;

@property (nonatomic, retain) NSString *adPath;
@property (nonatomic, retain) NSString *iconPath;
@property (nonatomic, retain) NSString *markerPath;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, readonly) BOOL isFoursquareVenue;

@end
