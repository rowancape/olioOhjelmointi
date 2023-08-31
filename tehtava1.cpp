#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int range){
    srand(time(NULL));
    int num = rand() % range + 1;
    int guess = 0;
    int numOfGuesses = 0;

    while(num != guess){
        cout << endl;
        cout << "Guess a number from 1 to " << range << endl;
        cin >> guess;
        if(guess > num){
            cout << "You guess is too HIGH. Guess again." << endl;
            numOfGuesses++;
        }
        else if(guess < num){
            cout << "Your guess is too LOW. Guess again." << endl;
            numOfGuesses++;
        }
        else{
            cout << endl;
            cout << "That's correct! The number was " << num << endl;
            numOfGuesses++;
        }
    }
    return numOfGuesses;
}

int main(){
    cout << game(50) << " <--- It took you this many guesses to get it correct" << endl;
    cout << endl;
    return 0;
}