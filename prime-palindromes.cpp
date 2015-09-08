//
//  main.cpp
//  prime-palindromes
//
//  Created by Zack Fanning on 9/8/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>

static bool printed = false;
void printPrimePalindrome (int num, int& prime);
void stopFunction (int num);

int main(int argc, const char * argv[]) {
    int num;
    int prime (2);
    std::cout << "Enter a number less than one million to find out a bigger number that is a prime palindrome: ";
    std::cin >> num;
    printPrimePalindrome(num, prime);
    return 0;
}

void printPrimePalindrome (int num, int& prime)
{
    if (prime == 1000000)
    {
        std::cout << "\nThere is no prime under 1,000,000 bigger than your number!";
    }
    /* for every statement like this i have no idea why this program hates me but adding all of these in makes it work and this makes me less stressed
     */
    else if (printed == true)
    {
        return;
    }
    else
    {
        if (prime > num)
        {
            int tempPrime = prime;
            for (tempPrime; tempPrime > 2; tempPrime--)
            {
                if (prime % (tempPrime - 1) == 0)
                {
                    printPrimePalindrome(num, prime += 1);
                }
                else
                {
                
                }
                    
            }
            std::string newPrime = std::to_string(prime);
            int length = newPrime.length();
            for (int i = 0; i < length; i++)
            {
                if (newPrime.at(i) != newPrime.at(length - (1 + i)))
                {
                    printPrimePalindrome(num, prime += 1);
                }
                else if (i == length - 1)
                {
                    std::cout << "\n" << newPrime << " is a prime palindrome bigger than " << num;
                    printed = true;
                    if (printed == true)
                    {
                        return;
                    }
                }
                else if (printed == true)
                {
                    return;
                }
            }
            if (printed == true)
            {
                return;
            }
        }
        else if (printed == true)
        {
            return;
        }
        else
        {
            printPrimePalindrome(num, prime += 1);
        }
    }
}