#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=3;

    cout<<"Sum is "<<b+a;

    cout<<"You can take Input Via Pointer";
    int *ptr = & a;
    cin>>*ptr;
    cout<<a;
}