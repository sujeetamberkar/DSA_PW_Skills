#include<iostream>
using namespace std;
int main()
{
    int number=5;


for(int i=0; i <=number;i++)
{
    for(int j=0; (i+j) < number ; j++)
    {
        cout<<" ";
    }
    for(int k=0;k<i;k++ )
    {
        cout<<"*";
    }
    for ( int l = 0; l < i-1; l++)
    {
        cout<<"*";
    }
    
    cout<<endl;
}


int nst=1;
int nsp=number-1;

for(int i=1; i<=number;i++)
{
    for(int j=1; j<=nsp;j++)
    {
        cout<<" ";
    }
    nsp--;
    for(int k=1;k<=nst;k++)
    {
        cout<<"*";
    }
    nst+=2;
    cout<<endl;
}


/*

    *
   ***
  *****
 *******
*********
    *
   ***
  *****
 *******


*/
return 0;
}