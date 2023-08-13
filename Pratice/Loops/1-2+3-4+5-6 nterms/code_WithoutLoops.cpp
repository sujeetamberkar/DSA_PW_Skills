#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter how many terms\t";
    cin>>num;

int sum=0;
    if (num%2==0)
    {
        sum=(num/2)*-1;
    }

    else
    {
        sum=(num/2)*-1+num;
    }
    cout<<"Sum is\t"<<sum;
    
    return 0;
}