//
//  AFObjectLoader.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/9/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//

#import "AFObject.h"
#import "AFPlace.h"
#import "AFAPIRequest.h"
#import "AFRequest.h"
#import "AFURL.h"

//@class AFObjectLoader;
@protocol AFObjectLoaderDelegate;

@protocol AFObjectLoader <NSObject>

@property (nonatomic, readonly) NSString *endpoint;

/**
 Requests all data objects closest to the specified `AFPlace` instance.
 
 Query will limit the search to within xxxxx miles from the passed location. In order to query a broader region,
 set the `radius` option to your custom value (e.g. @"500mi", @"radius").
 
 @param place The `AFPlace` from which to search for objects from.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestClosest:(AFPlace *)place options:(NSDictionary *)options;

/**
 Requests all data objects within the polygon bounded by the specified points.
 
 @param points An array of points defining the polying to search within.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestWithinPolygon:(NSArray *)points options:(NSDictionary *)options;

/**
 Requests the JSON schema for the object type.
 */
- (void)requestSchema;

@end

/**
 Wraps a request/response cycle and loads a remote object representation into local domain objects.
 */
@interface AFObjectLoader : NSObject <AFObjectLoader, AFRequestDelegate, AFAPIRequestDelegate> {
    Class _objectClass;
	NSString* _endpoint;
	NSDictionary* _defaultOptions;
	NSMutableDictionary* _options;
	NSArray *_dateFormats;
	AFAPIRequest* _request;
	NSObject<AFObjectLoaderDelegate>* _delegate;
	
	BOOL _allowDebug;
	BOOL _abandonBgProcess;
}

/**
 The target class for object mapping rules and instantiation.
 */
@property (nonatomic, assign) Class objectClass;

/**
 The base URI endpoint for every request on this loader.
 */
@property (nonatomic, readonly) NSString* endpoint;

/**
 Request options, usually API parameters.
 */
@property (nonatomic, readonly) NSMutableDictionary* options;

/**
 An array of date format strings to attempt to parse mapped date properties with.
 
 Initialized with a default pair of timestamp and date strings suitable for
 parsing time and date objects returned from the core API.
 */
@property (nonatomic, retain) NSArray *dateFormats;

/**
 Request instance associated with this loader.
 */
@property (nonatomic, retain) AFAPIRequest* request;

/**
 Delegate object to be notified of loader events.
 */
@property (nonatomic, assign) NSObject<AFObjectLoaderDelegate>* delegate;

/**
 Initialize a new object loader with specific request parameters.
 */
- (id)initWithOptions:(NSDictionary*)params delegate:(NSObject<AFObjectLoaderDelegate>*)delegate;

///----------------------
/// @name Requesting Data
///----------------------

- (void)requestForPlace:(AFPlace *)place options:(NSDictionary *)options;

/**
 Requests data objects closest to the specified `AFPlace` instance.
 
 Query will limit the search to within xxxxx miles from the passed location. In order to query a broader region,
 set the `radius` option to your custom value (e.g. @"500mi", @"radius").
 
 @param place The `AFPlace` from which to search for nearby strikes from.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestClosest:(AFPlace *)place options:(NSDictionary *)options;

/**
 Requests all data objects within the polygon bounded by the specified points.
 
 @param points An array of points defining the polying to search within.
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestWithinPolygon:(NSArray *)points options:(NSDictionary *)options;

/**
 Requests all data objects within the bounding box defined by the northwest and southeast coordinates.
 
 @param northwestCoordinate The northwest coordinate of the bounding box to search within
 @param southeastCoordinate The southeast coordinate of the bounding box to search within
 @param options A NSDictionary containing the optional parameters for the request
 */
- (void)requestWithinBoundsFromNorthwestCoordinate:(CLLocationCoordinate2D)northwestCoordinate
							   southeastCoordinate:(CLLocationCoordinate2D)southeastCoordinate
										   options:(NSDictionary *)options;

/**
 Requests for data based on the provided search options and values.
 Using this method requires you to at least provide a value for the `query` parameter in your options.
 
 @param options A NSDictionary containing the optional parameters for the request.
 */
- (void)requestWithSearchOptions:(NSDictionary *)options;

///------------------------
/// @name Handling Requests
///------------------------

/**
 Loads objects from the specified resource and request parameters.
 */
- (void)loadObjectsForResource:(NSString*)resource params:(NSDictionary*)params;

- (void)loadObjectsForResource:(NSString *)resource intoModel:(Class)className params:(NSDictionary *)params;

/**
 Cancels the current request if in progress.
 */
- (void)cancel;

/**
 Called when there was an error while attempting to process a request.
 
 The request was likely successful, but there was an issue with the response format, content type or when parsing
 the response data into the necessary format for object mapping.
 */
- (BOOL)encounteredErrorWhileProcessingRequest:(AFResponse*)response;

///----------------------
/// @name Data Expiration
///----------------------

/**
 Returns the expiration time for the loader data request in seconds.
 */
- (NSInteger)expires;

/**
 Indicates the data contained by this loader has expired and should be reloaded as soon as possible.
 */
- (BOOL)isExpired;

@end


@protocol AFObjectLoaderDelegate

/**
 Called when the loader successfully loaded and processed the requested object.
 */
- (void)objectLoader:(AFObjectLoader *)objectLoader didLoadObjects:(NSArray *)objects;

@optional

/**
 Called when there was an error loading and/or processing the requested object.
 */
- (void)objectLoader:(AFObjectLoader *)objectLoader didFailWithError:(NSError *)error;

/**
 Called when the loader begins its internal request.
 */
- (void)objectLoaderDidStartLoad:(AFObjectLoader *)objectLoader;

/**
 Called when there was an unexpected error when processing the object request.
 */
- (void)objectLoaderDidLoadUnexpectedResponse:(AFObjectLoader *)objectLoader;

@end;
