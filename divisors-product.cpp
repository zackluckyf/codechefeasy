//
//  main.cpp
//  divisors-product
//
//  Created by Zack Fanning on 9/23/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Being in love with number theory, Johnny decided to take a number theory course. On the first day, he was challenged by his teacher with the following problem: given a number N, compute the product of its positive divisors. Johnny is desperate to impress his new teacher so he asks you for help. In this problem, the divisors of N do not include the number N itself. For example, if N=12, the divisors of N (excluding N) are 1, 2, 3, 4, and 6. Thus, the product of divisors is 1x2x3x4x6=144. Since the result may be very large, if the result has more than 4 decimal digits, Johnny only needs to compute the last 4 digits of it.
*/

#include <iostream>
#include <vector>
#include <iomanip>

int main(int argc, const char * argv[]) {
    int userInput;
    std::vector<int> divisors;
    std::cout << "Enter the number whose divisors you would like to see multiplied, for numbers greater than 4 digits only the last 4 numbers will be shown: ";
    std::cin >> userInput;
    for (int i = 1; i <= userInput/2; i++)
    {
        if(userInput % i == 0)
        {
            divisors.push_back(i);
        }
    }
    int total = 1;
    for (int i = 1; i < divisors.size(); i++)
    {
        total = total * (divisors[i]);
    }
    
    std::cout << "\n" << std::setw(4) << std::setfill('0') << total%10000 << "\n";
    
    return 0;
}
