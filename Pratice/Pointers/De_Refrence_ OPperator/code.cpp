#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p=&x;

    cout<<p<<endl;
    cout<<*p<<endl;
    // Go to the adress stored in p, and print the value stored in p
    // Thus we have an anothr way to acess the value of p


    *p=20;
    cout<<p<<endl;
    cout<<*p<<endl;
    
}