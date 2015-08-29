//
//  Problem1.h
//  ProjectEuler
//
//  Created by Lokesh Kumar on 8/24/15.
//  Copyright (c) 2015 LK. All rights reserved.
//

#ifndef ProjectEuler_Problem1_h
#define ProjectEuler_Problem1_h

/*!
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.

 One-pass solution, that does not exhaustively enumerates all possible numbers. Instead, it jumps to the multiples directly.
 */
int print_3_5_multiples() {
    int solution = 0;
    int iter = 1;

    while (true) {
        int mult_3 = iter*3;
        
        if (mult_3 > 1000) {
            break;
        }
        
        solution += mult_3;
        int mult_5 = 0;
        if (iter%3 == 0 || (mult_5 = iter*5) < 1000) {
            solution += mult_5;
        }
        
        iter++;
    }
    
    return solution;
}

#endif
