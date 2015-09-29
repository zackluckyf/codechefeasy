//
//  main.cpp
//  binary-tree
//
//  Created by Zack Fanning on 9/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
/* 
Consider an infinite full binary tree (each node has two children except the leaf nodes) defined as follows. For a node labelled v its left child will be labelled 2*v and its right child will be labelled 2*v+1. The root is labelled as 1. You are given N queries of the form i j. For each query, you have to print the length of the shortest path between node labelled i and node labelled j.
 */

#include <iostream>
#include <vector>

static int count(0);

int tree(int y, int x);

int main(int argc, const char * argv[])
{
    int start, end, distance;
    std::cout << "Enter the starting node: ";
    std::cin >> start;
    std::cout << "Enter the ending node: ";
    std::cin >> end;
    distance = tree(start, end);
    if (start == end)
    {
        distance = 0;
    }
   std::cout << "The shortest distance between these nodes is: " << distance << "\n";
    return 0;
}

int tree(int y, int x)
{
    std::vector<int> start;
    std::vector<int> end;
    std::vector<int> distance;
    while (y != 1)
    {
        if (y % 2 == 0)
        {
            y = y / 2;
        }
        else
        {
            y = (y - 1) / 2;
        }
        start.push_back(y);
    }
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = (x - 1) / 2;
        }
        end.push_back(x);
    }
    for (int i = 0; i < start.size(); i++)
        {
            int temp = 0;
            for (int j = 0; j < end.size(); j++)
            {
                if (start[i] == end[j])
                {
                    temp = 1;
                }
            }
            if (temp == 0)
            {
                distance.push_back(start[i]);
            }
        }
    for (int j = 0; j < end.size(); j++)
    {
        int temp = 0;
        for (int i = 0; i < start.size(); i++)
        {
            if (end[j] == start[i])
            {
                temp = 1;
            }
        }
        if (temp == 0)
        {
            distance.push_back(end[j]);
        }
    }
    /*  
     function is set to check distances and looks at values less than the start and end i.e. if you enter
     5 and 4 it will look at 2,1 and 2,1. So a correction of two was applied since thats the distance required to look at all the comparison points.
     */
    return distance.size() + 2;
}











