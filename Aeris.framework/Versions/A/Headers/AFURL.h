//
//  AFURL.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 6/9/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//


/**
 A custom implementation of NSURL that depends on resource paths and a static base API path.
 
 Much of this class handles proper calls to the Aeris API using a static base URL and a series of REST paths to particular
 resources. All options sent with the request will be automatically converted to a query string for GET requests, or 
 attached to the request via POST.
 */
@interface AFURL : NSURL {
    NSString* _baseURLString;
	NSString* _resourcePath;
	NSDictionary* _options;
}

/**
 Common base url path for all instances.
 */
@property (nonatomic, readonly) NSString* baseURLString;

/**
 Path to be appened to the end of the base path for specific requests.
 */
@property (nonatomic, readonly) NSString* resourcePath;

/**
 Series of options that are appended to the end of the url path as parameters.
 */
@property (nonatomic, readonly) NSDictionary* options;

///--------------------
/// @name Creating URLs
///--------------------

/**
 Create and return an AFURL instance with the specified base URL and an API/REST resource path.
 The resource path will be appended to the end of the base URL string.
 
 @param baseURLString The base of the URL path, usually just the domain.
 @param resourcePath The RESTful path to the requested resource.
 @return An autoreleased AFURL instance configured with the generated URL path.
 */
+ (AFURL*)URLWithBaseURLString:(NSString*)baseURLString resourcePath:(NSString*)resourcePath;

/**
 Create and return an AFURL instance with the specified base URL and an API/REST resource path with request options.
 Options will be converted to a URL query string and appended to the end as needed.
 
 @param baseURLString The base of the URL path, usually just the domain.
 @param resourcePath The RESTful path to the requested resource.
 @param options A NSDictionary instance defining additional parameters to be passed in the query string.
 @return An autoreleased AFURL instance configured with the generated URL path.
 */
+ (AFURL*)URLWithBaseURLString:(NSString*)baseURLString resourcePath:(NSString*)resourcePath options:(NSDictionary*)options;

/**
 Create and return an AFURL instance with the specified URL path string.
 Options will be converted to a URL query string and appended to the end as needed.
 
 @param URLString The full URL path to be used.
 @param options A NSDictionary instance defining additional parameters to be passed in the query string.
 @return An autoreleased AFURL instance configured with the generated URL path.
 */
+ (AFURL*)URLWithString:(NSString*)URLString options:(NSDictionary*)options;

/**
 Creates an AFURL instance with a base URL and path to a REST resource.
 
 @param baseURLString The base of the URL path, usually just the domain.
 @param resourcePath The RESTful path to the requested resource.
 @param options A NSDictionary instance defining additional parameters to be passed in the query string.
 @return An AFURL instance configured with the generated URL path.
 */
- (id)initWithBaseURLString:(NSString*)baseUrlString resourcePath:(NSString*)resourcePath options:(NSDictionary*)options;

@end
