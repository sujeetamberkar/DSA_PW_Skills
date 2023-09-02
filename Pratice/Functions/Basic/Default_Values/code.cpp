#include<iostream>
using namespace std;
// If you are giving default value, then give to everyone or give no-one
void func(int z=5,int y=10)
{
        cout<<"z is "<<z<<endl;
        cout<<"y is "<<y<<endl;
}

int main()
{
    int x=100,y=100;
    func();// Default value of the function will be taken
    func(x,y);
    func(3);
    return 0;
}

