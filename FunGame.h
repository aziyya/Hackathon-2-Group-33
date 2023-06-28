#ifndef FUNGAME_H
#define FUNGAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerData.h"

using namespace std;

class FunGame {
private:
    int typeGame;
    Player* play;

public:
	FunGame() {
		typeGame = 1;
	}

	void setTypeGame(int typeG) {
		typeGame = typeG;
	}

	int getTypeGame() const {
		return typeGame;
	}

  void setPlayerData(Player& pData) {
    play = &pData;
    }


    void playGame();
    void numGuessGame();
    void rockpapers();
    void mathGame();


};
#endif
