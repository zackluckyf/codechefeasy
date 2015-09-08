//
//  main.cpp
//  holes-in-text
//
//  Created by Zack Fanning on 9/8/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

void countHoles(int num);

int main(int argc, const char * argv[])
{
    int numCases;
    std::cout << "How many tests would you like to run: ";
    std::cin >> numCases;
    countHoles(numCases);
    return 0;
}

void countHoles(int num)
{
    std::vector<std::string> words(num);
    std::cout << "Enter the words to test (in caps): ";
    for (int i = 0; i < num; i++)
    {
        std::cin >> words[i];
    }
    for (int i = 0; i < num; i++)
    {
        std::vector<int> holes(num);
        int count(0);
        std::string oneWord = words[i];
        int length = oneWord.length();
        for (int j = 0; j < length; j++)
        {
            if (oneWord.at(j) == 'B')
            {
                count = count + 2;
            }
            else if (oneWord.at(j) == 'A' || oneWord.at(j) == 'D' || oneWord.at(j) == 'O' || oneWord.at(j) == 'P' || oneWord.at(j) == 'R' || oneWord.at(j) == 'Q')
            {
                count = count + 1;
            }
            holes[i] = count;
        }
        std::cout << holes[i] << "\n";
    }
}

