#include <iostream>
#include <cstdlib>

using namespace std;



int game(int maxnum)
{
    srand(15);
    int randomNumber = rand() % maxnum;
    int guess;
    volatile int numberOfGuesses = 0;
    volatile bool a = false;
    while (!a)
    {
        cout << "Guess a number between in the range you have provided" << endl;
        cin >> guess;

        if (guess == randomNumber)
        {
            cout << "You guessed right" << endl;
            numberOfGuesses++;
            a = true;
        }
        else if (guess > randomNumber)
        {
            cout << "Your guess is higher than the correct answer" << endl;
            numberOfGuesses++;
        }
        else
        {
            cout << "Your guess is lower than the correct answer" << endl;
            numberOfGuesses++;
        }
    }

    return numberOfGuesses;
}

int main()
{
    int maxnum;
    cout << "Enter the maximum value of the random number" << endl;
    cin >> maxnum;

    int Guesses = game(maxnum);

    cout << "Number of guesses: " << Guesses << endl;

    return 0;
}


