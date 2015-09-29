//
//  main.cpp
//  cooling-pies
//
//  Created by Zack Fanning on 9/10/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

/* The user inputs the weights of pies and weight limits
 of the cooling racks and the program determines the maximum amount of 
 pies that can be cooled
*/

int main(int argc, const char * argv[])
{
   
    int t, n, temp, size, size2;
    std::vector <int> pies;
    std::vector <int> racks;
    // t is test cases, n is cooling racks and pies, assumption that ratio is 1:1
    std::cout << "Enter the number of test cases: ";
    std::cin >> t;
    while (t > 0)
    {
        std::cout << "Enter the number of pies: ";
        std::cin >> n;
        temp = n;
        size = temp;
        size2 = size;
        int total(0), total2(0);
        std::cout << "Enter the weight of the pies: ";
        while (n > 0)
        {
            int weight;
            std::cin >> weight;
            pies.push_back(weight);
            n--;
        }
        std::cout << "Enter the weight limit of the racks: ";
        while (temp > 0)
        {
            int weight;
            std::cin >> weight;
            racks.push_back(weight);
            temp--;
        }
        
        for(int i = 0; i < size; i++)
        {
            total = total + racks[i];
        }
        std::sort(pies.begin(), pies.end());
        for(int i = 0; i < size2; i++)
        {
            total = total - pies[i];
            if (total > 0)
            total2 = total2 + 1;
        }
        std::cout << "The cooling racks can hold " << total2 << " pies!\n";
        t--;
    }
    return 0;
}
