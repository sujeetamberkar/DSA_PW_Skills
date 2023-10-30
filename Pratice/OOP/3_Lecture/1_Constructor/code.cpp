#include<iostream>
#include<string>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    // Default Constructor
    // Used for intiallzation of values
    Bike (int tyreSize, int engineSize){
        this->engineSize = engineSize;
        this->tyreSize = tyreSize;
        // cout <<"Calling Constructor"<<endl;
    }

    ~Bike()
    {
        cout<<"Destruction is called"<<endl;
    }

};

int main ()
{
Bike honda(34,44);
if (true)
{
Bike tvs(23,45);

}

cout <<"Outside the bracket"<<endl;
}