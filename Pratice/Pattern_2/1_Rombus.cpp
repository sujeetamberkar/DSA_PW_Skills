#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"ENter a number ";
    cin >> number;


for(int i=1; i<=number;i++)
{
    for(int j=1;j+i<1+number;j++)
    {
        cout<<" ";
    }

    for(int k=1;k<number;k++)
    {
        cout<<"*";
    }
    cout<<endl;
}




}

/*
ENter a number 4
   ***
  ***
 ***
***
*/