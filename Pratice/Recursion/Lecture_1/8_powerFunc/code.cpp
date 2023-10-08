#include<iostream>
using namespace std;

int powerFunction(int a,int b)
{
    if (a == 0 &&  b == 0)
    {
        cout <<"Not defined ";
        return 999999999;
    }
    if ( b == 0)
    {
        return 1;
    }

    int answer = a * powerFunction(a,b-1);
    return answer;
}

int main()
{
    cout<<powerFunction(2,3);
    return 0;
}
// In recursion 
// Time Complexity O (n) // actually its 2n, kinda slower than itterative solution 
// The number of time we call, 
// Iterative solution is much better in this case 
// That many local numbers will be created 
// Space Complexity = O (n) Stack frame test
