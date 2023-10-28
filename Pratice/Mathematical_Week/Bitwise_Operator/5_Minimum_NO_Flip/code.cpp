#include<iostream>


// XOR to Find Differences: Use XOR between two numbers, highlighting bits where they differ.
// Count Set Bits: Employ a loop to count the '1' bits in the XOR result, indicating differences.
// Return Count: Return the total number of '1' bits as the required number of bit flips.

using namespace std;
int function1 (int , int );
int set_bit(int);
int main ()
{
    int a = function1(5,6);
    cout <<a;
    return 0;
}

int function1 (int a, int b)
{
    // X- OR (Only same bit it is set high )
    int c = a ^  b; 
    int answer = set_bit(c);
    return answer;
}

// Calculate the high bit 
int set_bit(int a)
{
    int count = 0;
    while (a)
    {
        count ++;
        a = a & (a -1); 
    }
    
    return count;
}
// __builtin_popcount();