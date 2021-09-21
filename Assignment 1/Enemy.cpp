#include "Enemy.h"

Enemy::Enemy(int HP, int hpMax, int atk, int level) {   //Enemy constructor
    this->HP = HP;
    this->hpMax = hpMax;
    this->atk = atk;
    this->level = level;
}



int Enemy::getHpMax() const {
    return hpMax;
}

int Enemy::getAtk() const {
    return atk;
}