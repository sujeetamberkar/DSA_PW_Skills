// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;

int square(int a)
{
    return a*a;
}

int main()
{
    int number;
    cin>>number;

    for(int i=1;i<=number;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1; i<=number;i++)
    {
        cout<<square(i)<<" ";
    }

}