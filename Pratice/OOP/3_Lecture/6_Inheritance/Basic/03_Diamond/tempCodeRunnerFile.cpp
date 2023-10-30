#include<iostream>
using namespace std;


class A {
    public:
    int a_var;
};

class B: public A {
    public:
    int b_var;
    void print ()
    {
        "B says Hi";
    }

};

class C: public A{
    public:
    int c_var;
        void print ()
    {
        "C says Hi";
    }

};

class D: public B, public C{
    public:
    int dvar;

    void showApublic ()
    {
        cout <<C :: a_var;
        cout <<B :: a_var;

        
    }

};

int main ()
{
    A a_obj;
    B b_obj;
    C c_obj;
    D d_obj;

    a_obj.a_var = 1;
    b_obj.b_var = 2;
    c_obj.c_var = 3;
    d_obj.dvar = 4;

    d_obj.showApublic(); //(How to specify it is from C)
    d_obj.C::print();
    d_obj.B::print();


}