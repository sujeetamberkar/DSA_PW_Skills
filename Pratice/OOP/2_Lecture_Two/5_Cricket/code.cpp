#include<iostream>
#include <string>
using namespace std;

class cricketer {
    private:
    string name;
    int age;
    int number_of_match;
    float average_runs;

    public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setNumber_ofMatch(int number_of_match)
    {
        this->number_of_match=number_of_match;
    }
    void setAverage_runs(float average_runs)
    {
        this->average_runs= average_runs;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getSetNumber_ofMatch()
    {
        return number_of_match;
    }
    float getAverage_runs()
    {
        return average_runs;
    }
};
int main ()
{
    cricketer virat;
    virat.setName("Virat");
    virat.setAge(34);
    virat.setAverage_runs(67.5);
    virat.setNumber_ofMatch(123);
    

    cricketer dhoni;
    dhoni.setName("Dhoni");
    dhoni.setAge(41);
    dhoni.setAverage_runs(40.4);
    dhoni.setNumber_ofMatch(234);

    cricketer cricketers []= {virat,dhoni};

    for (cricketer element : cricketers)
    {
        cout << element.getName()<<" "<<element.getAge()<<" "<<
        element.getSetNumber_ofMatch()<<" "<<element.getAverage_runs()<<" "<<endl;    
    }




}