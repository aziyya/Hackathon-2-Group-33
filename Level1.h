// level1.h
#ifndef LEVEL1_H
#define LEVEL1_H
#include "PlayerData.h"
#include "save_manager.h"
#include "Fighting.h"
#include "FunGame.h"


#include <string>

class Level1 {
public:
    Level1();
    void start(Player&);
    SaveManager savemanager;

private:
    void displayDialogue(const std::string& character, const std::string& dialogue);
    int getPlayerChoice(const std::string& option1, const std::string& option2);

    std::string character;
    std::string dialogue;
};

#endif // LEVEL1_H
