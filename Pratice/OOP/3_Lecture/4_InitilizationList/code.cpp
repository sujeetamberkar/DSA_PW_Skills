#include<iostream>
using namespace std;
class Bike {
    int tyreSize;
    int engineSize;

public:
    // Bike (int tyreSize, int engineSize = 200)
    // {
    //     this -> tyreSize = tyreSize;
    //     this -> engineSize = engineSize;
    // }

// ShortCut Method to assign the value to the constructor 
    Bike (int ts, int es = 200) : tyreSize (ts),engineSize(es){

    }
    int getEngineSize()
    {
        return engineSize;
    }
};
int main ()
{
    Bike royalEnfiield(15,300);
    Bike bajaj (34);

    cout <<royalEnfiield.getEngineSize()<<endl;

cout <<bajaj.getEngineSize()<<endl;
    
}