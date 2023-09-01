/*
Required Output 
      A
    A B C
  A B C D E
A B C D E F G

*/
#include<iostream>
using namespace std;
int main()
{
    int n=6;
    cout<<"Enter a number\t";
    cin>>n;

    int a=1;

    for(int i=1; i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<"  ";

        }
        a=0;
        for(int j=3;j<=2*i+1;j++)
        {
            cout<<char('A'+a)<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}