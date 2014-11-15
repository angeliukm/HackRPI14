//
//  NSNumber+AFAdditions.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 11/30/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (AFAdditions)

- (NSNumber *)roundToNearestInterval:(CGFloat)interval;

@end
