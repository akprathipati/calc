//
//  PythController.m
//  Uiportfolio
//
//  Created by Prathipati, Akshit on 11/13/19.
//  Copyright © 2019 JM. All rights reserved.
//
#include "control.h"
#import "PythController.h"

@implementation PythController
@synthesize side1, side2, side3;

- (void)viewDidLoad {
    [super viewDidLoad];
    [side1 setText:@"0.0"];
    [side2 setText:@"0.0"];
    [side3 setText:@"0.0"];
}

- (IBAction)calculate:(id)sender {
    double side3calc = hyptoneuse(side1.text.doubleValue, side2.text.doubleValue);
    [side3 setText:[NSString stringWithFormat:@"%lf", side3calc]];
}
@end
// hi
