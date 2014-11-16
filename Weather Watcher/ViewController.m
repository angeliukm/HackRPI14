//
//  ViewController.m
//  Weather Watcher
//
//  Created by Katelyn Angeliu on 11/15/14.
//  Copyright (c) 2014 Katelyn Angeliu. All rights reserved.
//

#import "ViewController.h"
#import <Aeris/Aeris.h>

@interface ViewController () //<AFObjectLoaderDelegate>


@end

@implementation ViewController 

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    //self.textField.text;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - AFObjectLoaderDelegate

- (void)objectLoader:(AFObjectLoader *)loader didLoadObjects:(NSArray *)objects {
    // do something with the loaded data
}

- (void)objectLoader:(AFObjectLoader *)loader didFailWithError:(NSError *)error {
    // handle error
}


/*
@synthesize textField;
@synthesize String;


-(IBAction)changePlace{
    self.String = textField.text;
    
    NSString *nameString = String;
    if ([nameString length] == 0){
        nameString =@"   ";
    }
}
*/

@end
