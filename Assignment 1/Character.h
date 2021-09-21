#ifndef Game_RPG_C
#define Game_RPG_C

#include <string>
#include <iostream>
#include <iomanip>
#include "Item.h"

using namespace std;

class Character {
public:
    Character();

    void initialize(const string name); //create a character
    void getAsString(); //initialize the stats
    void levelUp();//level up
    void gainExp(int exp);//gain exp
    void sayPhrases(int index);//function for “Random thought”

    int getLevel() const;
    int getHp() const;
    int getAtk() const;
    void setHp(int hp);

private:
    string name;
    int level;
    int exp;
    int expNext;
    int hp;
    int hpMax;
    int atk;
    Item item;
};


#endif 