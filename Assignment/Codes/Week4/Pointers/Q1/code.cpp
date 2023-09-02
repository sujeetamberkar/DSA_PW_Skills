// Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;

int product(int *  , int *);

int main()
{
    int a,b;
    cin >>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    
    cout<<"Product "<<product(ptr1,ptr2);

    return 0;
}

int product(int * x, int * y)
{
    int pr=1;
    pr= (*x) *(*y);
    return pr;
}