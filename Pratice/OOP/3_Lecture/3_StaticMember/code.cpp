#include<iostream>
#include<string>
using namespace std;
class Bike{
public:

// This doesnt depends on the object, THis belongs to class
    static int numberOFBikes; 
    int tyreSize;
    int engineSize;

    Bike (int tyreSize, int engineSize = 200){
        this->engineSize = engineSize;
        this->tyreSize = tyreSize;
    }

    void setNoOfBikes(int numberOFBikes)
    {
        this-> numberOFBikes = numberOFBikes;
    }
    int getNOOFBikes ()
    {
        return numberOFBikes;

    }
// Static Function do not belong to any object, 
// Belong to class 
// Always Access the static members with static functions 
    static void increaseNO_Bikes (){
        numberOFBikes ++;
    }
};
int Bike::numberOFBikes = 0;

void print (){
    static int  b = 10;
    cout <<b<<endl;
    b++;
}

int main ()
{
    Bike tvs(2,3);
    Bike Honda(7,8);
    tvs.setNoOfBikes(34);
    cout <<Honda.getNOOFBikes();
    Honda.increaseNO_Bikes();
    cout <<tvs.numberOFBikes;

}