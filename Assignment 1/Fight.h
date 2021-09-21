#ifndef Game_RPG_F
#define Game_RPG_F

#include "Character.h"
#include "Game.h"
#include "Enemy.h"
#include <iostream>

using namespace std;

class Fight {
public:
    Fight();
	int fightEventStart(Character character);//function for fight logs

private:
    Character character;
    Enemy* enemy;
};

#endif 