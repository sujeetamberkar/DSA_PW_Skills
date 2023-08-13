#include<iostream>
using namespace std;
int main()
{

int num;
cout<<"How many terms ";
cin>>num;

int sum=0;
for (int i=1;i<num;i++)
{
    if (i%2 != 1)
    {
        sum+=i;
    }
    else
    {
        sum-=i;

    }
    
}

cout<<"Sum "<<sum;

    return 0;
}