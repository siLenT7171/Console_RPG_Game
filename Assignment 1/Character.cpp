#include "Character.h"
#include <cmath>


Character::Character() {    //Character constructor
    this->name = "NONE";
    this->level = 1;
    this->exp = 0;
    this->expNext = 0;
    this->hp = 0;
    this->hpMax = 0;
    this->atk = 0;
}


void Character::initialize(const string name) {     //Stats of the character
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->expNext =
        static_cast<int>(50 / 3) * (pow(level, 3) -
            6 * pow(level, 2) + (17 * level) - 12);//algorithm for the levels(taken from open source)
    this->hp = 10;
    this->hpMax = 10;
    this->atk = item.getTotalDamage(0); 
}

void Character::gainExp(int exp) {
    this->exp = this->exp + exp;//gain exp
    levelUp();
};


int Character::getLevel() const { return level; }

int Character::getHp() const { return hp; }

int Character::getAtk() const { return atk; }

void Character::getAsString() { //stats of character

	cout << "~~~~ Character Profile ~~~~" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Level: " << this->level << endl;
    cout << "Exp: " << this->exp << "/" << this->expNext << endl;
    cout << "HP: " << getHp() << "/" << this->hpMax << endl;
    cout << "Attack: " << this->atk << endl;
    cout << "Inventory: ";
    item.showItems();
    cout << setw(10) << setfill('=') << endl;
    cout << endl;
}

void Character::levelUp() {     //When there is enough exp, the level is increases.
    while (exp >= expNext) {    
        exp -= expNext;
        level++;
        this->exp = 0;
        this->expNext =
            static_cast<int>(50 / 3) * (pow(level, 3) -
                6 * pow(level, 2) +
                (17 * level) - 12);
        this->atk++;
        this->hpMax += 10;      //hp power up
        this->hp = this->hpMax; //hpMax also power up
    }
}


void Character::setHp(int hp) { Character::hp = hp; }


void Character::sayPhrases(int index) {     //"Random thought" of character
    cout << this->name << ": ";
    switch (index) {
    case 0:
        cout << "I need more skulls for a count." << endl; break;
    case 1:
        cout << "What a pathetic sight..." << endl; break;
    case 2:
        cout << "Damn it, got dirty!" << endl; break;
    case 3:
        cout << "You never got a chance." << endl; break;
    case 4:
        cout << "I was born to be a warrior." << endl; break;
    case 5:
        cout << "Apparently this is my destiny..." << endl; break;
    default:
        cout << "I am tired..." << endl; break;
    }
    cout << endl;
}