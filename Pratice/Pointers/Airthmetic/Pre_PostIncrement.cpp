#include<iostream>
using namespace std;
int main()
{
    // Pre
    int a=5;
    int *ptr=&a;
    int b = ++ (*ptr);
    cout<<"a "<<a<<" b "<<b<<endl;


// Post
    a=5;
    b=(*ptr)++;
    cout<<"a "<<a<<" b "<<b;

    return 0;
}