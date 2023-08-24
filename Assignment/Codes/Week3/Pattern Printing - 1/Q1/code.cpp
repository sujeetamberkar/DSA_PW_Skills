/*
Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
    int number=4;
    cout<<"Enter a number ";
    cin>>number;

    for(int i=1;i<=number;i++)
    {
        for(int j=1; j<=number;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}