//Hero.h

#ifndef HERO_H
#define HERO_H
#include <string>
#include <iostream>

class Hero
{
    friend void goddess_bless(Hero& h);
private:
    std::string name;
    int hp;
    int level;
    static int living_heroes;

public:
    Hero(std::string name ,int hp=100, int level=1);
    void take_damage(int damage);
    void show_status() const;
    static void guild_broadcast();
    Hero& level_up();
    ~Hero();
};


#endif

