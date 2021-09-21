#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;
    dead = 0;
    indexPhrase = 0;
}

void Game::initGame() {
    string name;
    cout << "Enter name for the character: ";   //Enter a name
    getline(cin, name);
    character.initialize(name);    
}

void Game::mainMenu() {
        cout << "~~~~ Main Menu ~~~~" << endl;  //Main menu
        cout << "1. Start" << endl;    // ->Play menu
        cout << "0. Quit" << endl;    //stop the game

        cout << "\n" << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1: {
            Game::travelMenu();   //Refers to the play menu
            break;
        }

        case 0: {
            playing = false; //stop the game
            break;
        }
        default:
            break;
        }
};

void Game::travelMenu() {
    while (dead == 0) {         //if our character alive game will not finish
        cout << "=== Travel Menu ===" << endl;  
        cout << "1. Travel" << endl;   //Fighting with enemies
        cout << "2. Character Profile" << endl; //Stats of character
        cout << "3. Back to menu" << endl; //Go back to main menu
        cout << endl;

        cout << "\n" << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1: {
            Fight fight;
            dead = fight.fightEventStart(character);    //Start fight

            character.gainExp(16 * character.getLevel());   //gain the experience when fight is finished
            break;
        }
        case 2: {
            character.getAsString();    //initialize the stats of the character
            break;
        }

        case 3: {
            Game::mainMenu();
            dead = 1;
            break;
        }

        default:
            break;
        }
    }
}