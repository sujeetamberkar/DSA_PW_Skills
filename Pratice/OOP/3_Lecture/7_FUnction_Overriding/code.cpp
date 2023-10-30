#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a) : a(a) {}

    void print ()
    {
        cout << "A bola awesome"<<endl;
    }
};

class B : public A {
    public:
    int b;
    B(int a, int b ): A(a), b(b) {}
    void print ()
    {
        cout << "B bola get lost"<<endl;
    }
};


int main()
{
    A a_obj(7);
    B b_obj(1,2);
    b_obj.A::print();
    b_obj.B::print();
    b_obj.print();
}