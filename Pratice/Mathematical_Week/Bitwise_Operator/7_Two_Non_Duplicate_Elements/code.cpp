#include<iostream>
using namespace std;
// Problem Statement:
// Given an array where every element appears twice except for two elements which appear only once.
// Find those two unique elements.

// Solution Explanation:
// Use the XOR operation to first get the XOR value of the two unique numbers.
// Then find the position of the first set bit in this XOR value.
// Use this bit position to partition the numbers into two groups and again use XOR to get the two unique numbers.


// 1) Since X - OR
        // A ^ A =  0
          
int main ()
{
    
    int array [] = {1,2,1,3,2,5};

    int var = 0;


    // XOR all elements. The result is the XOR of the two unique numbers.
    for (int element : array)
    {
        var = var ^ element;
    }
    int x_or_value = var;

    // Now var contains the xor value of the (Non Duplicate elements )
    


    // Find the position of the first set bit in x_or_value.
    int piviot = 0;
    while (var)
    {
        if (var & 1)
        {
            break;
        }
        piviot++;

        var=var>>1;
    }
    // Want the first 1 from RHS
    var = 0;

    // Use the found bit position (piviot) to segregate numbers into two groups.
    // XORing the numbers in one group gives one of the unique numbers.

    for (int element :array )
    {
        if ((1<<piviot)&element)
        {
            var = var ^ element;
        }
    }

    // XOR the found number with x_or_value to get the second unique number.
    int missing_number_2 = x_or_value ^ var;


    cout << "The missing two numbers are "<<var <<" and "<< missing_number_2;
    return 0;
}