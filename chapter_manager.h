#ifndef CHAPTER_MANAGER_H
#define CHAPTER_MANAGER_H
#include "PlayerData.h"

class ChapterManager {
public:
    static ChapterManager& getInstance();
    void startNextChapter(int,Player &);

private:
    ChapterManager();
    ~ChapterManager();
    Player player;
    int currentChapter;
};

#endif // CHAPTER_MANAGER_H
