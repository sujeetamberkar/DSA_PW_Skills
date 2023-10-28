#include <iostream>
class Player {
    public: // So that I can acess it from outside
    int score;

    private:
    int health; // SO that no one from outside can see this 
};
using namespace std;
int main ()
{
    Player sujeet; // A object is created 
    sujeet.score = 90;
    // sujeet.health = 100;
    cout <<"Sujeet"<<endl;
    cout << sujeet.score<<endl;
    // cout << sujeet.health<<endl;


    cout <<endl<<"Harsh"<<endl;
    Player Harsh;
    Harsh.score = 40;
    // Harsh.health = 33;
    cout << Harsh.score<<endl;
    // cout << Harsh.health<<endl;


    return 0;
}