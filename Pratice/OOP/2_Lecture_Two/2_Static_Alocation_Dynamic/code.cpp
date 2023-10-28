#include<iostream>
using namespace std;

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    void setHealth(int health)
    {
        Player::health = health;
    }
    void setAge(int age)
    {
        this->age= age;
    }
    void setScore (int score)
    {
        this->score= score;
    }

    void setAlive(bool alive)
    {
        this->alive=alive;
    }

    int getHealth()
    {
        return health;
    }

    int getAge()
    {
        return age;
    }
    int getScore()
    {
        return score;
    }
    bool getAlive()
    {
        return alive;
    }

};
int main ()
{
    Player sujeet;  // Compile Time Allocation
    Player abhishek;// Compile Time Allocation 

    Player *urvi = new Player; // Dynamic Allocation
    Player urviObject = *urvi;

    urviObject.setAge(10);
    urviObject.setAlive(false);
    urviObject.setHealth(69);
    urvi->setScore(34);

    cout <<urvi->getScore()<<endl;
    cout <<urviObject.getScore();


    

}