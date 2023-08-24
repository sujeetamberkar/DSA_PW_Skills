/*
Required Output:

*
**
***
****
***
**
*


*/
#include<iostream>
using namespace std;
int main()
{
    
    int n=4;
    cout<<"ENter a number ";
    cin>>n;
    for(int i=1; i <=4;i++)
    {
        for(int j=1; j <=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i < n; i++)
    {
        for(int j=4; j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

