#include "Game.h"

int main() {
    srand(time(NULL));

    Game game;
    game.initGame();

    while (game.getPlaying()) {     //while our character is playing, the game will not stop
        game.mainMenu();            //start with menu
    }

    return 0;
}