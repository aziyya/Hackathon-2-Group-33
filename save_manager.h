// SaveManager.h

#ifndef SAVEMANAGER_H
#define SAVEMANAGER_H
#include "chapter_manager.h"
#include "PlayerData.h"

class SaveManager {
private:
    struct SaveNode {
        Player data;
        SaveNode* next;
    };

    SaveNode* head;
    int saveCount;

public:
    SaveManager();
    ~SaveManager();
    void saveGame(const Player& playerData);
    void loadGame(int, Player&);
    bool displaySavedGames();
};

#endif // SAVEMANAGER_H
