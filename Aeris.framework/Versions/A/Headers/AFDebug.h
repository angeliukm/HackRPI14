//
//  AFDebug.h
//  AerisCore
//	$Id$
//
//  Created by Nicholas Shipes on 4/25/11.
//  Copyright 2011 WeatherNation, LLC. All rights reserved.
//


#define AFLOGLEVEL_INFO		5
#define AFLOGLEVEL_WARNING	3
#define AFLOGLEVEL_ERROR	1

#ifndef AFMAXLOGLEVEL
	#define AFMAXLOGLEVEL AFLOGLEVEL_WARNING
#endif

#ifndef AF_DEBUG
	#define AF_DEBUG 1
#endif

// general purpose logger that ignores logging levels
#ifdef AF_DEBUG
	#define AFDPRINT(xx, ...) NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
	#define AFDLOG(s, ...) NSLog(@"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__])
#else
	#define AFDPRINT(xx, ...) ((void)0)
	#define AFDLOG(s, ...) ((void)0)
#endif

// debug-only assertions
#ifdef AF_DEBUG

#import <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR

	int AFIsInDebugger(void);

#endif	// #ifdef TARGET_IPHONE_SIMULATOR

#endif	// #ifdef AF_DEBUG