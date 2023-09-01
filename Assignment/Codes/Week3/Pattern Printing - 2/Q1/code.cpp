/*
Required Output:
    1
   1 2 3 
  1 2 3 4 5
 1 2 3 4 5 6 7

*/
#include<iostream>
using namespace std;
int main()


{
    int n=6;
    cout<<"Enter a number\t";
    cin>>n;

    int a=1;

    for(int i=1; i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<" ";

        }
        a=1;
        for(int j=3;j<=2*i+1;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}