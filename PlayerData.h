#ifndef PLAYER_H
#define PLAYER_H
#include "Inventory.h"
#include <string>
using namespace std;

class Player
{
public:
    Player();
    string getName() const;
    int getCurrentChapter() const;

    void setName(const string& n);
    void setCurrentChapter(int chapter);

    friend std::ostream& operator<<(std::ostream& os, const Player& player);
    friend std::istream& operator>>(std::istream& is, Player& player);

    bool addItemToInventory(Item* item);
    void removeItem(Item* item);
    void viewItemsFromInventory()const;
    void viewItemsForFile(std::ostream& os)const;
    bool searchItem(string);
    void reducedItems(string);

private:
    string playerName;
    int currentChapter;
    Inventory inventory;

};

#endif // PLAYER_H
