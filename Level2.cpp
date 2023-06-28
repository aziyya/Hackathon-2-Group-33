// level2.cpp
#include "Level2.h"
#include "chapter_manager.h"
#include <iostream>
using namespace std;

Level2::Level2() {}

void Level2::displayDialogue(const string& character, const string& dialogue) {
    cout << character << ": " << dialogue << endl;
}

int Level2::getPlayerChoice(const string& option1, const string& option2) {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cin >> choice;
    } while (choice != 1 && choice != 2);

    return choice;
}



void Level2::start(Player& player) {

    Fighter fight1;
    fight1.setPlayerData(player);

    //player.viewItemsFromInventory();
    //cin.ignore();

    cout<< "===========================================================================================\n"
        << "                                     CHAPTER TWO                                           \n"
        << "===========================================================================================\n";

    displayDialogue("Guide", "Welcome to Level 2!");

    cout<< "As you delve deeper into the cave, you come across an enormous clearing, so gigantic that it almost seems like a world of its own, bathed in a dim glow.\n";
    cin.ignore();
   	cout<< "On the clearing, you discover an abandoned city - a desolate refuge that seems to have once housed a prosperous group of people. \nThis must be the city of the ancient civilisation described by the journal.\n";
    cin.ignore();
   	cout<< "The remnants of their existence linger, evoking a faint familiarity within yourself.\n";
    cin.ignore();

    displayDialogue(player.getName(), "What is this place? It seems like it was inhabited long ago....");
    cin.ignore();
    cout<< "While exploring, you find a worn-out journal. A familiar symbol etched on the cover of the journal. The Amulet of Memories!\n";
    cin.ignore();
    displayDialogue(player.getName(), "These journals indicate that the Amulet indeed exist, and is somewhere in this cave!");
    cout<< "A wave of emotions washes over yourself as the possibility of regaining your memories still exist.\n";
    cin.ignore();
   	cout << "Though the memories remain hazy, you sense a connection to this abandoned region, \nas if it holds a vital piece of your past, and more importantly, traces of the Amulet of Memories.\n";
    cin.ignore();
    displayDialogue(player.getName(), "I have to continue searching for answers. These remnants are breadcrumbs leading me to the truth.");
    cin.ignore();
    cout<< "You look around the region. A few items catch your eyes. A canned food and a chain key.\n";

    Item* CFItem = new Item("Canned Food",1,1);
    Item* CKItem = new Item("Chain Key",1,1);
    char takeNot='y';
    while (true) {
      std::cout << "Take it? (y/n)" << std::endl;
      std::cin >> takeNot;
      if (takeNot == 'y') {
        if (player.addItemToInventory(CKItem) && player.addItemToInventory(CFItem)) {
          // Item added successfully
          std::cout << "Items added to inventory." << std::endl;}
      else {
        std::cout << "Failed to add item to inventory." << std::endl;}
        displayDialogue(player.getName(), "I am sure these will come in handy.");
        std::cin.ignore();
        break;  // Exit the loop after taking the items
       }
      else if (takeNot == 'n') {
        std::cout << "No items taken." << std::endl;
        break;  // Exit the loop without taking the items
       }
      else {
        std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;}
    }

    cout<< "With newfound resolve, you gather your belongings and pass onward, trotting along the abandoned road, determined to find that amulet."<<endl;
    cin.ignore();

   	displayDialogue("Unknown Voice", "GROWLLLLLLLLLLLLLLLLLLLLLLLLLLLl");
    cin.ignore();
    cout<<"Suddenly, a deep growl pierces the silence, sending shivers down your spine.You quickly turn, searching for the source of the ominous sound."<<endl;
    cin.ignore();
    cout<<"From the shadows emerges a massive creature, its eyes glowing with an otherworldly light. \nIt's unlike anything I've ever seen before, a creature of darkness and mystery."<<endl;
    cin.ignore();

   	displayDialogue(player.getName(), "Damn it, I must defeat this monster to find the way out.");
    cin.ignore();
   	displayDialogue("Monster", "ROARRRRRR");
    cin.ignore();
    cout<<"With a roar, the creature lunges towards me, its razor-sharp claws slashing through the air. \nI dodge its attack narrowly, feeling the rush of adrenaline."<<endl;
    cin.ignore();
    cout<<"Prepare to fight!"<<endl;

    fight1.fighting(player.getName(),100,15,"Monster",100,20);

    displayDialogue(player.getName(), "That was a tough battle. I am glad that the necklace is here to help me.");
    cin.ignore();
    displayDialogue(player.getName(),"I should continue searching.");

    cout<< "As you tread upon the winding path of the mysterious cave, a whisper, delicate as a fragile feather, caresses your ears, "
           "\ncausing an enchanting pause in your stride as you strain to capture every ethereal syllable that dances upon the air.\n";
    cin.ignore();
    displayDialogue("Unknown Voice", "Please, help me! I'm trapped!");

    int choice = getPlayerChoice("Investigate the voice.", "Ignore the voice and continue exploring.");

    if (choice == 1) {
        displayDialogue(player.getName(), "Who are you? Where are you?");
        displayDialogue("Voice", "I'm in the room to your right.");

        cout<< "Emerging from the shadows, a haunting figure shrouded in inky black robes materializes before you, sprawled upon the cave floor.\n";
        cin.ignore();
        cout << "Bound by unyielding chains, his hands and legs firmly secured to the ancient walls, he lifts his gaze to meet yours, his eyes widening with a mix of trepidation and desperate hope.\n";
        cin.ignore();
        displayDialogue("Stranger", "Fortune smiles upon me! O kind stranger, help me escape this place!");
        cin.ignore();
        cout << "You are startled by the stranger's exclamation.";

        int choice3 = getPlayerChoice("Help unchain the stranger.", "Kill the stranger.");

        if (choice3 == 1) {
            cout << "Without hesitating, you use the sword and start pounding it against the chains.\n";
            cin.ignore();
            cout<< "After a few tries, all of the chains are broken. The stranger is now free.";
            cin.ignore();

          displayDialogue("Stranger", "Thank you so much! May the Gods bless you dear stranger.");
          cin.ignore();
          displayDialogue(player.getName(), "Who are you, and what brings you so far down this cave?");
          cin.ignore();
          displayDialogue("Amos","My name is Amos, and I am an explorer of ancient artifacts. \nI have descended down this cave in search of an ancient artifact called the Amulet of Memories.");
          cin.ignore();
          displayDialogue(player.getName(), "Ancient artifacts? Wait, are you the one who wrote the journal above?");
          cin.ignore();
          displayDialogue("Amos","Journal? Ah, that must be Darian, my assistant. He was the one who records everything on our expedition. \nHow is he, is he well?");
          cin.ignore();
          cout<<"You recall the undead ghoul that attacked, and also perished again by your hands."<<endl;
          cin.ignore();
          displayDialogue(player.getName(), "He, left this world unfortunately");
          cin.ignore();
          displayDialogue("Amos","Poor Darian. He was always the most excited to look for artifacts.");
          cin.ignore();
          displayDialogue("Amos","Wait, what is that around your neck?");
          cin.ignore();
          displayDialogue(player.getName(),"You mean this necklace?");
          cin.ignore();
          displayDialogue("Amos", "I can hardly believe it! I recognize that necklace you're wearing. \nI've seen it before, around the neck of someone of great power.");
          cin.ignore();
          displayDialogue("Amos", "How did you obtain this necklace?");
          cin.ignore();
          displayDialogue(player.getName(),"I'm, I'm not sure. Actually, I woke up in this cave without a sliver of my memories. All I had was this necklace.");
          cin.ignore();
          displayDialogue(player.getName()," I've explored this cave a bit, and thanks to your journal, I now know the existence of the Amulet of Memories.");
          cin.ignore();
          displayDialogue(player.getName(),"Now I am currently searching for the Amulet, to recover my memories. \nHow I got here, who I am, and most importantly, who put me here.");
          cin.ignore();
          displayDialogue("Amos", "So you are also after that amulet. Heed my words, obtaining that amulet is no walk in the park. \nIt may even cost you your life, just like it did my team's.");
          cin.ignore();
          displayDialogue(player.getName(),"I know, but this is something I have to do.");
          cin.ignore();
          displayDialogue("Amos", "Very well. To repay you, I'll point you to where the amulet is most likely located. \nDeep inside the cave, you will encounter a passage of trials.");
          cin.ignore();
          displayDialogue(player.getName(),"What kind of trials?");
          cin.ignore();
          displayDialogue("Amos", "That I do not know. Whatever it is, no one have ever get pass it. That is all I know.");
          cin.ignore();
          displayDialogue(player.getName(),"Thank you Amos. I am sure this information will be of use.");
          cin.ignore();
          displayDialogue("Amos", "Goodluck stranger. May you regain your memories. I'll try to find my old team, at least their corpses. \nTake this token. Consider it my token of friendship.");
          cin.ignore();

          Item* AFItem = new Item("Token of Amos's Friendship",1,1);

          cout<<"You obtained Token of Amos's Friendship!"<<endl;
          cin.ignore();

          if(player.addItemToInventory(AFItem)){
            cout<<"Token of Amos's Friendship added to inventory"<<endl;}
          else{
            cout<<"Fail to add to inventory."<<endl;}
          cin.ignore();

          cout<<"You continue on, splitting ways with Amos."<<endl;
          cin.ignore();

          displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
          std::cin.ignore();

          int choice1=getPlayerChoice("Save and continue", "Save and exit");

          if (choice1 == 1) {
            // Save the player's progress
            player.setCurrentChapter(2);
            savemanager.saveGame(player);
            ChapterManager::getInstance().startNextChapter(3,player);
            // Move to the next chapter
            }
          else {
            player.setCurrentChapter(2);
            savemanager.saveGame(player);
            player.viewItemsFromInventory();
            exit(0);}
        }
      }
        else {
          displayDialogue("Guide", "Are you sure you want to kill the stranger behind? You may miss out on crucial information.");

          int confirmChoice = getPlayerChoice("Yes, I'm sure.", "No, I'll help the stranger.");

          if (confirmChoice == 1) {
            displayDialogue("Player", "Sorry, I don't trust you.");
            cout<<"You unsheathe your sword and walked closer to the stranger."<<endl;
            cin.ignore();
            displayDialogue("Stranger", "You'll regret this decision!");
            cout<<"You point your sword to his chest, and thrusted with great strength-"<<endl;
            cin.ignore();
            cout<<"Suddenly, the stranger broke free of his shackles with a surge of supernatural strength, sending metallic fragments flying through the air."<<endl;
            cin.ignore();
            cout<<"His eyes glowed with an eerie intensity as he advanced towards you, a malevolent smile spreading across his face."<<endl;
            cin.ignore();
            displayDialogue(player.getName(), "I know there's something wrong with you.");
            cin.ignore();
            cout<<"Prepare to fight!"<<endl;

            fight1.fighting(player.getName(),100,15,"Unknown stranger",100,13);

            Item* RCItem = new Item("Red Crystal",3,3);
            player.addItemToInventory(RCItem);
            cout<<"Obtained a Red Crystal. It wil make you stronger"<<endl;
            cin.ignore();

            displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
            std::cin.ignore();

            int choice1=getPlayerChoice("Save and continue", "Save and exit");

            if (choice1 == 1) {
              // Save the player's progress
              player.setCurrentChapter(2);
              savemanager.saveGame(player);
              ChapterManager::getInstance().startNextChapter(3,player);
              // Move to the next chapter
              }
            else {
              player.setCurrentChapter(2);
              savemanager.saveGame(player);
              player.viewItemsFromInventory();
              exit(0);}}
          else {
            cout << "You decide to help the stranger after all.";
            cout << "Without hesitating, you use the sword and start pounding it against the chains.\n";
            cin.ignore();
            cout<< "After a few tries, all of the chains are broken. The stranger is now free.";
            cin.ignore();

          displayDialogue("Stranger", "Thank you so much! May the Gods bless you dear stranger.");
          cin.ignore();
          displayDialogue(player.getName(), "Who are you, and what brings you so far down this cave?");
          cin.ignore();
          displayDialogue("Amos","My name is Amos, and I am an explorer of ancient artifacts. \nI have descended down this cave in search of an ancient artifact called the Amulet of Memories.");
          cin.ignore();
          displayDialogue(player.getName(), "Ancient artifacts? Wait, are you the one who wrote the journal above?");
          cin.ignore();
          displayDialogue("Amos","Journal? Ah, that must be Darian, my assistant. He was the one who records everything on our expedition. \nHow is he, is he well?");
          cin.ignore();
          cout<<"You recall the undead ghoul that attacked, and also perished again by your hands."<<endl;
          cin.ignore();
          displayDialogue(player.getName(), "He, left this world unfortunately");
          cin.ignore();
          displayDialogue("Amos","Poor Darian. He was always the most excited to look for artifacts.");
          cin.ignore();
          displayDialogue("Amos","Wait, what is that around your neck?");
          cin.ignore();
          displayDialogue(player.getName(),"You mean this necklace?");
          cin.ignore();
          displayDialogue("Amos", "I can hardly believe it! I recognize that necklace you're wearing. \nI've seen it before, around the neck of someone of great power.");
          cin.ignore();
          displayDialogue("Amos", "How did you obtain this necklace?");
          cin.ignore();
          displayDialogue(player.getName(),"I'm, I'm not sure. Actually, I woke up in this cave without a sliver of my memories. All I had was this necklace.");
          cin.ignore();
          displayDialogue(player.getName()," I've explored this cave a bit, and thanks to your journal, I now know the existence of the Amulet of Memories.");
          cin.ignore();
          displayDialogue(player.getName(),"Now I am currently searching for the Amulet, to recover my memories. \nHow I got here, who I am, and most importantly, who put me here.");
          cin.ignore();
          displayDialogue("Amos", "So you are also after that amulet. Heed my words, obtaining that amulet is no walk in the park. \nIt may even cost you your life, just like it did my team's.");
          cin.ignore();
          displayDialogue(player.getName(),"I know, but this is something I have to do.");
          cin.ignore();
          displayDialogue("Amos", "Very well. To repay you, I'll point you to where the amulet is most likely located. \nDeep inside the cave, you will encounter a passage of trials.");
          cin.ignore();
          displayDialogue(player.getName(),"What kind of trials?");
          cin.ignore();
          displayDialogue("Amos", "That I do not know. Whatever it is, no one have ever get pass it. That is all I know.");
          cin.ignore();
          displayDialogue(player.getName(),"Thank you Amos. I am sure this information will be of use.");
          cin.ignore();
          displayDialogue("Amos", "Goodluck stranger. May you regain your memories. I'll try to find my old team, at least their corpses. \nTake this token. Consider it my token of friendship.");
          cin.ignore();

          Item* AFItem = new Item("Token of Amos's Friendship",1,1);

          cout<<"You obtained Token of Amos's Friendship!"<<endl;
          cin.ignore();

          if(player.addItemToInventory(AFItem)){
            cout<<"Token of Amos's Friendship added to inventory."<<endl;}
          else{
            cout<<"Fail to add to inventory."<<endl;}
          cin.ignore();

          cout<<"You continue on, splitting ways with Amos."<<endl;
          cin.ignore();

          displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
          std::cin.ignore();

          int choice1=getPlayerChoice("Save and continue", "Save and exit");

          if (choice1 == 1) {
            // Save the player's progress
            player.setCurrentChapter(2);
            savemanager.saveGame(player);
            ChapterManager::getInstance().startNextChapter(3,player);
            // Move to the next chapter
            }
          else {
            player.setCurrentChapter(2);
            savemanager.saveGame(player);
            player.viewItemsFromInventory();
            exit(0);}
        }
       }

      displayDialogue("Guide", "You found a passage to a new area. Proceed?\n");
      std::cin.ignore();
      int choice2=getPlayerChoice("Save and continue", "Save and exit");
      if (choice2 == 1) {
        // Save the player's progress
        player.setCurrentChapter(2);
        savemanager.saveGame(player);
        ChapterManager::getInstance().startNextChapter(3,player);
        // Move to the next chapter
      }
      else {
        player.setCurrentChapter(2);
        savemanager.saveGame(player);
        player.viewItemsFromInventory();
        exit(0);}
    }
