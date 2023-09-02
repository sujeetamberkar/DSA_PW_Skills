#include<iostream>
using namespace std;

// Global Variable
int a=10;

void func(int z,int y)
{
        cout<<"The func adress of x is "<<&z<<endl;
        cout<<"The func adress of y is "<<&y<<endl;
}
int main()
{
    int x,y;

    cout<<"The main adress of x is "<<&x<<endl;
    cout<<"The main adress of y is "<<&y<<endl;
    func(x,y);
    return 0;
}