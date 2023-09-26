#include <iostream>
using namespace std;
bool judgeSquareSum(int );
bool isPerfectSquare(int );
/*
Question : 633. Sum of Square Numbers
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

Example 2:
Input: c = 3
Output: false

*/
int main()
{
    /*
    c = 41                  a^2 + b^2 = 41
    a^2     b^2
    0       41
    1       40
    2       39
    3       38
    .
    .
    .
    .
    20      21
                    // After a certain point, the values will be repeqated 


    
    */
   cout<<judgeSquareSum(41);
    return 0;
}
bool judgeSquareSum(int c)
{
    int x= 0;
    int y = c;
    while(x<=y)
    {
        if (isPerfectSquare(x)&& isPerfectSquare(y))
        {
            return true;
        }
        else if (isPerfectSquare(y)==false)
        {
            y= (int)sqrt(y)*(int)sqrt(y);
            x=c-y;
        }
        else {
            // x is not perfect sqaure 
            x =  ((int) sqrt(x) +1) * ((int)sqrt(x) +1) ;
            y=c-x;
        }
    }
    return false;

}
bool isPerfectSquare (int a)
{
    int root = sqrt(a);
    if (root * root == a){
        return true;
    }
    else {
        return false;
    }
}
// Time Complexity is O(root (c))