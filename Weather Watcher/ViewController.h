//
//  ViewController.h
//  Weather Watcher
//
//  Created by Katelyn Angeliu on 11/15/14.
//  Copyright (c) 2014 Katelyn Angeliu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Aeris/Aeris.h>

@interface ViewController : UIViewController //<AFObjectLoaderDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *location;

/*{
    IBOutlet UITextField *textField;
    NSString *String;
}*/

//@property (strong, nonatomic) IBOutlet UITextField *textField;

//- (IBAction)changePlace;





@end

