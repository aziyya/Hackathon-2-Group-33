#ifndef FIGHTING_H
#define FIGHTING_H

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include "PlayerData.h"

using namespace std;

class Fighter {
private:
    string name;
    int health;
    int attackPower;
    bool isDefending;

    int swordDamage;
    int shieldDamage;
    int bandageDamage;
    int CrystalDamage;
    Player* play;



public:
    //Default constructor that initializes the member variables with default values.
    Fighter() {
        name = "";
        health = 0;
        attackPower = 0;
        swordDamage = 0;
        shieldDamage = 0;
        bandageDamage = 0;
        isDefending = false;
        play = nullptr;
    }

    //Constructor that initializes the fighter with the provided name, health, and attack power.
    Fighter(const string& fighterName, int fighterHealth, int fighterAttackPower)
        : name(fighterName), health(fighterHealth), attackPower(fighterAttackPower), isDefending(false) {
        swordDamage = 0;
        shieldDamage = 0;
        bandageDamage = 0;
        CrystalDamage=0;
        play = nullptr;
    }

    //Getter function
    const string& getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    int getAttackPower() const {
        return attackPower;
    }

    //Setter function
    void setSwordDamage(int damage) {
        swordDamage = damage;
    }

    void setShieldDamage(int damage) {
        shieldDamage = damage;
    }

    void setCrystalDamage(int damage) {
        CrystalDamage = damage;
    }

    void setBandageDamage(int damage) {
        bandageDamage = damage;
    }

    // Takes the specified amount of damage
    void takeDamage(int damage) {
        if (isDefending) {
            damage /= 2; // Reduce damage by half if defending
        }

    int actualDamage = damage - shieldDamage;
    if (actualDamage < 0) {
        actualDamage = 0; // Prevent negative damage
    }
        health -= actualDamage ;
        if (health < 0) {
            health = 0;
        }
    }

    //Checks if the fighter is alive (health greater than 0).
    bool isAlive() const {
        return health > 0;
    }

    //Performs an attack
    void attack(Fighter& opponent) {
        cout << name << " attacks " << opponent.getName() << "!" << endl;
        int damage = rand() % attackPower + 7 + swordDamage + CrystalDamage;

        opponent.takeDamage(damage);
        cout << opponent.getName() << " takes " << damage << " damage." << endl;
    }

    //Sets the fighter to a defensive stance
    void defend() {
        cout << name << " is defending and will take reduced damage next turn." << endl;
        isDefending = true;
    }

    //Restores a random amount of health to the fighter
    void heal() {
        int amount = rand() % 20 + 10; // Random healing between 10 and 30
        amount += bandageDamage; // Add bandage healing
        health += amount;
        cout << name << " heals for " << amount << " health points." << endl;
    }

    //Sets the player data object for the fighter.
    void setPlayerData(Player& pData) {
    play = &pData;
    }


    void fighting(const string& playername, int playerHealth, int playerAttack, const string& enemyName, int enemyHealth, int enemyAttack);
};
#endif //fighting.h
