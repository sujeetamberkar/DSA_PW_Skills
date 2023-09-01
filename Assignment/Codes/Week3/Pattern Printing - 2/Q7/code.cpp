/*
   *
  *  *
 *    *
*      *
 *    *
  *  *
   *
*/
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    
    for(int i=1;i<=n-1;i++)
    {
        cout<<" ";
    }
    cout<<"*"<<endl;

    for(int i=2;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n);j++)
        {
            if (i==n && j==n)
            {
                cout<<"*";
                break;
            }
            
            if(j==i || (i+j ==(2*n + 1)))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
   }


}