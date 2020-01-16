//
//  calc.h
//  Calculator
//
//  Created by John Mortensen on 10/30/19.
//  Copyright © 2019 JM. All rights reserved.
//

#ifndef calc_h
#define calc_h

#include <stdio.h>
#include <math.h>

// Classic C style defines for Operator control
#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3
#define MODULO 4
#define SQRT 5

// Classic C style prototype for calculation function
int zeroTest(double value);
double calculateIt(double arg1, int mathOp, double arg2);

#endif /* calc_h */
