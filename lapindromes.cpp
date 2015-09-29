//
//  main.cpp
//  lapindromes
//
//  Created by Zack Fanning on 9/10/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

// This program asks a user to input strings and checks if they are lapindromes

#include <iostream>
#include <string>
#include <vector>

int main(int argc, const char * argv[])
{
    int t, temp;
    // number of test cases
    std::string s;
    // string to test
    std::vector<int> truth(t);
    // vector of ints 1 or 0 to denote truth value
    std::cout << "Enter the number of strings you would like to test: ";
    std::cin >> t;
    temp = t;
    while (t > 0)
    {
        std::cout << "Enter the string to test: ";
        std::cin >> s;
        int length = s.length();
        if (length % 2 == 1)
        {
            s.erase((length/2), 1);
            length = length - 1;
        }
        for (int i = 0; i < length; i++)
        {
            i=0;
            for (int j = i+1; j < length; j++)
            {
                if (s.at(i) == s.at(j))
                {
                    // getting out of range errors here
                    // errors fixed, holy challenging
                    s.erase(i,1);
                    s.erase(j-1,1);
                    length -=2;
                }
            }
        }
        if (s.empty() == 1)
        {
            truth.push_back(1);
        }
        else
        {
            truth.push_back(0);
        }
        t--;
        std::cout << s;
    }
    for (int i = 0; i < temp; i++)
    {
        if (truth[i] == 1)
        {
            std::cout << "YES\n";
        }
        else if (truth[i] == 0)
        {
            std::cout << "NO\n";
        }
   
    }
    return 0;
}
