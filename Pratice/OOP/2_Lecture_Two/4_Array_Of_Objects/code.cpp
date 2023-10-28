#include<iostream>
using namespace std;
class Gun {
    private:
    int ammo;
    int damage;
    int scope;

    public:
    int getAmmo()
    {
        return ammo;
    }
    int getDamage()
    {
        return damage;
    }
    int getScope ()
    {
        return scope;
    }
    void setAmmo(int ammo)
    {
        this->ammo=ammo;
    }
    void setDmage(int damage)
    {
        this->damage=damage;
    }
    void setScope(int scope)
    {
        this->scope= scope;
    }
};
class Player {
        class Helmet {
        private:
        int hp;
        int level;
        public:
        void setHP (int hp)
        {
            this->hp = hp;
        }
        void setLevel (int level)
        {
            this->level = level;
        } 

        int getHP()
        {
            return hp;
        }
        int getLevel()
        {
            return level;
        }

    };

private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

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
    void setGun(Gun gun)
    {
        this->gun=gun;
    }

    void setHelmet(int level)
    {
        Helmet *helmet = new Helmet;
        helmet ->setLevel(level);
        int health;
        if (level == 1)
        {
            health = 25;
        }
        else if (level == 2)
        {
            health = 50;
        }
        else if (level == 3){
            health = 100;
        }
        else {
            cout << "Error";
        }
        helmet->setHP(health);
        this ->helmet = *helmet;
        
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
    Gun getGun()
    {
        return gun;
    }
    Helmet getHelmet()
    {
        return helmet;
    }

};
int main ()
{
    Player sujeet;
    Player Abhishek;
    sujeet.setAge(200);
    Player listO [2] = {sujeet,Abhishek}; 
    cout <<listO[0].getAge();
}