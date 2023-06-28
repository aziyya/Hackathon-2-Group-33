#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory {
private:
    struct Node {
        Item* data;
        Node* next;

        Node(Item* item) : data(item), next(nullptr) {}
    };

    Node* head;

public:
    Inventory();
    ~Inventory();

    bool addItem(Item* item);
    void removeItem(Item* item);
    void viewInventory() const;
    void viewInventory(std::ostream& os) const;
    bool searchItem(const std::string& itemName) const;
    void reducedItem(const std::string& itemName) ;
    bool isEmpty() const;
};
#endif
