#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fighting.h"
#include "PlayerData.h"

using namespace std;

void Fighter::fighting(const string& playername, int playerHealth, int playerAttack, const string& enemyName, int enemyHealth, int enemyAttack) {
    srand(time(nullptr));

    //Counter loop
    bool a = true;
    bool p = true;
    do {

    Fighter player(playername, playerHealth, playerAttack);
    Fighter enemy(enemyName, enemyHealth, enemyAttack);

    do {
    string selectItems;
    cout << "Which items you want to use for this fight? Type the item you want to use. If not, write n"<< endl << endl;
    play->viewItemsFromInventory();
    cin >> selectItems;

    if (selectItems == "n")
    {a=false;}

    else
    {
      //Reduce the item use of specific item in inventory
      play->reducedItems(selectItems);

      //Set the damage for selected item
      if (selectItems == "Sword") {
        cout << play->getName() << " has collected the Sword. Damage will increase by 5 " << endl << endl;
        player.setSwordDamage(5);
      }

      if (selectItems == "Shield") {
        cout << play->getName() << " has collected the Shield. Damage from opponent will be reduced by 3 " << endl << endl;
        player.setShieldDamage(3);
      }

      if (selectItems == "Bandages") {
        cout << play->getName() << " has collected the Bandages. Healing will be increase by 5 " << endl << endl;
        player.setBandageDamage(5);
      }
      if (selectItems == "Red Crystal") {
        cout << play->getName() << " has collected the Red Crystal. Damage will be increase by 15 " << endl << endl;
        player.setCrystalDamage(15);
      }
      if (selectItems == "Shield of the Destroyer") {
        cout << play->getName() << " has collected the Shield of the Destroyer. Damage from opponent will be reduced by 7 " << endl << endl;
        player.setShieldDamage(7);
      }
    }
    }while(a);

    cout << "Player: " << player.getName() << ", Health: " << player.getHealth() << endl;
    cout << "Enemy: " << enemy.getName() << ", Health: " << enemy.getHealth() << endl;

        while (player.isAlive() && enemy.isAlive()) {
            cout << endl;
            cout << "Options:" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Defend" << endl;
            cout << "3. Heal" << endl;
            int choice;
            cin >> choice;

            switch (choice) {
                case 1: {
                    player.attack(enemy);
                    cout << "Current Player health: " << player.getHealth() << endl;
                    cout << "Current Enemy health: " << enemy.getHealth() << endl << endl;
                } break;

                case 2: {
                    player.defend();
                    cout << "Current Player health: " << player.getHealth() << endl;
                    cout << "Current Enemy health: " << enemy.getHealth() << endl << endl;
                } break;

                case 3: {
                    player.heal();
                    cout << "Current Player health: " << player.getHealth() << endl;
                    cout << "Current Enemy health: " << enemy.getHealth() << endl << endl;
                } break;

                default:
                    cout << "Invalid choice. Please select a valid option." << endl;
                    continue;  // Restart the loop to allow the player to choose again
            }

            if (!enemy.isAlive()) {
                cout << "\nYou win!" << endl;
                p=false;
                break;
            }

            enemy.attack(player);
            if (!player.isAlive()) {
                cout << "\nEnemy wins!" << endl;

                int choose;
                cout << "Please choose..." << endl;
                cout << "1. Restart Game" << endl;
                cout << "2. Exit Game" << endl;

                do{
                  cin >> choose;
                  if(choose!=1 && choose!=2) {
                    cout << "Invalid Choice. Try Again" << endl; }

                }while((choose!=1 && choose!=2));

                if(choose == 1) {
                  break; }
                else if(choose == 2) {
                  exit(0); }
            }
        }
    }while(p);
}
