// level3.h
#ifndef LEVEL3_H
#define LEVEL3H
#include "PlayerData.h"
#include "save_manager.h"
#include "Fighting.h"
#include <string>

class Level3 {
public:
    Level3();
    void start(Player&);
    SaveManager savemanager;

private:
    void displayDialogue(const std::string& character, const std::string& dialogue);
    int getPlayerChoice(const std::string& option1, const std::string& option2);

    std::string character;
    std::string dialogue;
};

#endif // LEVEL3_H
