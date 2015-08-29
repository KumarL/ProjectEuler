//
//  Problem2.h
//  ProjectEuler
//
//  Created by Lokesh Kumar on 8/29/15.
//  Copyright (c) 2015 LK. All rights reserved.
//

#ifndef ProjectEuler_Problem2_h
#define ProjectEuler_Problem2_h

long sum_even_fibonacci()
{
    const long threshold = 4000000;
    long sum = 0;
    
    int prev = 2; int prev_prev = 1;
    
    while (prev <= threshold)
    {
        if (prev % 2 == 0)
        {
            sum += prev;
        }
        
        int next = prev + prev_prev;
        prev_prev = prev;
        prev = next;
    }
    
    return sum;
}

#endif
