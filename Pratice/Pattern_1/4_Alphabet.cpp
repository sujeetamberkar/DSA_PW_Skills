#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number\t";
    cin>>num;
    char ch='A';

    for(int i=0;i<num;i++)
    {
        for(int j=0,ch='A';j<num;j++,ch++)
        {
            cout<<char(ch)<<' ';
        }
        cout<<"\n";
    }
    return 0;
}