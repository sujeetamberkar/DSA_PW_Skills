#include<iostream>
using namespace std;
int gcd(int , int);
int main()
{
    int a= 30, b=80;

    cout<<gcd(a,b);
}

int gcd(int a, int b)
{
    int Common_fact=1;
    for(int i= 1;i<=min(a,b);i++)
    {
        if((a%i==0) && (b%i==0))
        Common_fact=i;
    }
    return Common_fact;
}