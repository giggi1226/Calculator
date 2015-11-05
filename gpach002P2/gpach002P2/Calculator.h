//
//  Calculator.h
//  gpach002P2
//
//  Created by giselle pacheco on 9/10/15.
//  Copyright (c) 2015 classroomM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1;
@property (strong, nonatomic) Fraction *operand2;
@property (strong, nonatomic) Fraction *accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
