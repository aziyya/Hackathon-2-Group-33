// level1.cpp
#include "Level1.h"
#include "chapter_manager.h"
#include "PlayerData.h"
#include "save_manager.h"
#include "Fighting.h"
#include "FunGame.h"
#include <iostream>
#include <cstdlib>

Level1::Level1() {}


void Level1::displayDialogue(const std::string& character, const std::string& dialogue) {
    std::cout << character << ": " << dialogue << std::endl;
}

int Level1::getPlayerChoice(const std::string& option1, const std::string& option2) {
    int choice;
    do {
        std::cout << "Choose an option:\n";
        std::cout << "1. " << option1 << std::endl;
        std::cout << "2. " << option2 << std::endl;
        std::cin >> choice;
        std::cin.ignore(); // Ignore the newline character
    } while (choice != 1 && choice != 2);

    return choice;
}

void Level1::start(Player& player) {

    Fighter fight1;
    fight1.setPlayerData(player);

    cout<< "===========================================================================================\n"
   	  	<< "                                     CHAPTER ONE                                           \n"
   		  << "===========================================================================================\n";

    std::cout << "You slowly regain consciousness, your head throbbing with pain.\n";
    std::cin.ignore();
    std::cout << "As your eyes adjust to the darkness, you realize you're in a cold, damp cave.\n";
    std::cin.ignore();
    std::cout << "The air is heavy, and the faint sound of dripping water echoes in the distance.\n";
    std::cin.ignore();
    std::cout << "You feel a sense of unease as you realize you are alone in this unfamiliar place.\n";
    std::cin.ignore();
    std::cout << "Your memory is hazy, and you have no recollection of how you ended up here.\n";
    std::cin.ignore();
    std::cout << "What is this place? How did you get here? And more importantly,\n";
    std::cin.ignore();
    std::cout << "Who are you?\n";
    std::cin.ignore();
    std::cout << "You are only wearing a simple shirt and trousers made of cotton, but around your neck lies an exquisitely adorned necklace.\n";
    std::cin.ignore();
    std::cout<<"The necklace is filled with countless engravings and markings, but most importantly, a single name.\n";
    std::cin.ignore();

    std::string playerName;
    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, playerName);
    } while (playerName.empty());
    player.setName(playerName);

    displayDialogue(playerName, "Where am I?");
    std::cin.ignore();
    std::cout << "You look around and found a rusted sword lying beside you." << std::endl;
    Item* swordItem = new Item("Sword",5,2);

    int takeOrNot;
    std::cout << "Type 1 to take: ";
    std::cin >> takeOrNot;

    if (takeOrNot == 1) {
      if (player.addItemToInventory(swordItem)) { // Item added successfully
        std::cout << "Item added to inventory.\n" << std::endl; }
      else {
      std::cout << "Failed to add item to inventory.\n" << std::endl; }

      displayDialogue(playerName, "Wherever I am, I am sure this will come in handy.");
      std::cin.ignore();}

    else{
      std::cout<<"You chose not to take."<<std::endl;
      std::cin.ignore(); }

    std::cout << "\nYou look around and found a shield lying beside you." << std::endl;

    Item* shieldItem = new Item("Shield",5,2);

    int takeOrNot1;
    std::cout << "Type 1 to take: ";
    std::cin >> takeOrNot1;

    if (takeOrNot1 == 1) {
      if (player.addItemToInventory(shieldItem)) { // Item added successfully
      std::cout << "Item added to inventory.\n" << std::endl; }
      else {
      std::cout << "Failed to add item to inventory.\n" << std::endl; }

      displayDialogue(playerName,"This shield looks like it can protect me. Better take it.\n");
      std::cin.ignore();}
    else {
      std::cout<<"You chose not to take."<<std::endl;
      std::cin.ignore(); }

    displayDialogue(playerName,"I guess I won't know anything if I don't explore this place.");
    std::cin.ignore();
    std::cout << "You come across three paths ahead, branching in different directions." << std::endl;
    std::cin.ignore();

    bool exploredLeftPath = false;
    bool exploredRightPath = false;
    bool exploredMiddlePath = false;
    bool continueExploring = true;
    bool foughtTheMonster=false;

    while (continueExploring) {
      std::cout << "Which path will you choose?"<<std::endl<<"Type 1 for the left path, 2 for the right path, 3 for the middle path, or 0 to stop exploring: ";
      int chosenPath;
      std::cin >> chosenPath;

    switch (chosenPath) {
      case 1: {
        // Left path - Encounter with a monster
        if (exploredLeftPath) {
            std::cout << "You have already explored the left path. Choose another path or stop exploring." << std::endl;
            std::cin.ignore();}
        else {
            if(!foughtTheMonster){
              std::cout << "\nAs you venture deeper into the left path, you sense a looming presence." << std::endl;
              std::cin.ignore();
              std::cout << "Suddenly, a fierce creature with sharp fangs and glowing eyes emerges from the darkness." << std::endl;
              std::cin.ignore();
              // Necklace glows mysteriously
              std::cout << "To your astonishment, your necklace begins to glow mysteriously, illuminating the cave." << std::endl;
              std::cin.ignore();
              std::cout << "It seems like it's trying to protect you of imminent danger." << std::endl;
              std::cin.ignore();
              displayDialogue(player.getName(), "Wait, why do I feel stronger and faster?! It's like, like I can punch a wall or crush a rock with my bare hands! ");
              std::cin.ignore();
              displayDialogue(player.getName(), "No time to wait, let's beat this thing first! ");
              std::cin.ignore();
              // Battle with the monster
              std::cout << "You ready your stance and prepare to fight the creature." << std::endl;
              std::cin.ignore();

              fight1.fighting(player.getName(),100,12,"Goblin",100,5);
              std::cin.ignore();
              foughtTheMonster=true;

              displayDialogue(player.getName(), "Wow, I really did get stronger after this necklace glowed up.");
              std::cin.ignore();
              displayDialogue(player.getName(),"It seems so familiar. Like it has been with me for a long time.");
              std::cin.ignore();
              displayDialogue(player.getName(), "I guess I'll remember it after a while. But the effects are so awesomeee, I felt like I was a hero from the legends.");
              std::cin.ignore();
              displayDialogue(player.getName(), "Well, let's continue exploring the cave.");
              std::cin.ignore();
            };

        do {
          char takeOrNot33;
          std::cout << "You found a lit torch on the wall. Take it? (y/n)" << std::endl;
          Item* torchItem = new Item("Torch",1,1);
          std::cin >> takeOrNot33;

          if (takeOrNot33 == 'y') {
            if (player.addItemToInventory(torchItem)) { // Item added successfully
                std::cout << "You add the torch to your inventory. It may come in handy." << std::endl;
                std::cin.ignore();
                break; }// Exit the loop since the player took the torch
            else {
                std::cout << "Failed to add item to inventory." << std::endl;
                std::cin.ignore();}}
          else if (takeOrNot33 == 'n') {
            std::cout << "You did not take the torch." << std::endl;
            break; }// Exit the loop since the player didn't take the torch
          else {
            std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
            std::cin.ignore(); }
            } while (true);

        std::cout<<"\nYou continue exploring and eventually comes across a massive door.\nIt is ornately decorated and appears to lead to a significant chamber."<<std::endl;
        std::cin.ignore();
        displayDialogue(playerName,"Whoa! Look at the size of that door. It's grand and imposing. There must be something of great importance behind it.");
        std::cin.ignore();
        displayDialogue(playerName," But wait... It's locked. There's a keyhole right in the center.\nI need a key to unlock it and gain access to whatever lies beyond.");
        char openOrNot;
        std::cout<<"Try to open? (y/n)"<<std::endl;

          std::cin>>openOrNot;
          if(openOrNot=='y'){
              if (player.searchItem("Key")){
                std::cout<<"You insert the key"<<std::endl;
                std::cin.ignore();
                std::cout<<"You found a new passage to explore the cave!"<<std::endl;
                std::cin.ignore();

                displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
                int choice=getPlayerChoice("Save and continue", "Save and exit");

                if (choice == 1) {
                  // Save the player's progress
                  player.setCurrentChapter(1);
                  savemanager.saveGame(player);
                  ChapterManager::getInstance().startNextChapter(2,player);
                  // Move to the next chapter
                }
                else {
                  player.setCurrentChapter(1);
                  savemanager.saveGame(player);
                  player.viewItemsFromInventory();
                  exit(0);
                }}
                else{
                    std::cout<<"You do not have the key."<<std::endl;
                    std::cin.ignore();
                }}
              else{
                std::cout<<"You return to the starting point"<<std::endl;
                break; }
                exploredLeftPath = true;
            }
            break;
        }
        case 2: {
            // Right path - Discovery of a healing bandage
            if (exploredRightPath) {
                std::cout << "You have already explored the right path. Choose another path or stop exploring." << std::endl;
                std::cin.ignore();
            } else {
                std::cout << "\nYou take the right path, leading you through narrow corridors and winding tunnels." << std::endl;
                std::cin.ignore();
                std::cout << "After a while, you stumble upon a small alcove, and inside you find an old bandage." << std::endl;
                std::cin.ignore();
                displayDialogue(playerName,"This bandage seems handy. Thankfully Mister Drian from the house next to the orphanage taught us how to use one. \nNow I can heal myself better in battle!");
                std::cin.ignore();
                // Add the healing bandage to inventory
                Item* bandageItem = new Item("Bandages",3,1);

                    int takeOrNot2;
                    std::cout << "Type 1 to take: ";
                    std::cin >> takeOrNot;

                if (player.addItemToInventory(bandageItem)) { // Item added successfully
                    std::cout << "You add the bandage to your inventory. It may come in handy." << std::endl;
                    std::cin.ignore();
                } else {
                    std::cout << "Failed to add item to inventory." << std::endl;
                    std::cin.ignore();
                }
                // Continue the story based on the discovery
                //exploredRightPath = true;
            }
            break;
        }

        case 3:{
           if (exploredMiddlePath) {
                std::cout << "You have already explored the middle path. Choose another path or stop exploring." << std::endl;
                std::cin.ignore();
            } else {
                char yesNo;
                std::cout<<"There is an abandoned room along the caveway. Enter the room (y/n)?"<<std::endl;
                std::cin>>yesNo;
                if(yesNo=='y'){
                  std::cout << "You cautiously step into the abandoned room, a musty scent fills the air. \nThe flickering light from your torch reveals dusty shelves, crumbling parchment, and a worn desk with a tattered journal resting upon it."<< endl;
                  std::cin.ignore();
                  displayDialogue(playerName,"This book seems like it has seen better days. Let's take a look what's inside.");
                  std::cin.ignore();
                  std::cout<<" Journal Entry #76"<<std::endl<<" Date: 12th Moon of the Harvest Season"<<std::endl;
                  std::cout << "  Our expedition into these ancient caves has led us to an incredible discovery. \n  The legends were true! We have found traces of an extraordinary artifact known as the Amulet of Memories.\n  This fabled amulet is said to possess the power to unlock one's forgotten past, allowing them to relive memories in vivid detail."<<std::endl;
                  std::cin.ignore();
                  std::cout << "  The cave civilization that once guarded this amulet was highly advanced and mysterious. \n  Even their records speak of its extraordinary capabilities. It is said that the amulet holds the key to unlocking hidden knowledge and potential within the human psyche."<<std::endl;
                  std::cin.ignore();
                  std::cout<<" Journal Entry #77"<<std::endl<<" Date: 14th Moon of the Harvest Season"<<std::endl;
                  std::cout<< "  We have ventured deep into the heart of the cave, following the clues left behind by the ancient civilization. \n  The amulet is said to be hidden within a chamber of trials, where only the worthy can reach it."<<std::endl;
                  std::cin.ignore();
                  std::cout<< "  However, our journey has not been without its perils. Some members of our team have fallen ill, their strength waning as we delve further into the depths. \n  There is an eerie presence lurking within these caves, whispering sweet promises of power and wealth. \n  But something in my guts tells me that this is no benevolent presence. We must stay strong."<<std::endl;
                  std::cin.ignore();
                  std::cout<<" Journal Entry #78"<<std::endl<<" Date: 19th Moon of the Harvest Season"<<std::endl;
                  std::cout<< "  It is with heavy hearts that I write this final journal entry. Our team has been struck by an inexplicable tragedy. \n  One by one, we succumbed to an unknown force that drained our life force, leaving us weakened and vulnerable. \n  We no longer have the strength to continue our quest for the amulet."<<std::endl;
                  std::cin.ignore();
                  std::cout<< "  Should any future adventurer find their way into this forsaken place, heed our warning: \n   The path to the amulet is treacherous, and the powers it bestows come at a great cost. Proceed with caution, for the amulet's true nature remains shrouded in mystery. "<<std::endl;

                  std::cout<< "\nThe next pages of the journal remains blank. Whether the author managed to escape, or perished within this cave will forever be a mystery."<<std::endl;
                  std::cin.ignore();
                  std::cout<< "As you finish reading the final entry, you can't help but feel a mixture of curiosity and apprehension. \nThe amulet's power to delve into forgotten memories beckons, but the fate of the ill-fated research team serves as a grim reminder of the dangers that lie ahead. \nWith newfound resolve, you continue your journey deeper into the cave, determined to find the Amulet of Memories and uncover the truth that has been lost to time."<< endl;

                  displayDialogue(player.getName(),"So there exist something so magical in this world. This is maybe what I need to regain my lost memories. \nI must find this amulet. Whatever it takes.");
                }
                else if(yesNo=='n'){
                    std::cout << "You continue forward, cautiously navigating through the dark and narrow passageways." << std::endl;
                    std::cin.ignore();
                    std::cout << "Suddenly, you stumble upon a ghastly sight. There, lying on the ground, is the decaying corpse of a human." << std::endl;
                    std::cin.ignore();
                    std::cout << "The tattered clothes on the body bear a striking resemblance to that of a human." << std::endl;
                    std::cin.ignore();
                    displayDialogue(playerName, "It appears that this unfortunate soul was part of a group who once ventured into these depths");
                    std::cin.ignore();
                    displayDialogue(playerName,"Their presence here suggests that there must be something in this cave" );
                    std::cin.ignore();
                    std::cout << "As you got past the corpse, you can't help but feel a sense of unease and danger." << std::endl;
                    std::cin.ignore();
                    std::cout << "Suddenly, you felt someone is chasing towards you with great speed. You turn around, the corpse has come alive!" << std::endl;
                    std::cin.ignore();
                    displayDialogue(player.getName(),"Shit, since when can corpses walk and run!? Let me put you to rest one final time!");

                    fight1.fighting(player.getName(),100,12,"Walking Corpse",100,10);

                    displayDialogue(player.getName(),"Rest in peace, my good man.");
                    std::cin.ignore();
                    displayDialogue(player.getName(),"Wait, what is this?");
                    std::cout<<"\nThere is a key lying besides the corpse."<<std::endl;
                    std::cin.ignore();
                    Item* keyItem = new Item("Key",1,1);
                    char takeNot;
                    std::cout<<"Take it? (y/n)"<<std::endl;
                    std::cin>> takeNot;

                    int takeOrNot;
                    std::cout << "Type 1 to take: ";
                    std::cin >> takeOrNot;

                    if (takeOrNot == 1) {
                      if (player.addItemToInventory(keyItem)) { // Item added successfully
                          std::cout << "Item added to inventory." << std::endl;
                          exploredLeftPath=false; }
                      else {
                        std::cout << "Failed to add item to inventory." << std::endl; }

                        displayDialogue(playerName, "I am sure this will come in handy.");
                        std::cin.ignore();
                    }
                    else {
                    std::cout<<"You chose not to take."<< std::endl; }
                }
                //exploredLeftPath = true;
            }
            break;
        }
        case 0: {
            // Stop exploring
            continueExploring = false;
            break;
        }
        default: {
            std::cout << "Invalid choice. Please choose a valid option." << std::endl;
            std::cin.ignore();
            break;
        }
    }
}

    displayDialogue("Guide", "Congratulations! You've completed Level 1.");
    std::cin.ignore();
    displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
    std::cin.ignore();
    int choice=getPlayerChoice("Save and continue", "Save and exit");

    if (choice == 1) {
    // Save the player's progress

    player.setCurrentChapter(1);
    savemanager.saveGame(player);
    ChapterManager::getInstance().startNextChapter(2,player);
    // Move to the next chapter
    }
    else {
    player.setCurrentChapter(1);
    savemanager.saveGame(player);
    player.viewItemsFromInventory();
    exit(0);
    }
}
