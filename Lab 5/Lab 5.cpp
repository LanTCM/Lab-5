#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
    int randNum, guess, chance = 0; //creates variables for a random number, holds what you input for a guess, and how many chances you had
    srand(time(0)); // creates a timer
    randNum = rand() % 100 + 0; // chooses a random number from 0 to 100
    
    cout << "Number Guessing Game" << endl;//introduces the game
    cout << "The computer will choose a number between 1 and 100 and you will get 20 chances to guess it correctly." << endl;//explains the rules

    do
    {
        cin >> guess;//brings in the guess variables
        chance++;//counts number of times you guessed

        if (guess != randNum)
            cout << "Incorrect, Try Again" << endl;//if the guess is not the same number as the one selected, outputs a message telling yous it's wrong

        const int statements1 = 10; // stores string as an integer, has 10 statements
        int w;//creates integer w
        string winMessages[statements1] = { //stores the winning statements in one string
        "You Won!",
        "Congrats! You Won!",
        "Good Job! You Won!",
        "You win! Not a surprise.",
        "A WINNER IS YOU",
        "Congratulations! You Success!",
        "You Won. I wouldn't expect less from you.",
        "yay you won",
        "It seems you beat me again. I won't be such a push over next time.",
        "I would've gotten away with it if weren't for you meddling kids!"
        };
        const int statements2 = 10; // stores string as an integer, has 10 statements
        int l;//creates interger l
        string loseMessages[statements2] = { // stores the losing statements in one string
        "You lost. Good luck next time.",
        "Stop, you violated the law. Pay the court a fine or serve your sentence, your stollen goods are now forfeit.",
        "Game Over",
        "Wasted",
        "Game Over. Return of Ganon",
        "All your base are belong to us.",
        "It's over Anakin! I have the high ground!",
        "Looks like meats back on the menu boys!",
        "You either die a hero, or you live long enough to see yourself become the villain.",
        "Search your feelings, you know it to be true."
        }; 
        
            w = rand() % statements1; //chooses a random number from statements1, find the corresponding string

            l = rand() % statements2;//chooses a random number from statements1, find the corresponding string

            if (guess == randNum)//if the guess is correct, it prints out one of the 10 winning statements at random
            {
                cout << "\n" << winMessages[w] << endl;
            }

            if (chance == 20) // if the player gives 20 guesses, one of the 10 losing statements will be displayed
            {
                cout << "\n" << loseMessages[l] << endl;

                return 0;
            }
    } 
    
    while (guess != randNum); //while the user hasn't yet guessed the number, the game keeps going

    return 0; //stops the game and returns nothing
}

