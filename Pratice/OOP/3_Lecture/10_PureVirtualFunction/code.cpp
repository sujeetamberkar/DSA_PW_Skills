#include<iostream>
using namespace std;

// This is abstract class
// A class which contains only pure virtual function
// Similar to Interface in Java
// All the functions in this are  manadatory to overriding  


// If its an abract class 
// You dont need to create object of that class 


// Pure Abract class 
class Vehicle {
    public:
    int var;
    virtual void calculateMillage() = 0;

};

class Bike : public Vehicle
{
    public : 
    void calculateMillage()
    {
        cout <<"NICE";
    }
    int a;

};
int main ()
{

}