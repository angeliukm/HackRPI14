//
//  AFObservable.h
//  Aeris
//	$Id$
//
//  Created by Nicholas Shipes on 9/23/11.
//  Copyright (c) 2011 Urban10 Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFObservers.h"

@interface AFObservable : NSObject {
	
@private
	AFObservers *_observers;
}

- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (AFObservers *)observers;

@end
