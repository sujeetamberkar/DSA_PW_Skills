#include <iostream>
using namespace std;

// We can use data members as private and member function as public 
class Player {
    private:
    int score;
    int health; 

    public:
    // Why is it safe, you can use function logging to keep a track
    void setHealth ( int h)
    {
        health = h;

    }
    void setScore ( int s)
    {
        score = s;
    }
    int getHealth(){
        return health;
    }

    int getScore(){
        return score;
    }

};
int main ()
{
    Player sujeet;
    sujeet.setHealth(100);
    sujeet.setScore(999);

    cout << sujeet.getScore();


    return 0;
}