#include<iostream>
using namespace std;
int main()
{
    // DataType * var_name
    // We need to specify which type of pointers
    int x=5;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Adress of x is "<<&x<<endl<<endl<<endl;
    // & opperator is used for displaying adress 

    // We can store address of varibles in pointers 

    int a=4;
    int* p=&x;
    cout<<&a<<endl;
    cout<<p<<endl;

    return 0;
}