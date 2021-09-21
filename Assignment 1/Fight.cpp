#include "Fight.h"

Fight::Fight() {

}
int choice;

int Fight::fightEventStart(Character character) {   //Character vs Enemy function

	Enemy* enemy1 = new Enemy(4 * character.getLevel(), 4 * character.getLevel(), 2 * character.getLevel(), 1 * character.getLevel());//create enemy
    
    cout << "You have encountered Enemy with: HP: " << enemy1->getHpMax() << ", atk: " << enemy1->getAtk() << endl;
    cout << "What will you choose?" << endl;
    cout << "1: Fight" << endl;
    cout << "2: Retreat" << endl;

    cout << "\n" << "Choice: ";
    cin >> choice;
    cout << "\n";

    switch (choice) {
    case 2: return 0;

    case 1:
        if (character.getAtk() + character.getHp() > enemy1->getAtk() + enemy1->getHpMax()) {
            cout << "You defeat the Enemy!" << endl;

            int indexPhrase = rand() % 11;
            character.sayPhrases(indexPhrase);  //“Random thought”
        }
        character.setHp(character.getHp() - enemy1->getAtk());
        if (character.getHp() > 0) {
            cout << "Your HP after fight: " << character.getHp() << endl;
            cout << "Your HP  are restored " << "\n\n";   
        }
        if (character.getHp() <= 0) {   //If the character is dead
            int indexPhrase = 5; //"Random thought"
            character.sayPhrases(indexPhrase);
            cout << "You lost the fight" << endl << "Game Over" << "\n\n";
            return 1;
        }
        break;
    default: break;
    }
    return 0;
};