#include<iostream>
using namespace std;
int main()
{
    int x=5;

    int *ptr=&x;
    int **ptr2= &ptr;
    cout<<"A"<<endl<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl; // Pointer ka adress 
cout<<"B"<<endl<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;

cout<<"C"<<endl<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    return 0;

}