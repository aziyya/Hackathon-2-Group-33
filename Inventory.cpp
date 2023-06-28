#include "Inventory.h"
#include <iostream>
using namespace std;

Inventory::Inventory() : head(nullptr) {}

Inventory::~Inventory() {
    // Clean up the memory when the inventory is destroyed
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current->data;
        delete current;
        current = next;
    }
}
bool Inventory::addItem(Item* item) {
    Node* newNode = new Node(item);
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* nodePtr = head;
        while (nodePtr->next != nullptr) {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }

    return true; // Item added successfully
}



void Inventory::removeItem(Item* item) {
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) {
        if (current->data == item) {
            if (previous == nullptr) {
                // The item to remove is the first node
                head = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

void Inventory::viewInventory() const {
    if (isEmpty()) {
        std::cout << "Inventory is empty." << std::endl;
    } else {
        Node* current = head;
        while (current != nullptr) {
            // Access the item data through current->data
            Item* item = current->data;
            cout << "Name: " << item->getName() << endl;
            cout << "Usage: " << item->getUses() << endl;
            cout << "Level Item: " << item->getLevelItem() << endl << endl;
            current = current->next;
        }
    }
}
void Inventory::viewInventory(std::ostream& os) const {
    if (isEmpty()) {
        os << "Inventory is empty." << std::endl;
    } else {
        Node* current = head;
        while (current != nullptr) {
            // Access the item data through current->data
            // Display or process the item as needed
            os << current->data->getName() <<"\t"<<current->data->getUses()<<"\t"<<current->data->getLevelItem()<< std::endl;

            current = current->next;
        }
    }
}

bool Inventory::searchItem(const std::string& itemName) const {
    Node* current = head;
    while (current != nullptr) {
        Item* item = current->data;
        if (item->getName() == itemName) {
            return true; // Item found
        }
        current = current->next;
    }
    return false; // Item not found
}

void Inventory::reducedItem(const std::string& itemName)  {

    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) {
        Item* item = current->data;
        if (item->getName() == itemName) {
            item->setUses();
            if (item->getUses() == 0) {
                if (previous == nullptr) {
                    // The item to remove is the first node
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                Node* next = current->next;
                delete current->data;
                delete current;
                current = next;
                continue;  // Move to the next iteration
            }
        }
        previous = current;
        current = current->next;
    }
}

bool Inventory::isEmpty() const {
    if (head==nullptr){
      return true;
    }else return false;
}
