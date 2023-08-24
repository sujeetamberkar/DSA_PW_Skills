#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"ENter a number ";
    cin >> number;


for(int i=0;i<number;i++)
{
    for(int j=1;j+i<=number;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<=i+1;k++)
    {
        cout<<k;
    }
    cout<<endl;





}
}
/*
ENter a number 3
   1
  12
 123

  */


