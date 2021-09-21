#ifndef Game_RPG_E
#define Game_RPG_E

#include "Item.h"

class Enemy {
public:
    Enemy(int HP, int maxHP, int atk, int level);
    
    int getHpMax() const;
    int getAtk() const;

private:
    int atk;
    int HP;
    int hpMax;
    int level;
};

#endif 