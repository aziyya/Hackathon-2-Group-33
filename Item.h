#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    int uses;  // Number of uses for the item
    int levelItem;
    // Additional attributes as needed

public:
    Item(const std::string& itemName, int itemUses ,int levelItem);
    std::string getName() const;
    int getLevelItem() const;
    int getUses() const;
    void setUses();
    // Additional methods as needed
};

#endif  // ITEM_H

