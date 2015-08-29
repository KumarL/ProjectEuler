//
//  Problem3.h
//  ProjectEuler
//
//  Created by Lokesh Kumar on 8/29/15.
//  Copyright (c) 2015 LK. All rights reserved.
//

#ifndef ProjectEuler_Problem3_h
#define ProjectEuler_Problem3_h

#include <math.h>

long solution()
{
    long number = 600851475143;
    long root = static_cast<long>(floor(sqrt(number)));
    
    int factor = 3;
    while (factor < root && number != 1)
    {
        while (number % factor == 0) {
            number /= factor;
        }
        factor += 2;
    }
    return factor - 2;
}

#endif
