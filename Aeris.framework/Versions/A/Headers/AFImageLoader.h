//
//  AFImageLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 7/7/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObjectLoader.h"
#import "AFRequest.h"
#import "AFAPIRequest.h"
#import "AFImage.h"

extern NSString *const kAFImageOptionKeyData;
extern NSString *const kAFImageOptionKeySize;
extern NSString *const kAFImageOptionKeyRegion;
extern NSString *const kAFImageOptionKeyInterval;
extern NSString *const kAFImageOptionKeyPeriod;

/**
 Wraps a request/response cycle and loads a remote object representation into local domain objects.
 */
@interface AFImageLoader : AFObjectLoader

///---------------------
/// @name Loading Images
///---------------------

/**
 Requests and loads a static image based on the provided type and options.
 
 @param type An AFImageType defining the type of image to be requested.
 @param options A NSDictionary instance defining the various options for the image.
 */
- (void)loadImageOfType:(AFImageType)type params:(NSDictionary *)options;

/**
 Requests and loads a static image based on the provided options.
 
 @param type An `AFImageType` defining the type of image group to be requested.
 @param dataType The data type string to specify what data to show on the requested image.
 @param region An `AFImageRegion` defining the region to use for the requested image.
 @param size The size string specifying the dimensions of the requested image.
 */
- (void)loadImageOfType:(AFImageType)type withDataType:(NSString *)dataType forRegion:(AFImageRegion)region andSize:(NSString *)size;

/**
 Requests and loads a static map image based on the provided options.
 
 @param type An `AFImageType` defining the type of image group to be requested.
 @param dataType The data type string to specify what data to show on the requested image.
 @param interval The data interval to use (e.g., "12" for 12-hour, "24" for 24-hour).
 @param period The period to use for the request (e.g., "1" for the first period, "5" for the fifth period).
 @param region An `AFImageRegion` defining the region to use for the requested image.
 @param size The size string specifying the dimensions of the requested image.
 @param dataType The data type string to specify what data to show on the requested image.
 */
- (void)loadImageOfType:(AFImageType)type withDataType:(NSString *)dataType interval:(NSUInteger)interval andPeriod:(NSUInteger)period forRegion:(AFImageRegion)region andSize:(NSString *)size;

@end
