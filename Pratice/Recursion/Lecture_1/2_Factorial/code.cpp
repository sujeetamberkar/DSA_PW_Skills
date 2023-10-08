#include<iostream>
using namespace std;

int factorial(int );
int main()
{
    cout<<factorial(0);
    return 0;
}
int factorial(int a)
{
    // Base Case , Break the Recursion 
    if (a==1 || a ==0)
    {
        return 1;
    }
    return a * factorial(a-1);

}
