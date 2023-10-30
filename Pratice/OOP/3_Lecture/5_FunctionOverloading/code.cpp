#include<iostream>
using namespace std;


// function with two definations 
int add (int a , int b)
{
    return a+b;
}
int add (int a)
{
    return a + 100;
}
int main ()
{
    cout <<add(3,4)<<endl;
    cout <<add(3)<<endl;
}