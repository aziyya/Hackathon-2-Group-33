// chapter_manager.cpp
#include "chapter_manager.h"
#include "PlayerData.h"
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"
#include "Level4.h"

//Constructor initializes the currentChapter member variable to 1.
ChapterManager::ChapterManager() : currentChapter(1) {}

//Destructor
ChapterManager::~ChapterManager() {}

//Implements the Singleton design pattern by returning a static instance of the ChapterManager class.
ChapterManager& ChapterManager::getInstance() {
    static ChapterManager instance;
    return instance; }

//Determine which level class to instantiate and start based on the current chapter number.
void ChapterManager::startNextChapter(int currentChapter, Player &player) {

    switch (currentChapter) {
        case 1: {
            Level1 level1;
            level1.start(player);
            break;
        }
        case 2: {
            Level2 level2;
            level2.start(player);
            break;
        }
        case 3: {
            Level3 level3;
            level3.start(player);
            break;
        }
        case 4: {
            Level4 level4;
            level4.start(player);
            break;
        }
        // Add more cases for additional chapters
        default:
            break;
    }
}
