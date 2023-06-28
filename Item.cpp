#include "Item.h"

Item::Item(const std::string& itemName, int itemUses, int levItem) : name(itemName), uses(itemUses), levelItem(levItem) {
    // Additional initialization if needed
}

std::string Item::getName() const {
    return name;
}

void Item::setUses() {
    uses--;
}

int Item::getUses() const {
    return uses;
}

int Item::getLevelItem() const {
    return levelItem;
}


