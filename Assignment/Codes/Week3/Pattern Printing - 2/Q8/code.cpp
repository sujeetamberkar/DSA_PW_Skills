/*
   1
  2  2
 3    3
4      4
*/
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int count=1;
    for(int i=1;i<=n-1;i++)
    {
        cout<<" ";
    }
    cout<<count<<endl;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        count++;
        cout<<count;
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<" ";
        }
        cout<<count;
        cout<<endl;
    }
}