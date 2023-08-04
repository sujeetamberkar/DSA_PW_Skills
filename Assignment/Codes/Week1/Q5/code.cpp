//WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main()
{
    char a,b;
    cout<<"Enter first ASCII char ";
    cin>>a;
    cout<<"Enter sec ASCII char ";
    cin>>b;
    cout<<"Difference between the two ASCII character"<<int(a)-int(b);
    return 0;
}