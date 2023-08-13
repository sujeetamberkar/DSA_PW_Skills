#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int num;
    cout<<"Enter a number\t";
    cin>>num;
    int product=1;
    for (int  i = 1; i <= num; i++)
    {
        product*=i;
        /* code */
    }
    cout<<"Factorial is "<<product;
    
    return 0;
}