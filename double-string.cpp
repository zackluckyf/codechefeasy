//
//  main.cpp
//  double-string
//
//  Created by Zack Fanning on 9/10/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
   
    int t,n;
    std::cout << "Enter number of tests: ";
    std::cin >> t;
    while(t > 0)
    {
        std::cout << "Enter palindrome size: ";
        std::cin >> n;
        
        if(n%2 == 1)
        {
            std::cout << "Max double string size is: " << n - 1 << "\n";
        }
        else
        {
            std::cout << "Max double string size is: " << n << "\n";
        }
         t--;
    }
    return 0;
}
