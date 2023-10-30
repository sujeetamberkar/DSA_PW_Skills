#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a) : a(a) {}
    virtual void show ()
    {
        cout << "A bola "<<endl;
    }
};

class B : public A {
    public:
    int b;
    B(int a, int b ): A(a), b(b) {}
    virtual void show () // Once you upar wala virtual this is also virtual
    {
        cout << "B bola "<<endl;
    }
};

// When you use virtual function
// Work on run time 
// If the function in the base class is declared as virtual, then 
// the derived class's version of the function will be called. 
// This is called runtime polymorphism or dynamic dispatch.

int main () 
{

    // Pointer can store the address of a class 
    A a_obj_1 (1);
    A * pointer;
    pointer = &a_obj_1;
    cout << pointer->a;


    // Pointer can store the address of a child class 
    B obj_2 (3,5);
    A * pointer2;
    pointer2 = &obj_2;
    pointer2 -> show();

    
    // cout << pointer2 ->a<<endl;
    // pointer2 -> B::show();
    // cout << pointer2 ->b;



    // Dynamic Memory allocation 
    A *var_pointer;
    var_pointer = new B(2,3);
    var_pointer -> show();
    var_pointer = new A(12);
    var_pointer -> show();

    delete(var_pointer);




}