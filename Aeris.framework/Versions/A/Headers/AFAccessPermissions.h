//
//  AFAccessPermissions.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 4/19/12.
//  Copyright (c) 2012 HAMweather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Aeris/AFPermissionsLoader.h>
#import <Aeris/AFPermission.h>

@protocol AFAccessPermissionsDelegate;

@interface AFAccessPermissions : NSObject <AFObjectLoaderDelegate> {
	AFPermissionsLoader *loader_;
	AFPermission *permission_;
}

@property (nonatomic, retain) AFPermission *permission;
@property (nonatomic, assign) NSObject<AFAccessPermissionsDelegate> *delegate;

+ (AFAccessPermissions *)sharedPermissions;

- (void)loadPermissions;

- (BOOL)hasAccessForCode:(NSString *)code;

@end

@protocol AFAccessPermissionsDelegate <NSObject>

@optional

- (void)accessPermissionsDidLoad:(AFAccessPermissions *)accessPermissions;
- (void)accessPermissions:(AFAccessPermissions *)accessPermissions didFailWithError:(NSError *)error;

@end