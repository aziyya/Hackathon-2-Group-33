// level2.h
#ifndef LEVEL2_H
#define LEVEL2_H
#include "PlayerData.h"
#include "save_manager.h"
#include "Fighting.h"

#include <string>

class Level2 {
public:
    Level2();
    void start(Player&);
    SaveManager savemanager;

private:
    void displayDialogue(const std::string& character, const std::string& dialogue);
    int getPlayerChoice(const std::string& option1, const std::string& option2);

    std::string character;
    std::string dialogue;
};

#endif // LEVEL2_H
