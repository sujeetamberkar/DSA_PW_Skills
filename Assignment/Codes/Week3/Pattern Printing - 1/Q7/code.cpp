/*
Required Output:
   ****
  ****
 ****
****

*/
#include<iostream>
using namespace std;
int main()
{

    int n=4;
    cout<<"Enter a number\t";
    cin>>n;

    for(int i=1; i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}