#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}