#include<iostream>
#include <string>
#include <vector>

using namespace std;

// So instead of making two seprate classes for car and bike
// We can make a vehicle class that will have the common part and then inherit it

/*

 class car {
    private : 
    int tyreSize;
    int engineSize;
    int steeringSize;
    int lights;
    string companyname;
 };
class Bike {
    private:
    int tyreSize;
    int engineSize;
    int handleSize;
    int lights;
    string companyname;
};

*/

class Vehicle {
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName; 

    Vehicle ()
    {
        cout << "Vehicle ka constructor call hua "<<endl;
    }
};

class car : public Vehicle{ // car is a child of vehicle 
    public : 
    int steeringSize;
};

class Bike : public Vehicle{ // bike is a child of vehicle 
    public:
    int handleSize;
    Bike ()
    {
        cout << "Bike ka constructor call hua"<<endl;
    }
};

int main()
{
    // car ritz;
    // ritz.companyName = "Maruti";
    // ritz.engineSize = 34;
    // ritz.lights = 2;
    // ritz.steeringSize = 4;
    // ritz.tyreSize = 3;


    Bike tvs;
    tvs.companyName = "Jupiter";
    tvs.engineSize = 55;
    tvs.lights = 4;
    tvs.handleSize = 6;
    tvs.tyreSize= 5;

    return 0;
}
