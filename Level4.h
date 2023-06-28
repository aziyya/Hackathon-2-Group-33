// level4.h
#ifndef LEVEL4_H
#define LEVEL4H
#include "PlayerData.h"
#include "save_manager.h"
#include "Fighting.h"
#include <string>

class Level4 {
public:
    Level4();
    void start(Player&);
    SaveManager savemanager;

private:
    void displayDialogue(const std::string& character, const std::string& dialogue);
    int getPlayerChoice(const std::string& option1, const std::string& option2);

    std::string character;
    std::string dialogue;
};

#endif // LEVEL4_H
