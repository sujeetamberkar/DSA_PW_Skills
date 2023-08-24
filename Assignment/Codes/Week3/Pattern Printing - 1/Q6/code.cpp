/*

Required Output
******
*    *
*    *
******

*/

#include<iostream>
using namespace std;
int main()
{
    int m=4,n=6;
    cout<<"Enter m\t";
    cin>>m;
    cout<<"ENter n\t";
    cin>>n;
    cout<<endl<<endl;
    for(int i=1; i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (i==1||j==1||i==m|j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;

    }

    return 0;
}