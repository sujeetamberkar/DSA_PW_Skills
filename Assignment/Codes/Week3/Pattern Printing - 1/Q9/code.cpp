/*
Required Output:
   A
  AB
 ABC
ABCD

*/
#include<iostream>
using namespace std;
int main()
{
    int n=4;

    for(int i=1; i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j='A';j<char(('A'+i));j++)
        {
            cout<<char(j);
        }

        cout<<endl;
    }
    
}