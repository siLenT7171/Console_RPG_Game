#include "Item.h"

Item::Item() {      //Item constructor
	this->name = "NONE";
    this->atk = 0;
    itemArrName[0] = "Wooden Sword";
    itemArrAtk[0] = 4;
    for (int i = 1; i < 3; i++) {
        itemArrName[i] = this->name;
        itemArrAtk[i] = this->atk;
    }
}


void Item::showItems() const {      //To see the inventory
    for (int i = 0; i < 1; i++) {
        cout << itemArrName[i] << " | Attack: " << itemArrAtk[i] << endl;
    }
}

int Item::getTotalDamage(int atk) { //To see total number of taken damage
    for (int i = 0; i < 1; i++) {
        atk += itemArrAtk[i];
    }
    return atk;
}