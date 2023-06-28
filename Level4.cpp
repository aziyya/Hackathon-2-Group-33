// level4.cpp
#include "Level4.h"
#include "chapter_manager.h"
#include <iostream>
#include "FunGame.h"
using namespace std;

Level4::Level4() {}

void Level4::displayDialogue(const string& character, const string& dialogue) {
    cout << character << ": " << dialogue << endl;
}

int Level4::getPlayerChoice(const string& option1, const string& option2) {
    int choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cin >> choice;
    } while (choice != 1 && choice != 2);

    return choice;
}


void Level4::start(Player& player) {

    Fighter fight1;
    fight1.setPlayerData(player);
    bool AmosHelped=false;

    cout<< "===========================================================================================\n"
   		  << "                                     CHAPTER FOUR                                          \n"
   	  	<< "===========================================================================================\n";

      cout<<"This is the final chapter. Tread carefully."<<endl;
      cin.ignore();

      cout<< "As you persevered through the perilous twists and turns of the forbidding cave,\n";
      cin.ignore();
      cout<<"Your hearts pounding with a mix of trepidation and determination, you finally reached a momentous juncture. \n";
      cin.ignore();
      cout<<"There, amidst an eerie silence, you found yourselves in the presence of an enigmatic person-like figure standing like a statue in front of you.\n";
      cin.ignore();
      cout<<"This figure, dresses in obsidian black armor that seemed to absorb the very essence of light, emanated an undeniable aura of power.\n";
      cin.ignore();
      cout<<"His piercing eyes, like twin orbs of flickering embers, fixed upon you with an unwavering gaze.\n";
      cin.ignore();
      cout<<"The intensity of that stare sent shivers cascading down your spines, as if the weight of their scrutiny could unravel your deepest secrets";
      cin.ignore();

      displayDialogue("Enigmatic figure", "So, you have finally arrived, banished one.");
      cin.ignore();
      displayDialogue(player.getName(), "Who are you ?! What purpose does this captivity serve?");
      cin.ignore();
      displayDialogue("Enigmatic figure", "Names are but fleeting whispers, for it is my duty to ensure that none pass beyond this point.");
      cin.ignore();
      displayDialogue(player.getName(), "I know not who are you, but I recognize you in my memories. You are on of them. The one who banished me here!");
      cin.ignore();
      cout<< "The stranger's eyes glimmered with a mixture of intrigue and amusement, their enigmatic presence unfazed by your fervent declaration.";
      cin.ignore();
      displayDialogue("Enigmatic figure", "Ah, the flame of rebellion burns bright within you. Pity, a peasant like you should never burn that bright.");
      cin.ignore();
      cout<< "In that moment, you were acutely aware that this encounter would be a test of wills, a clash between the indomitable spirit of freedom and the enigmatic figure's unwavering commitment to their duty.";
      cin.ignore();
      displayDialogue(player.getName(), "I will no longer be oppressed by all you. I will defeat you, and claim my rightful destiny.");
      cin.ignore();
      cout<< "The cave seemed to hold its breath, anticipation crackling in the air, as you stood face to face with the enigmatic figure.\n";
      cin.ignore();
      cout<< "The echoes of your footsteps reverberated through the cavern, mingling with the electric atmosphere, marking the beginning of a battle that would etch itself into your memories\n";
      cin.ignore();
      cout<< "The grip of your sword is getting tighter,ready to attack the firm and mysterious figure." << endl;

      if(player.searchItem("Token of Amos's Friendship")){
        cout<< "Just when you want to take the first step, out of sudden....";
        cin.ignore();
        displayDialogue("Amos", "Let me give you a hand my friend !");
        cin.ignore();
        displayDialogue(player.getName(), "Amos??");
        cin.ignore();
        cout<<"You exclaim in surprise as the familiar figure of Amos appeared in the cliff above your clearing."<<endl;
        cin.ignore();
        cout<<"He was covered in dark substances all over his body, a cursory glance might make him look like a monster,but the voice is definitely Amos'."<<endl;
        cin.ignore();
        displayDialogue("Amos", "This is my true form my friend. You might have some guess about this now that you recovered your memories.");
        cin.ignore();
        displayDialogue("Amos", "Indeed, I ventured to this cave with my team almost 300 years ago. That is why I did not know the witch obtained that amulet");
        cin.ignore();
        displayDialogue("Amos", "But along the way, we met something else. Something, ancient. And it entered into my body, making me like this.");
        cin.ignore();
        displayDialogue(player.getName(), "I had a clue that's about it.");
        cin.ignore();
        displayDialogue("Amos", "You are pure of heart my friend. Even in a dangerous cave, you still are willing to help a total stranger.");
        cin.ignore();
        displayDialogue("Amos", "For your kindness, I will help you slay this foe.");
        cin.ignore();
        cout<<"As Amos exclaims, he turned his heads up,and released a mighty beam of darkness from his mouth that went straight to the enigmatic figure."<<endl;
        cin.ignore();
        displayDialogue("Enigmatic figure", "What powers is this?! ARGGHHHH");
        cin.ignore();

        cout<<"Amos' attack reduced the figure's HP by 30."<<endl;
        cin.ignore();

        displayDialogue(player.getName(), "Many thanks Amos. I will remember your help.");
        cin.ignore();
        displayDialogue("Amos", "It is all I can do my friend. I am afraid that is the extent of my powers.I have to recuperate now. Farewell my friend, and goodluck!");
        cin.ignore();
        cout<<"Amos left as mysteriously as he arrived.";
        cin.ignore();
        displayDialogue(player.getName(),"You ready your sword, and lunge towards that figure, ready to battle to your death!");
        cin.ignore();
        cout<<"Prepare to fight!"<<endl;
        cin.ignore();
        AmosHelped=true;
          }

        displayDialogue(player.getName(),"You ready your sword, and lunge towards that figure, ready to battle to your death!");
        cin.ignore();
        cout<<"Prepare to fight!"<<endl;
        cin.ignore();

        if(AmosHelped){
          fight1.fighting(player.getName(),100,15,"Enigmatic figure",120,30);}
        else{
        fight1.fighting(player.getName(),100,15,"Enigmatic figure",150,30);}

        displayDialogue(player.getName(), "Hah-hah-hah");
        cin.ignore();
        cout<<"After an exhausting fight, you found it a struggle to keep standing. You are leaning to your sword as a crutch,as you look towards the greatest enemy you have ever fought."<<endl;
        cin.ignore();
        cout<<"The figure is lying on his back, wounds all over his body. Clearly, his conditions are far worse than you."<<endl;
        cin.ignore();
        displayDialogue("Enigmatic figure", "I see your powers have truly awakened. Well, that's not necessarily a bad thing. For this world.");
        cin.ignore();
        displayDialogue("Enigmatic figure", "I have no part in your capture. I am only a lackey. A dog if you will.");
        cin.ignore();
        displayDialogue("Enigmatic figure","The true mastermind lie beyond this cave. They are far stronger, and more sinister than me.");
        cin.ignore();
         displayDialogue(player.getName(), "Worry not. They will feel my wrath all the same.");
        cin.ignore();
        displayDialogue("Enigmatic figure", "That's comforting.");
        cin.ignore();
        displayDialogue("Enigmatic figure", "Ha ha ha ha ha");
        cin.ignore();

        int choiceRevenge;
        while(choiceRevenge!=1 && choiceRevenge!=2){
          displayDialogue("Enigmatic figure", "Now, what are you waiting for? Finish your revenge.");
          choiceRevenge=getPlayerChoice("Kill the figure","Spare him.");
          cin>>choiceRevenge;

          if(choiceRevenge==1){
            displayDialogue(player.getName(), "With pleasure.");
            cin.ignore();
            cout<<"You thrust your sword into his broken body.\n";
            cin.ignore();
            cout<<"Slowly, the light in his faded away. The figure, has died."<<endl;
            cin.ignore();
            cout<<"You walk towards the exit of the cave,eyes gleaming with the fire of revenge."<<endl;
            displayDialogue(player.getName(), "His head is only the first in my quest for revenge. All will pay.");
            cin.ignore();
            cout<<"As you step outside for the first time since you woke up, you closed your eyes and took a deep breath. "<<endl;
            cin.ignore();
            cout<<"You open your eyes, looking into the far horizon. You ready yourself, and with heart full of rage, you trudge forward, determined to find your captors, and pay them back tenfold."<<endl;
            cin.ignore();
            cout<<"TO BE CONTINUED......."<<endl;
            cin.ignore();
            cout<<"Congratulations, you have completed the game! Stay tuned for the next adventure !!"<<endl;
            break;}
          else if(choiceRevenge==2){
            cout << "You lower your sword, sparing the figure's life.\n";
            cin.ignore();
            cout << "Relief washes over you as you realize you don't want to become a monster like your captors.\n";
            cin.ignore();
            cout << "The figure, injured and broken, looks up at you with a mix of confusion and gratitude.\n";
            cin.ignore();
            displayDialogue(player.getName(), "You are spared. But remember, your actions have consequences.");
            cin.ignore();
            cout << "As you step outside the cave, you feel a sense of freedom and compassion filling your heart.\n";
            cin.ignore();
            cout << "You choose the path of forgiveness and hope, vowing to end the cycle of violence and seek a better way.\n";
            cin.ignore();
            cout << "You look into the far horizon, the sun's warm rays touching your face. With newfound purpose, you embark on a journey to change the world.\n";
            cin.ignore();
            cout << "TO BE CONTINUED......\n";
            cin.ignore();
            break; }
          else{
            cout<<"Invalid. Try again."<<endl;}
        }

        cout<<"Congratulations, you have completed the game! Stay tuned for the next adventure !!"<<endl;
        cin.ignore();

          int choice73=getPlayerChoice("Save and restart", "Save and exit");
          while(choice73!=1 && choice73!=2){
          if (choice73 == 1) {
            // Save the player's progress
            player.setCurrentChapter(4);
            savemanager.saveGame(player);
            ChapterManager::getInstance().startNextChapter(1,player);
            // Move to the next chapter
          }
          else if(choice73== 2){
            player.setCurrentChapter(4);
            savemanager.saveGame(player);
            exit(0);}
          else{
            cout<<"Invalid. Try again."<<endl;
            cin.ignore(); }
          }
}

