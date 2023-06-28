#include <iostream>
#include <stdlib.h>
#include <string>
#include "PlayerData.h"
#include "chapter_manager.h"
#include "save_manager.h"
#include "Level1.h"

using namespace std;

class Menu
{
public:
    void showMenu();
    void showCredits();

private:
    string menuControl;
    Level1 objLevel1;
    Level1 *level1 = &objLevel1;
    SaveManager savemanager;
};

void Menu::showMenu()
{
    cout<< "*******************************************************************************************\n"
	    	<< "* ___     _______ _______ _________      _______ _______ ___  ___ _______ _______ _______ *\n"
		    << "* | |     |  _  | |  ___| |__   __|      |  ___| |  ___| | |  | | |  _  | |  ___| |  ___| *\n"
	    	<< "* | |     | | | | | |___     | |         | |___  | |     | |__| | | | | | | |___  | |___  *\n"
		    << "* | |     | | | | |___  |    | |         |  ___| | |     |  __  | | | | | |  ___| |___  | *\n"
	    	<< "* | |___  | |_| | ____| |    | |         | |___  | |____ | |  | | | |_| | | |___  ____| | *\n"
    		<< "* |_____| |_____| |_____|    |_|         |_____| |_____| |_|  |_| |_____| |_____| |_____| *\n"
	    	<< "*                                                                                         *\n"
   	  	<< "*******************************************************************************************\n";

    cout << endl;
    cout << "Type the following number to:\n";
    cout << "1. Start\n";
    cout << "2. Credits\n";
    cout << "3. Load\n";
    cout << "4. Exit\n";

    cout << "> ";
    getline(cin, menuControl);
    while (menuControl != "1" && menuControl != "2" && menuControl != "3" && menuControl != "4")
    {
        cout << "Invalid command\n";
        getline(cin, menuControl);
    }

    if (menuControl == "1")
    {
        // Start game
        Player player;
        ChapterManager::getInstance().startNextChapter(1, player);
    }
    else if (menuControl == "2")
    {
        showCredits();
    }
    else if (menuControl == "3")
    {
        // Load game

        SaveManager saveManager; // Create an instance of SaveManager
        if (saveManager.displaySavedGames())
        {
            int saveIndex;

            cout << "Enter the save index to load: ";
            cin >> saveIndex;
            cin.ignore(); // Ignore the remaining newline character after reading the integer
            Player player;
            saveManager.loadGame(saveIndex, player);
        }
        else
        { cin.ignore();
          showMenu();
        }
    }
    else if (menuControl == "4")
    {
        // Exit game
        exit(0);
    }
}

void Menu::showCredits()
{
    cout << "Lost Echoes\n";
    cout << "Written by Faiq Fadhlullah, Aziyatul Najuwa , Arif Arman\n";
    cout<<"For CPT 113 Hackathon 2.\n";
    cout << "Programmed in C++\n";
    cout << "2023\n";
    cin.ignore();

    showMenu();
}

int main()
{
    Menu menu;
    menu.showMenu();
    return 0;
}


