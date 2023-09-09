#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};

    int n= sizeof(array) / sizeof(array[0]);
    cout<<"Size of Array is "<<n;
}