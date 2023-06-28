#include <string>
#include <sstream>

// SaveManager.cpp

#include "save_manager.h"
#include "chapter_manager.h"
#include <iostream>
#include <fstream>
#include <string>

SaveManager::SaveManager() {
    head = nullptr;
    saveCount = 0;
}

// Destructor to clean up dynamically allocated memory
SaveManager::~SaveManager() {

    SaveNode* current = head;
    while (current != nullptr) {
        SaveNode* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    saveCount = 0;
}

// Save the game state and player data
void SaveManager::saveGame(const Player& playerData) {
    SaveNode* newNode = new SaveNode;
    newNode->data = playerData;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->next = head;
        head = newNode;
    } else {
        SaveNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    saveCount++;
    std::cout << "Game saved successfully." << std::endl;


    // Print the current information to a file
    std::ofstream outFile("saved_game_" + std::to_string(saveCount) + ".txt");
    if (outFile.is_open()) {
        // Print player information
        outFile << playerData.getName() << std::endl;
        outFile << playerData.getCurrentChapter() << std::endl;

        // Print inventory items
        playerData.viewItemsForFile(outFile);

        outFile.close();
        std::cout << "Current game information saved to file." << std::endl;
    } else {
        std::cout << "Failed to save current game information to file." << std::endl;
    }
}

void SaveManager::loadGame(int index, Player &player) {
    if (index < 1) {
        std::cout << "Invalid save index." << std::endl;
        return;
    }

    // Load the game state from the file
    std::ifstream inFile("saved_game_" + std::to_string(index) + ".txt");
    if (inFile.is_open()) {
  \
        std::string playerName;
        int currentChapter;
        std::string itemName;




        // Read the player's name from the first line
        std::getline(inFile, playerName);

        // Read the player's current chapter from the second line
            std::string chapterLine;
            std::getline(inFile, chapterLine);
            std::istringstream chapterStream(chapterLine);

            if (chapterStream >> currentChapter) {
                std::cout << "Current Chapter: " << currentChapter << std::endl;
            } else {
                std::cout << "Invalid chapter." << std::endl;
            }

 // Read the rest of the line as inventory items
while (getline(inFile, itemName, '\t')) {
    string itemUse, itemLevel;
    if (!(getline(inFile, itemUse, '\t') && getline(inFile, itemLevel))) {
        break; // Stop the loop if failed to read uses and level
    }

    std::cout << "Item name: " << itemName << std::endl;
    std::cout << "Item use: " << itemUse << std::endl;
    std::cout << "Item level: " << itemLevel << std::endl;


    // Process the item name, uses, and level here (e.g., add them to inventory)
    int uses = stoi(itemUse);
    int levelItem = stoi(itemLevel);
    Item* item = new Item(itemName, uses, levelItem);
    player.addItemToInventory(item);
}

        // Clear the newline character from the input stream
        inFile.ignore();

        // Update the player's current chapter and name
        player.setCurrentChapter(currentChapter);
        player.setName(playerName);

        // Display the loaded game state
        std::cout << "Game loaded successfully." << std::endl;
        std::cout << "Name: " << playerName << std::endl;
        std::cout << "Current Chapter: " <<currentChapter << std::endl;

        inFile.close();
        ChapterManager::getInstance().startNextChapter(currentChapter+1, player);
    } else {
        std::cout << "Unable to load the game." << std::endl;
    }
}


bool SaveManager::displaySavedGames() {
    bool saveFound = false;

    std::cout << "Saved Games:" << std::endl;
    for (int index = 1; index <= 100; index++) {
        std::ifstream inFile("saved_game_" + std::to_string(index) + ".txt");
        if (inFile.is_open()) {
          Player player;
          std::string playerName;
          int currentChapter;
          std::string itemName;
          std::cout << "Save " << index << ":" << std::endl;


        // Read the player's name from the first line
            std::getline(inFile, playerName);
            std::cout << "Name: " << playerName << std::endl;

            std::string chapterLine;
            std::getline(inFile, chapterLine);
            std::istringstream chapterStream(chapterLine);

            if (chapterStream >> currentChapter) {
                std::cout << "Current Chapter: " << currentChapter << std::endl;
            } else {
                std::cout << "Invalid chapter." << std::endl;
            }

            while (std::getline(inFile, itemName)) {
            if (itemName.empty()) {
                break; // Stop the loop if the line is empty (no item name)
            }
            // Process the item name here (e.g., add it to inventory)
            std::cout << "Item name: " << itemName << std::endl;
        }
            inFile.close();
            saveFound = true;
        }
    }

    if (!saveFound) {
        std::cout << "No saved games detected." << std::endl;
        return saveFound=false;
    }
    return saveFound;
}
