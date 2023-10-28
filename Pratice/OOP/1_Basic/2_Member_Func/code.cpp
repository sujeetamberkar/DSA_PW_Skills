#include <iostream>
using namespace std;

// We can use data members as private and member function as public 
class Player {
    public: // So that I can acess it from outside

    // data member
    int score;
    int health; // SO that no one from outside can see this 


    // member function
    void showHealth(){
        cout <<"Health is "<<health<<endl;
    }

        void showScore(){
        cout <<"score is "<<score<<endl;
    }

};
int main ()
{
    Player sujeet; // A object is created 
    sujeet.score = 90;
    sujeet.health = 100;
    cout <<"Sujeet"<<endl;
    cout << sujeet.score<<endl;
    cout << sujeet.health<<endl;


    cout <<endl<<"Harsh"<<endl;
    Player Harsh;
    Harsh.score = 40;
    Harsh.health = 33;
    cout << Harsh.score<<endl;
    cout << Harsh.health<<endl;


    sujeet.showHealth();


    return 0;
}