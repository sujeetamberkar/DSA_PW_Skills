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
// Pass object as a parameter
int addScore (Player a, Player b)
{
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a, Player b)
{
    if (a.getScore() > b.getScore())
    {
        return a;
    }
    else {
        return b;
    }
}
int main ()
{
    Player sujeet;// Object is created statically 
    Player abhishek;

    sujeet.setAge(20);
    sujeet.setAlive(true);
    sujeet.setHealth(100);
    sujeet.setScore(300);



    abhishek.setAge(10);
    abhishek.setAlive(true);
    abhishek.setHealth(800);
    abhishek.setScore(500);

    // cout<<addScore(sujeet,abhishek);


    Player answer = getMaxScorePlayer(sujeet,abhishek);
    cout <<answer.getScore();
}