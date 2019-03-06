//
//  main.cpp
//  RecursionProject
//
//  Created by Davis, Lauren on 3/6/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include <iostream>
using namespace std;

long fibonacci(long number)
{
    //Iterative//
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        long previous = 1;
        long current = 1;
        
        for(int index = 2; index < number; index++)
        {
            long temp = current;
            current += previous;
            previous = temp;
        }
        return current;
    }
    
//Recursive//
//    if (number == 0 || number == 1) //base case
//    {
//        return 1;
//    }
//    else //call
//    {
//        return fibonacci(number - 1) + fibonacci(number - 2);
//    }
}

double factorial(double number)
{
    
    //Recursive//
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
    
}

int main()
{
    for (int index = 50; index < 100; index++)
    {
        cout << "The Fibonacci sequence at " << index << " is " << fibonacci(index) << endl;
        //cout << "The factorial of " << index << " is " << factorial(index) << endl;
    }
    
    return 0;
}
