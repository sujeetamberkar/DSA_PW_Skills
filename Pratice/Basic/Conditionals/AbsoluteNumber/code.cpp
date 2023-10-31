#include<iostream>
using namespace std;
int main()
{
int number;
cout <<"Enter a Integer";
cin>>number;
if (number<=0)
{
    number=number*-1;
}

cout <<"The mod the number is "<<number;
    return 0;
}