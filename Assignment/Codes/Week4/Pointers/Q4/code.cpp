#include <iostream>
using namespace std;
int main()
{
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
cout<<"Just after assigning "<<endl;
cout<<"a\t"<<a<<endl;
cout<<"b\t"<<b<<endl;
cout<<"ptr\t"<<ptr<<endl;;
cout<<"ptr2\t"<<ptr2;

*ptr = *ptr2;

cout<<"\n\nAfter Code"<<endl;
cout<<"a\t"<<a<<endl;
cout<<"b\t"<<b<<endl;
cout<<"ptr\t"<<ptr<<endl;;
cout<<"ptr2\t"<<ptr2;
}