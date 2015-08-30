//
//  Problem4.h
//  ProjectEuler
//
//  Created by Lokesh Kumar on 8/29/15.
//  Copyright (c) 2015 LK. All rights reserved.
//

#ifndef ProjectEuler_Problem4_h
#define ProjectEuler_Problem4_h

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <cmath>

using namespace std;

int solution()
{
    int best = 0;
    
    for (int factor1 = 999; factor1 >= 100; factor1--) {
        for (int factor2 = factor1; factor2 >= 100; factor2--) {
            ostringstream ss;
            int number = factor1 * factor2;
            if (number < best)
                break;
            
            ss << number;
            string s1 = ss.str();
            string s2 = ss.str(); std::reverse(s2.begin(), s2.end());
            
            if (s1 == s2) {
                best = number;
            }
        }
    }
    
    return best;
}

#endif
