#ifndef Game_RPG_G
#define Game_RPG_G


#include "Character.h"
#include "Fight.h"
#include <ctime>

using namespace std;

class Game {
public:
    Game();

    void initGame();//initilize the character
    void mainMenu();//start menu
    void travelMenu();//start play menu

    inline bool getPlaying() const { return  this->playing; }

private:
    int choice;
    int dead;
    int indexPhrase;
    bool playing;
    Character character;
};


#endif 