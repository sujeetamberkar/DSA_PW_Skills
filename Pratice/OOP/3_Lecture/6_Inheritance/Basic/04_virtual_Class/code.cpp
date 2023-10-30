#include<iostream>
using namespace std;

class A {
public:
    int a_var;
    A(int a_var): a_var(a_var) {}
};

class B: virtual public A {
public:
    int b_var;
    B(int a_var, int b_var): A(a_var), b_var(b_var) {}
    void print() {
        cout << "B says Hi" << endl;
    }
};

class C: virtual public A {
public:
    int c_var;
    C(int a_var, int c_var): A(a_var), c_var(c_var) {}
    void print() {
        cout << "C says Hi" << endl;
    }
};

class D: public B, public C {
public:
    int d_var;

    D(int a_var_B, int b_var, int a_var_C, int c_var, int d_var)
    : A(a_var_B), B(a_var_B, b_var), C(a_var_C, c_var), d_var(d_var) {} 
    // Note that we're initializing A directly here

    void showApublic() {
        cout << a_var << endl;
    }
};

int main() {
    A a_obj(1);
    B b_obj(2,3);
    C c_obj(4,5);
    D d_obj(6,7,8,9,10);

    d_obj.showApublic();
    d_obj.C::print();
    d_obj.B::print();
}
