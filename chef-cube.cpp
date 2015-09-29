//
//  main.cpp
//  chef-cube
//
//  Created by Zack Fanning on 9/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 One day, Chef found a cube which has each of its sides painted in some color out of black, blue, red, green, yellow and orange.
 Now he asks you to check if he can choose three sides such that they are pairwise adjacent and painted in the same color.
 */

#include <iostream>
#include <string>

static bool truth = false;

int main(int argc, const char * argv[])
{
    std::string colors[6] = {"green", "yellow", "black", "blue", "red", "orange"};
    // colors are entered in the order of front, back, left, right, top and bottom
    std::cout << "Enter the colors of a 6 sided cube, options are either black, blue, red, green, yellow, or orange: ";
    
    std::string userInput[6];
    for (int i = 0; i < 6; i++)
    {
        std::cin >> userInput[i];
    }

    for (int j = 0; j < 2; j++)
    {
            if ((userInput[j].compare(userInput[2]) == 0 || (userInput[j].compare(userInput[3]) == 0)))
            {
                if ((userInput[j].compare(userInput[4]) == 0 || (userInput[j].compare(userInput[5]) ==0)))
                    {
                        truth = true;
                    }
            }
    }
    
    if (truth == true)
    {
        std::cout << "YES\n";
    }
    else
        std::cout << "NO\n";
    
    
    return 0;
}
    
