//
//  main.cpp
//  reactor
//
//  Created by Zack Fanning on 9/10/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

/*  This program pushes particles in one at a time if a reactor fills up the particle goes to the next reactor and all the particles in the previous reactor are destroyed, the program finally outputs the amount of particles in each reactor
*/

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    int a,n,k;
    // a # of particles, n max particles per reactor, k reactors
    // limits are about 1,000,000 for a, 100 for k, and 100 for n
    std::cout << "Enter # of particles: ";
    std::cin >> a;
    std::cout << "Enter max particles per reactor: ";
    std::cin >> n;
    std::cout << "Enter # of reactors: ";
    std::cin >> k;
    std::vector <int> reactorValues(k);
    int l;
    while (a > 0)
        {
            l=0;
            reactorValues[l] += 1;
            for(l=0; l<k; l++)
            {
                if (reactorValues[l] > n)
                {
                    reactorValues[l] = 0;
                    reactorValues[l+1] += 1;
                }
            }
            --a;
        }
    std::cout << "Reactor values are: ";
    for (int i = 0; i < k; i++)
    {
        std::cout << reactorValues[i] << " ";
    }
    return 0;
}
