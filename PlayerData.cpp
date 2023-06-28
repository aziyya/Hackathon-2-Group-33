#include <iostream>
#include <stdlib.h>
#include <string>

#include "PlayerData.h"

using namespace std;

//Default constructor
Player::Player()
{}

//Return player name
string Player::getName()const { return playerName; }

//Returns the current chapter the player is in.
int Player::getCurrentChapter() const{ return currentChapter; }

//Sets the player's name to the provided string
void Player::setName(const string& n) { playerName = n; }

//Sets the player's current chapter to the provided integer.
void Player::setCurrentChapter(int chapter) { currentChapter = chapter; }

//Add the given item to the player's inventory.
bool Player::addItemToInventory(Item* item) {
    return inventory.addItem(item); }

//Check if the specified item exists in the player's inventory.
bool Player :: searchItem( string itemName ) {
  return inventory.searchItem(itemName); }

//Decrease the count of the specified item in the player's inventory.
void Player :: reducedItems( string itemName ) {
  return inventory.reducedItem(itemName); }

//Display the items in the player's inventory on the console.
void Player::viewItemsFromInventory()const{
    inventory.viewInventory(); }

//Write the items in the player's inventory to the specified output stream.
void Player::viewItemsForFile(std::ostream& os)const{
    inventory.viewInventory(os); }

//Enable reading a Player object from an output stream.
std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << player.getName() << std::endl;
    os << player.getCurrentChapter() << std::endl;
    // Write additional player attributes as needed
    return os;
}

//Enable reading a Player object from an input stream.
std::istream& operator>>(std::istream& is, Player& player) {
    std::string name;
    int currentChapter;

    // Read player attributes from the input stream
    is >> name;
    is >> currentChapter;
    player.setName(name);
    player.setCurrentChapter(currentChapter);
    // Read additional player attributes as needed
    return is;
}
