#ifndef Game_RPG_I
#define Game_RPG_I

#include <iostream>
using namespace std;

class Item {
public:
    Item();

    void showItems() const;
    int getTotalDamage(int atk);

private:
    string itemArrName[3];  //3 items name
    int itemArrAtk[3];      //3 items attack
    int atk;
    string name;
};


#endif 