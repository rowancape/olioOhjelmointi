#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game{
    private:
        int maxNumber;
        int playerGuess;
        int randomNumber;
        int numOfGuesses = 0;

        void printGameResult(int num){
            cout << "It took you " << numOfGuesses << " guesses to find the right answer, which was " << num;
            cout << endl;
        }

    public:
        Game(int maxNumber){
            this->maxNumber = maxNumber;
            cout << "GAME CONSTRUCTOR: Object initialized with " << maxNumber << " as a maximum value." << endl;
        }

        ~Game(){
            cout << endl << "GAME DESTRUCTOR: Object cleared from stack memory." << endl;
        }

        void play(){
            srand(time(NULL));
            int num = rand() % maxNumber + 1;
            int guess = 0;

            while(num != guess){
                cout << endl << "Guess a number from 1 to " << maxNumber << endl;
                cin >> guess;
                if(guess > num){
                    cout << "Your guess is too HIGH. Guess again." << endl;
                    numOfGuesses++;
                }
                else if(guess < num){
                    cout << "Your guess is too LOW. Guess again." << endl;
                    numOfGuesses++;
                }
                else{
                    cout << endl << "That's correct! The number was " << num << endl;
                    numOfGuesses++;
                }
            }
            printGameResult(num);
        }
};