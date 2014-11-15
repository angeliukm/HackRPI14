//
//  AFActivitiesLoader.h
//  Aeris
//
//  Created by Nicholas Shipes on 5/3/13.
//  Copyright (c) 2013 HAMweather, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFActivity.h"

@interface AFActivitiesLoader : AFObjectLoader

- (void)requestConditionsForPlace:(AFPlace *)place activityType:(AFActivityType)activityType options:(NSDictionary *)options;

@end
