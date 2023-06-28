#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerData.h"
#include "FunGame.h"

void FunGame :: playGame() {

        switch (typeGame) {
          case 1: {
              numGuessGame();
              break;
          case 2:
              rockpapers();
              break;
          case 3:
              mathGame();
              break;
        }
}
}


void FunGame :: numGuessGame() {

        bool p = true;
        while(p) {

        // Generate random seed
        srand(time(nullptr));

        int secretNumber = rand() % 100 + 1;
        int attempts = 0;
        int guess;


        cout << "\n" << play->getName() << " can guess the number ONLY for 8 times to win!\n";
        while (true) {

            if (attempts > 7) {
                cout << play->getName() << " LOSE" << endl;
                int choose;
                cout << "Please choose..." << endl;
                cout << "1. Restart Game" << endl;
                cout << "2. Exit Game" << endl;

                do{
                  cin >> choose;
                  if(choose!=1 && choose!=2) {
                    cout << "Invalid Choice. Try Again" << endl; }

                }while((choose!=1 && choose!=2));

                if(choose == 1) {
                  break; }
                else if(choose == 2) {
                  exit(0); }
            }



            cout << "Enter your guess (1-100): ";
            cin >> guess;
            attempts++;

            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;}
            else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;}

            else if (guess == secretNumber && attempts <= 7) {
                cout << "\nThe answer is TRUEEEE!!" << endl;
                cout << play->getName() << " won the game and guessed the number in " << attempts << " attempts." << endl;
                cout << "\n\n"; p=false;
                break; }
        }
    }
}

void FunGame :: rockpapers() {

        bool p = true;
        while(p) {

        // Generate random seed
        srand(time(nullptr));

        int playerScore = 0;
        int computerScore = 0;

        cout << play->getName() << " must win 3 times to win\n";
        while (true) {
            // Get player's choice
            int choice;
            cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
            cin >> choice;
            if (choice < 0 || choice > 2) {
                cout << "Invalid choice. Please try again." << endl;
                continue; }

            // Generate computer's choice
            int computerChoice = rand() % 3;

            // Determine the winner
            cout << play->getName() << " chooses ";
            switch (choice) {
                case 0:
                    cout << "Rock";
                    break;
                case 1:
                    cout << "Paper";
                    break;
                case 2:
                    cout << "Scissors";
                    break;
            }

            cout << endl;

            cout << "Ghost Boy chooses ";
            switch (computerChoice) {
                case 0:
                    cout << "Rock";
                    break;
                case 1:
                    cout << "Paper";
                    break;
                case 2:
                    cout << "Scissors";
                    break;
            }

            cout << endl;

            if (choice == computerChoice) {
                cout << "It's a tie!" << endl;}
            else if (
                    (choice == 0 && computerChoice == 2) ||
                    (choice == 1 && computerChoice == 0) ||
                    (choice == 2 && computerChoice == 1)
                    ) {
                cout << play->getName() << " wins!" << endl;
                playerScore++;}
            else {
                cout << "Ghost boy wins!" << endl;
                computerScore++; }

            // Display scores
            cout << play->getName() << " Score: " << playerScore << endl;
            cout << "Ghost Boy Score: " << computerScore << endl;

            if (computerScore == 3) {
                cout << endl << play->getName() << " LOST." << endl;

                int pilih;
                cout << "Please choose..." << endl;
                cout << "1. Restart Game" << endl;
                cout << "2. Exit Game" << endl;

                do{
                  cin >> pilih;
                  if(pilih!=1 && pilih!=2) {
                    cout << "Invalid Choice. Try Again" << endl; }

                }while((pilih!=1 && pilih!=2));

                if(pilih == 1) {
                  break; }
                else if(pilih == 2) {
                  exit(0); }
            }

            if (playerScore == 3) {
                cout << endl << play->getName() << " WIN." << endl << endl;
                p = false;
                break; }
        }
    }
}

void FunGame :: mathGame() {

        bool p = true;
        while(p) {

        cout << "The rule is simple, " << play->getName() << " must answers at least 3 questions correctly and" << endl;
        cout << "cannot got wrong for 3 questions. Answer will not revealed" << endl << endl;

        // Generate random seed
        srand(time(nullptr));

        int playerScore = 0;
        int computerScore = 0;

        for (int i = 0; i < 6; i++) {
            int num1 = rand() % 100 + 1;
            int num2 = rand() % 100 + 1;
            int operation = rand() % 2;

            int result;
            string operatorSymbol;

            switch (operation) {
                case 0:
                    result = num1 + num2;
                    operatorSymbol = "+";
                    break;
                case 1:
                    result = num1 - num2;
                    operatorSymbol = "-";
                    break;
            }

            int answer;

            cout << "\nQuestion " << (i + 1) << ": ";
            cout << num1 << " " << operatorSymbol << " " << num2 << " = ";
            cin >> answer;

            if (answer == result) {
                playerScore++;}
            else {
                computerScore++; }

            if (playerScore == 3) {
                cout << "\nMath game ends!\n";
                cout << "Final scores:\n";
                cout << "True Answer: " << playerScore << " \n";
                cout << "Wrong Answer: " << computerScore << " \n";
                cout << endl << play->getName() << " wins the math game \n";
                p = false;
                break; }

            if (computerScore == 3) {
                cout << "\nMath game ends!\n";
                cout << "Final scores:\n";
                cout << "True Answer: " << playerScore << " \n";
                cout << "Wrong Answer: " << computerScore << " \n";
                cout << endl << play->getName() << " lost the math game \n";

                int pilih;
                cout << "Please choose..." << endl;
                cout << "1. Restart Game" << endl;
                cout << "2. Exit Game" << endl;

                do{
                  cin >> pilih;
                  if(pilih!=1 && pilih!=2) {
                    cout << "Invalid Choice. Try Again" << endl; }

                }while((pilih!=1 && pilih!=2));

                if(pilih == 1) {
                  break; }
                else if(pilih == 2) {
                  exit(0); }
            }
        }
    }
}
