//
//  ViewController.h
//  gpach002P2
//
//  Created by giselle pacheco on 9/10/15.
//  Copyright (c) 2015 classroomM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//numeric Keys

-(IBAction) clickDigit: (UIButton *) sender;

//Arithmetic operation keys

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

//Misc keys

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;
-(IBAction) clickConvert;

@end
