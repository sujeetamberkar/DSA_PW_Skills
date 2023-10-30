#include<iostream>
using namespace std;
class Bike {
    private:
    int tyreSize;
    int engineSize;

    public:
    Bike (int ts, int eS):tyreSize(ts),engineSize(eS){}
    Bike (int ts):tyreSize(ts),engineSize(100){}
    Bike ():tyreSize(10),engineSize(10){}
    int getTyreSize()
    {
        return tyreSize;
    }

    int getEngineSize()
    {
        return engineSize;
    }



};

int main ()
{
    Bike tvs;
    Bike bajaj(80);
    Bike jupiter(23,45);

    cout<<"TVS "<<tvs.getTyreSize()<<" "<<tvs.getEngineSize();
    cout<<"TVS "<<jupiter.getTyreSize()<<" "<<jupiter.getEngineSize();


}