// level3.cpp
#include "Level3.h"
#include "chapter_manager.h"
#include <iostream>
#include "FunGame.h"
using namespace std;

Level3::Level3() {}

void Level3::displayDialogue(const string& character, const string& dialogue) {
    cout << character << ": " << dialogue << endl;
}

int Level3::getPlayerChoice(const string& option1, const string& option2) {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cin >> choice;
    } while (choice != 1 && choice != 2);

    return choice;
}


void Level3::start(Player& player) {

    Fighter fight1;
    fight1.setPlayerData(player);
    FunGame fungame1;

    //player.viewItemsFromInventory();
    //cin.ignore();

    cout<< "===========================================================================================\n"
        << "                                     CHAPTER THREE                                           \n"
        << "===========================================================================================\n";

    cout<<"You continue forward exploring the cave."<<endl;
    cin.ignore();
    cout<<"Then, you stumble upon an out-of-place corridor that seems to defy the dungeon's architecture."<<endl;
    cin.ignore();
    displayDialogue(player.getName(),"This corridor... It feels different, out of place. I should investigate.");
    cin.ignore();
    cout<<"You cautiously walk down the corridor, its walls adorned with mystical symbols and flickering torches."<<endl;
    cin.ignore();
    cout<<"As you reach the corridor, a figure emerged from the thin air, a woman, dressed in a worn-out gown.\n";
    cin.ignore();
    cout<<"The fabric clings to her frail frame, billowing slightly with an otherworldly presence.\n";
    cin.ignore();
    cout<<"Her long, unkempt hair cascades in dark waves, and streaks of silver interweave through the strands, hinting at the wisdom and age that reside within her.\n";
    cin.ignore();
    cout<<"The pallor of her skin is unnaturally pale, almost ethereal, contrasting sharply with the piercing intensity of her eyes, which gleam like twin orbs of emerald fire.\n";
    cin.ignore();
    cout<<"But more importantly, around her neck lies a glittering amulet"<<endl;
    cin.ignore();
    displayDialogue(player.getName(),"The Amulet of Memories! Are you the guardian of the amulet? ");
    cin.ignore();
    displayDialogue("Witch","Guardian? Well, sort of. It's been here long before me. I found it not long ago, maybe 200 years ago? I don't really remember?");
    cin.ignore();
    displayDialogue(player.getName(),"The Amulet of Memories is something I desperately needs. It's powers can unlock my forgotten memories. I have no intention of taking it away from you. I merely ask to use it once. ");
    cin.ignore();
    displayDialogue("Witch","How can it be so simple, mortal? But since it has been such a long time without anyone to talk to, I can consider your request. But!");
    cin.ignore();
    displayDialogue(player.getName(),"But what? ");
    cin.ignore();
    displayDialogue("Witch","You have to go through this corridor of trials. Should you successfully overcome the trials, I'll lend my amulet to you once.");
    cin.ignore();

    int choiceChallenge;

    do {
      cout << "Do you accept the witch's challenge?" << endl;
      choiceChallenge = getPlayerChoice("I accept your challenge!", "Die, you monster!");

      if (choiceChallenge == 1) {
        displayDialogue(player.getName(),"I accept your challenge! ");
        cin.ignore();
        displayDialogue("Witch","Very well. I will wait for you at the end of the corridor. Best of luck, brave one!");
        cin.ignore();

        FunGame fungame1;
        fungame1.setPlayerData(player);

        cout<<"You advance bravely to the ornately decorated corridor. As you inch closer, you start to notice that it was unusually dark, eventhough from outside it looked bright.";
        cin.ignore();
        if (player.searchItem("Torch")){
          cout<<"Your steps come to a halt. Thanks to the torch that you picked up, you noticed the trap-hole in front of you!"<<endl;
          cin.ignore();
          cout<<"You successfully managed to avoid one trial!"<<endl;
          cin.ignore();
          cout<<"As you walked forward, a man wearing a scholar's robe appeared in the middle of the corridor. His personage greatly suits the image of a genius."<<endl;
          cin.ignore();
          cout<<"The only thing that is off, is his unnaturally rotten face and body. This is clearly an undead." << endl;
          displayDialogue("Undead Scholar","Ah, another challenger dares to tread upon my domain. What brings you here, mortal?");
          cin.ignore();
          displayDialogue(player.getName(),"I seek passage through this corridor, but it seems I've stumbled upon a formidable presence. Who are you?");
          cin.ignore();
          displayDialogue("Undead Scholar","I was once a scholar of great knowledge and intellect. But alas, fate has cursed me with this undead existence. Nevertheless, my mind remains sharp, and I still possess the power to challenge your intellect.");
          cin.ignore();
          displayDialogue(player.getName(),"What kind of challenge do you propose, o' scholar?");
          cin.ignore();
          displayDialogue("Undead Scholar","Prepare yourself for a game of numbers and wit. I shall present you with mathematical puzzles that will test your logical reasoning. Solve them correctly, and I may grant you passage. Fail, and you shall be trapped in this corridor forever.");
          cin.ignore();
          cout<<"The zombie scholar extends a bony hand, offering a worn parchment inscribed with intricate mathematical symbols."<<endl;
          cin.ignore();
          displayDialogue("Undead Scholar","Take this, mortal. Each correct answer will bring you closer to your freedom. Are you ready to test your mind against the undead?");
          cin.ignore();
          displayDialogue(player.getName(),"I accept your challenge, o' scholar. I shall prove that even in the face of decay, the human mind can triumph.");
          cin.ignore();

          fungame1.setTypeGame(3);
          fungame1.playGame();

          displayDialogue("Undead Scholar","Impressive, young traveler. It seems the outside world progressed greatly in the field of mathematics in my slumber. You may pass, challenger.");
          cin.ignore();
          displayDialogue(player.getName(),"Thank you,o'scholar.");
          cin.ignore();
          cout<<"You continue your walk, inching closer to the end of the corridor."<<endl;
          cin.ignore();
          cout<<"As you venture deeper into the corridor, a loud and thunderous growl reverberates through the air. Suddenly, a massive figure emerges from the shadows, towering over you."<<endl;
          cin.ignore();
          cout<<"It is an intimidating Orc, muscles bulging and a fierce expression etched on its face."<<endl;
          cin.ignore();
          displayDialogue("Orc","Halt! Who dares trespass into my domain?");
          cin.ignore();
          displayDialogue(player.getName(),"I seek passage through this corridor. What purpose do you serve here?");
          cin.ignore();
          displayDialogue("Orc","I am Grothak the Destroyer, the mightiest Orc warrior in these lands. If you wish to pass, you must prove your worth. We shall play a little game of numbers. Guess correctly, and I may grant you passage.");
          cin.ignore();
          displayDialogue("Grothrak the Destroyer","Fail, and you shall feel the wrath of my blade.");
          cin.ignore();
          displayDialogue("Grothrak the Destroyer","Or if you are a true warrior, draw your sword! That will be more interesting HAHAHAHA!");
          cin.ignore();

          int numOrFight=getPlayerChoice("Number Guessing Game","I am a true warrior!");

          while(numOrFight!=1 && numOrFight!=2){
            if(numOrFight==1){
              fungame1.setTypeGame(1);
              fungame1.playGame();
              displayDialogue("Grothrak the Destroyer","You are very smart. No matter brain or brawn, a powerful warrior is still a true warrior. You may pass. May we battle again!");
              cin.ignore();
              break;
              }
            else if(numOrFight==2){
              displayDialogue("Grothak the Destroyer","That's more like it!");
              cin.ignore();
              cout<<"Prepare to fight!"<<endl;
              cin.ignore();

              fight1.fighting(player.getName(),100,20,"Grothak the Destroyer",150,15);

              displayDialogue("Grothrak the Destroyer","You are a true warrior, challenger. You have my respect. As a token of friendship, accept this shield of mine!. It will help you in protecting your life, as it did mine.");
              cin.ignore();

              Item* OrkShieldItem = new Item("Shield of the Destroyer",3,3);

              if (player.addItemToInventory(OrkShieldItem) ) {
                // Item added successfully
                cout<<"Obtained Shield of the Destroyer!"<<endl;
                cout << "Items added to inventory." <<endl;}
             else {
                cout << "Failed to add item to inventory." <<endl;}
                break;}
            }else cout<<"Invalid choice. Try again."<<endl;



          cout<<"You advanced once more. As you walked, you encounter the familiar figure of a woman in front of you."<<endl;
          cin.ignore();
          displayDialogue("Witch","It seems you have overcome all the trials I set before you. Your determination and strength have impressed me. Very well, a promise is a promise. You may use this amulet once. But remember, its power is not without consequences.");
          cin.ignore();
          cout<<"She extends her hand, offering the gleaming amulet to you. As you take it, a surge of energy courses through your veins, and a flood of memories suddenly rush into your mind."<<endl;
          cin.ignore();
          cout<<"Flashes of images and emotions fill your consciousness. Among them, you see a necklace, similiar to the one on your neck, adorned with a unique symbol."<<endl;
          cin.ignore();
          cout<<"It was your late mother's heirloom, a precious memento passed down through generations."<<endl;
          cin.ignore();
          cout<<"The memory shifts, and you stand before the imposing figure of the king, his eyes filled with both reverence and trepidation. "<<endl;
          cin.ignore();
          cout<<"The air is thick with anticipation as you are informed of your true identity—the chosen one destined to bring balance and usher in a new era."<<endl;
          cin.ignore();
          cout<<"You remember the mix of emotions that surged within you—fear, doubt, and the weight of responsibility. "<<endl;
          cin.ignore();
          cout<<"In a flash, you see the scene unfold—a secret meeting held in the dimly lit chambers, plotting your banishment to this treacherous cave. "<<endl;
          cin.ignore();
          cout<<" The guards, sworn to the nobles, captured you under the cover of darkness and cast you away, hoping to erase your existence and quell the prophecy."<<endl;
          cin.ignore();
          cout<<"The revelation leaves you breathless and filled you with a mix of emotions, realization, relief, but biggest of all, anger!"<<endl;
          cin.ignore();
          displayDialogue(player.getName(),"How dare they banish me to this cave! I am the rightful chosen one!");
          cin.ignore();
          cout<<"With determination burning in your eyes, you vow to defy the odds and fulfill your destiny. "<<endl;
          cin.ignore();
          displayDialogue(player.getName(),"I will escape from this cave. And once I do, they will pay!");
          cin.ignore();
          displayDialogue(player.getName(),"Thank you, o'witch. I will remember your help.");
          cin.ignore();
          displayDialogue("Witch","It is of problem. The squabbles of you mortals have long since mattered to me.");
          cin.ignore();
          cout<<"As you venture forth, the weight of your destiny now carried with purpose, you draw strength from the memories that define you."<<endl;
          cin.ignore();
          cout<<"The path may be treacherous, but with each step, you inch closer to fulfilling the prophecy and shaping the future of the kingdom.";
          cin.ignore();

          displayDialogue("Game", "You found a passage to a new area. Proceed?\n");
          std::cin.ignore();

          int choice88=getPlayerChoice("Save and continue", "Save and exit");
          while(choice88!=1 && choice88!=2){
          if (choice88 == 1) {
            // Save the player's progress
            player.setCurrentChapter(3);
            savemanager.saveGame(player);
            ChapterManager::getInstance().startNextChapter(4,player);
            // Move to the next chapter
          }
          else if(choice88== 2){
            player.setCurrentChapter(3);
            savemanager.saveGame(player);
            player.viewItemsFromInventory();
            exit(0);}
          else{
            cout<<"Invalid. Try again."<<endl;
            cin.ignore();}
          }
          } else{
            cout<<"Your next step suddenly felt empty, and you find yourself falling into an empty room!. Because it was so dark, you did not notice the hole in front of you."<<endl;
            cin.ignore();
            displayDialogue(player.getName(),"Damn, that hurts. Where am I?");
            cin.ignore();
            displayDialogue("High Pitched Voice","Welcome traveler, to my domain.");
            cin.ignore();
            displayDialogue(player.getName(),"Who are you?!");
            cin.ignore();
            cout<<"From the shadows, a faint translucent body of a boy no more than 11 years old emerged. His head reached just shy of your waist. His transparent body makes it obvious he was no human.";
            cin.ignore();
            cout<<"But a ghost."<<endl;
            cin.ignore();
            displayDialogue("Ghost Boy","I am the one of the guardians of the Amulet of Memories. You have to overcome my trial if you want to step closer to the Amulet.");
            cin.ignore();
            displayDialogue(player.getName(),"A trial from a dead boy? It is not what I expected, but very well. Present your trial!");
            cin.ignore();
            displayDialogue("Ghost Boy","Worry not traveler. I have no interest in fighting. Instead, we will be playing my favorite game when I was alive.");
            cin.ignore();
            displayDialogue("Ghost Boy","Rock, Paper , Scissors");
            cin.ignore();
            displayDialogue(player.getName(),"Whatever it may be, I am ready!");
            cin.ignore();
            displayDialogue("Ghost Boy","Then, let us start!");
            cin.ignore();

            fungame1.setTypeGame(2);
            fungame1.playGame();

            displayDialogue("Ghost Boy","Nooo, I losttt. But it's okay, it was great fun. It's very lonely here. Thanks for playin with me traveler. You can continue your trial. Goodluck.");
            cin.ignore();
            cout<<"Without warning, you are suddenly teleported to the original corridor."<<endl;
            displayDialogue(player.getName(),"Strange, but poor boy. I hope he rests in peace");
            cin.ignore();
            cout<<"You continue your journey ahead.";
            cin.ignore();

            cout<<"As you walked forward, a man wearing a scholar's robe appeared in the middle of the corridor. His personage greatly suits the image of a genius."<<endl;
            cin.ignore();
            cout<<"The only thing that is off, is his unnaturally rotten face and body. This is clearly an undead.";
            displayDialogue("Undead Scholar","Ah, another challenger dares to tread upon my domain. What brings you here, mortal?");
            cin.ignore();
            displayDialogue(player.getName(),"I seek passage through this corridor, but it seems I've stumbled upon a formidable presence. Who are you?");
            cin.ignore();
            displayDialogue("Undead Scholar","I was once a scholar of great knowledge and intellect. But alas, fate has cursed me with this undead existence. Nevertheless, my mind remains sharp, and I still possess the power to challenge your intellect.");
            cin.ignore();
            displayDialogue(player.getName(),"What kind of challenge do you propose, o' scholar?");
            cin.ignore();
            displayDialogue("Undead Scholar","Prepare yourself for a game of numbers and wit. I shall present you with mathematical puzzles that will test your logical reasoning. Solve them correctly, and I may grant you passage. Fail, and you shall be trapped in this corridor forever.");
            cin.ignore();
            cout<<"The zombie scholar extends a bony hand, offering a worn parchment inscribed with intricate mathematical symbols."<<endl;
            cin.ignore();
            displayDialogue("Undead Scholar","Take this, mortal. Each correct answer will bring you closer to your freedom. Are you ready to test your mind against the undead?");
            cin.ignore();
            displayDialogue(player.getName(),"I accept your challenge, o' scholar. I shall prove that even in the face of decay, the human mind can triumph.");
            cin.ignore();

            fungame1.setTypeGame(3);
            fungame1.playGame();

            displayDialogue("Undead Scholar","Impressive, young traveler. It seems the outside world progressed greatly in the field of mathematics in my slumber. You may pass, challenger.");
            cin.ignore();
            displayDialogue(player.getName(),"Thank you,o'scholar.");
            cin.ignore();
            cout<<"You continue your walk, inching closer to the end of the corridor."<<endl;
            cin.ignore();

            cout<<"As you venture deeper into the corridor, a loud and thunderous growl reverberates through the air. Suddenly, a massive figure emerges from the shadows, towering over you."<<endl;
            cin.ignore();
            cout<<"It is an intimidating Orc, muscles bulging and a fierce expression etched on its face."<<endl;
            cin.ignore();
            displayDialogue("Orc","Halt! Who dares trespass into my domain?");
            cin.ignore();
            displayDialogue(player.getName(),"I seek passage through this corridor. What purpose do you serve here?");
            cin.ignore();
            displayDialogue("Orc","I am Grothak the Destroyer, the mightiest Orc warrior in these lands. If you wish to pass, you must prove your worth. We shall play a little game of numbers. Guess correctly, and I may grant you passage.");
            cin.ignore();
            displayDialogue("Grothrak the Destroyer","Fail, and you shall feel the wrath of my blade.");
            cin.ignore();
            displayDialogue("Grothrak the Destroyer","Or if you are a true warrior, draw your sword! That will be more interesting HAHAHAHA!");
            cin.ignore();

            int numOrFight=getPlayerChoice("Number Guessing Game","I am a true warrior!");

            while(numOrFight!=1 && numOrFight!=2){
              if(numOrFight==1){
                fungame1.setTypeGame(1);
                fungame1.playGame();
                displayDialogue("Grothrak the Destroyer","You are very smart. No matter brain or brawn, a powerful warrior is still a true warrior. You may pass. May we battle again!");
                cin.ignore();
                break;
                }
             else if(numOrFight==2){
                displayDialogue("Grothak the Destroyer","That's more like it!");
                cin.ignore();
                cout<<"Prepare to fight!"<<endl;
                cin.ignore();

                fight1.fighting(player.getName(),100,20,"Grothak the Destroyer",150,15);

                displayDialogue("Grothrak the Destroyer","You are a true warrior, challenger. You have my respect. As a token of friendship, accept this shield of mine!. It will help you in protecting your life, as it did mine.");
                cin.ignore();

                Item* OrkShieldItem = new Item("Shield of the Destroyer",3,3);
                if (player.addItemToInventory(OrkShieldItem) ) {
                  // Item added successfully
                  cout<<"Obtained Shield of the Destroyer!"<<endl;
                  cout << "Items added to inventory." <<endl;}
                else {
                  cout << "Failed to add item to inventory." <<endl;
                  }
                break;}
                else{ cout<<"Invalid choice. Try again."<<endl;}
              }

        cout<<"You advanced once more. As you walked, you encounter the familiar figure of a woman in front of you."<<endl;
        cin.ignore();
        displayDialogue("Witch","It seems you have overcome all the trials I set before you. Your determination and strength have impressed me. Very well, a promise is a promise. You may use this amulet once. But remember, its power is not without consequences.");
        cin.ignore();
        cout<<"She extends her hand, offering the gleaming amulet to you. As you take it, a surge of energy courses through your veins, and a flood of memories suddenly rush into your mind."<<endl;
        cin.ignore();
        cout<<"Flashes of images and emotions fill your consciousness. Among them, you see a necklace, similiar to the one on your neck, adorned with a unique symbol."<<endl;
        cin.ignore();
        cout<<"It was your late mother's heirloom, a precious memento passed down through generations."<<endl;
        cin.ignore();
        cout<<"The memory shifts, and you stand before the imposing figure of the king, his eyes filled with both reverence and trepidation. "<<endl;
        cin.ignore();
        cout<<"The air is thick with anticipation as you are informed of your true identity—the chosen one destined to bring balance and usher in a new era."<<endl;
        cin.ignore();
        cout<<"You remember the mix of emotions that surged within you—fear, doubt, and the weight of responsibility. "<<endl;
        cin.ignore();
        cout<<"In a flash, you see the scene unfold—a secret meeting held in the dimly lit chambers, plotting your banishment to this treacherous cave. "<<endl;
        cin.ignore();
        cout<<" The guards, sworn to the nobles, captured you under the cover of darkness and cast you away, hoping to erase your existence and quell the prophecy."<<endl;
        cin.ignore();
        cout<<"The revelation leaves you breathless and filled you with a mix of emotions, realization, relief, but biggest of all, anger!"<<endl;
        cin.ignore();
        displayDialogue(player.getName(),"How dare they banish me to this cave! I am the rightful chosen one!");
        cin.ignore();
        cout<<"With determination burning in your eyes, you vow to defy the odds and fulfill your destiny. "<<endl;
        cin.ignore();
        displayDialogue(player.getName(),"I will escape from this cave. And once I do, they will pay!");
        cin.ignore();
        displayDialogue(player.getName(),"Thank you, o'witch. I will remember your help.");
        cin.ignore();
        displayDialogue("Witch","It is of problem. The squabbles of you mortals have long since mattered to me.");
        cin.ignore();
        cout<<"As you venture forth, the weight of your destiny now carried with purpose, you draw strength from the memories that define you."<<endl;
        cin.ignore();
        cout<<"The path may be treacherous, but with each step, you inch closer to fulfilling the prophecy and shaping the future of the kingdom.";
        cin.ignore();

        displayDialogue("Game", "You found a passage to a new area. Proceed?\n");
        std::cin.ignore();
        int choice88=getPlayerChoice("Save and continue", "Save and exit");
        while(choice88!=1 && choice88!=2){
        if (choice88 == 1) {
          // Save the player's progress
          player.setCurrentChapter(3);
          savemanager.saveGame(player);
          ChapterManager::getInstance().startNextChapter(4,player);
          // Move to the next chapter
        }
        else if(choice88== 2){
          player.setCurrentChapter(3);
          savemanager.saveGame(player);
          player.viewItemsFromInventory();
          exit(0);}
       else{
          cout<<"Invalid. Try again."<<endl;
          cin.ignore();}
       break; // Exit the loop since a valid choice has been made
    }
    else if (choiceChallenge == 2) {
        displayDialogue(player.getName(),"Enough talk witch! Hand me the amulet or die! ");
        cin.ignore();
        displayDialogue("Witch","Insolent mortal. Prepare to die.");
        cin.ignore();
        cout<<"Prepare to fight the witch."<<endl;
        cin.ignore();

        fight1.fighting(player.getName(),100,20,"Witch",100,35);
        cin.ignore();
        displayDialogue("Witch","Nooooooooo!! You damn mortal, you will pay for thisssss!");
        cin.ignore();
        cout<<"As the witch screamed in fear, her body slowly turned to ash. Amidst the dying screams, a single amulet was left on top of the ashes."<<endl;
        cin.ignore();
        cout<<"Troublesome witch."<<endl;
        cin.ignore();
        cout<<"You approach the witch's ash, and pick up the amulet. At once, a surge of power coursed through your hands."<<endl;
        cin.ignore();
        cout<<"Flashes of images and emotions fill your consciousness. Among them, you see a necklace, similiar to the one on your neck, adorned with a unique symbol."<<endl;
        cin.ignore();
        cout<<"It was your late mother's heirloom, a precious memento passed down through generations."<<endl;
        cin.ignore();
        cout<<"The memory shifts, and you stand before the imposing figure of the king, his eyes filled with both reverence and trepidation. "<<endl;
        cin.ignore();
        cout<<"The air is thick with anticipation as you are informed of your true identity—the chosen one destined to bring balance and usher in a new era."<<endl;
        cin.ignore();
        cout<<"You remember the mix of emotions that surged within you—fear, doubt, and the weight of responsibility. "<<endl;
        cin.ignore();
        cout<<"In a flash, you see the scene unfold—a secret meeting held in the dimly lit chambers, plotting your banishment to this treacherous cave. "<<endl;
        cin.ignore();
        cout<<" The guards, sworn to the nobles, captured you under the cover of darkness and cast you away, hoping to erase your existence and quell the prophecy."<<endl;
        cin.ignore();
        cout<<"The revelation leaves you breathless and filled you with a mix of emotions, realization, relief, but biggest of all, anger!"<<endl;
        cin.ignore();
        displayDialogue(player.getName(),"How dare they banish me to this cave! I am the rightful chosen one!");
        cin.ignore();
        cout<<"With determination burning in your eyes, you vow to defy the odds and fulfill your destiny. "<<endl;
        cin.ignore();
        displayDialogue(player.getName(),"I will escape from this cave. And once I do, they will pay!");
        cin.ignore();
        cout<<"As you venture forth, the weight of your destiny now carried with purpose, you draw strength from the memories that define you."<<endl;
        cin.ignore();
        cout<<"The path may be treacherous, but with each step, you inch closer to fulfilling the prophecy and shaping the future of the kingdom.";
        cin.ignore();

        displayDialogue("Game", "You found a passage to a new area. Proceed?\n");

      int choice77=getPlayerChoice("Save and continue", "Save and exit");

      while(choice77!=1 && choice77!=2){
        if (choice77 == 1) {
          // Save the player's progress
          player.setCurrentChapter(3);
          savemanager.saveGame(player);
          ChapterManager::getInstance().startNextChapter(4,player);
          // Move to the next chapter
        }
        else if(choice77== 2){
          player.setCurrentChapter(3);
          savemanager.saveGame(player);
          player.viewItemsFromInventory();
          exit(0); }
        else {
          cout<<"Invalid. Try again."<<endl;
          cin.ignore();}
      }
    }
    else cout << "Invalid input. Please enter 1 or 2." << endl;
   }
    }
     }while (true);

}
