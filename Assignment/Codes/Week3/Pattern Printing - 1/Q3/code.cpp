/*

A
A B
A B C
A B C D

*/

#include<iostream>
using namespace std;
int main()
{
    int num=4;
    cout<<"Enter a number ";
    cin>>num;
    for(int i= 'A'; i <= 'A' +num;i++)
    {
        for(int j='A';j<i;j++)
        {
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}