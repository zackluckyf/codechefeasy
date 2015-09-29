//
//  main.cpp
//  ups-and-downs
//
//  Created by Zack Fanning on 9/23/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 You will be given a zero-indexed array A. You need to rearrange its elements in such a way that the following conditions are satisfied:
 A[i] ≤ A[i+1] if i is even.
 A[i] ≥ A[i+1] if i is odd.
 In other words the following inequality should hold: A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4], and so on. Operations ≤ and ≥ should alter.

 */

#include <iostream>

int main(int argc, const char * argv[])
{
    int size, temp;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int array[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (array[i] > array [i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        else
        {
            if (array[i] < array [i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    
    return 0;
}
