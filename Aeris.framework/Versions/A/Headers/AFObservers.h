//
//  AFObservers.h
//  Aeris
//
//  Created by Nicholas Shipes on 9/23/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AFObservers : NSObject {
	
@private
	NSMutableArray *_observers;
}

- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;

@end
