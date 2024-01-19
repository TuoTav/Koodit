#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Game
{
public:
    Game(int i)
    {
        maxNumber=i;
        cout<<" GAME CONSTRUCTOR: Object initialized with "<<maxNumber<<" as maximum value"<<endl;
    }
    ~Game();
    void play();
private:
    int maxNumber;
    int playerGuesses;
    int randomNumber;
    int numOfGuesses;
   void printGameResults();
};




void Game::play()
{

    srand(15);
    randomNumber = rand() % maxNumber;


    volatile bool a = false;
    while (!a)
    {
        cout << "Guess a number between 1 and " <<maxNumber << endl;
        cin >> playerGuesses;

        if (playerGuesses == randomNumber)
        {
            cout << "You guessed right it was: "<<randomNumber << endl;
            numOfGuesses++;
            a = true;
            printGameResults();

        }
        else if (playerGuesses > randomNumber)
        {
            cout << "Your guess is higher than the correct answer" << endl;
            numOfGuesses++;
        }
        else
        {
            cout << "Your guess is lower than the correct answer" << endl;
            numOfGuesses++;
        }
    }


}
void Game:: printGameResults()
{
    cout<<"You guessed "<<numOfGuesses<<" times"<<endl;
}
Game::~Game()
{
    cout<<"GAME DECONSTRUCTOR: Object cleared from stack memory"<<endl;
}
#endif // GAME_H
