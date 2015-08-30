//
//  Problem5.h
//  ProjectEuler
//
//  Created by Lokesh Kumar on 8/29/15.
//  Copyright (c) 2015 LK. All rights reserved.
//

#ifndef ProjectEuler_Problem5_h
#define ProjectEuler_Problem5_h

long gcd(long a, long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long solution() {
    long lcm = 1;
    for (long b = 2; b <= 20; b++) {
        // compute gcd of a and b
        long div = gcd(lcm, b);
        lcm = (lcm*b)/div;
    }
    return lcm;
}

#endif
