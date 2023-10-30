#include<iostream>
using namespace std;
class A {
    public :
    int a;
    virtual void  show ()
    {
        cout << "Mai A hu ";
    }

};
class B: public A{
    public:
    int b;
    virtual void  show ()
    {
        cout << "Mai B hu ";
    }
};

class Z {
    public :
    int z;
     void  show ()
    {
        cout << "Mai Z hu ";
    }

};
class X: public Z{
    public:
    int x;
     void  show ()
    {
        cout << "Mai X hu ";
    }
};

int main ()
{

// virtual function is for over riding 
// In virtual function 
// Virtual pointer and a virtual table is created 


// v table stores the virtual function 
// if else 
// Instead of calling function directly 
// We will call the table and check which function is stored inside the table 


// Ek class ki ek Table
// Calling function we required binding 
// Run time binding 
// Compile Time Binding


// There is a base class and parent class
// The pointer to the parent class is storing the adress of the child 
// now at run time we will decide which function we will call 


/*
Virtual Keyword: In C++, to enable this runtime polymorphism for a function, 
you use the virtual keyword in the base class. 
If a derived class overrides this function
*/
    Z object_3;
    X object_4;
    A object_1;
    B object_2;
    cout <<"Size of A is "<<sizeof(object_1)<<endl;
    cout <<"Size of B is "<<sizeof(object_2)<<endl;


    cout <<"Size of Z is "<<sizeof(object_3)<<endl;
    cout <<"Size of X is "<<sizeof(object_4)<<endl;

}