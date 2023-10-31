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
    for(int k=1;k<=i;k++ )
    {
        cout<<k;
    }
    for ( int l = i-1; l >=1; l--)
    {
        cout<<l;
    }
    
    cout<<endl;
}


}


/*
    1
   121
  12321
 1234321
123454321

*/