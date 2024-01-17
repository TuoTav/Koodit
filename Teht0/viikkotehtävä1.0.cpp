#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   srand(15);
    int randomNumber=rand()%20;
    int guess;
    volatile bool a=false;



    while(!a)
    {
        cout<<"Guess a number between 1-19"<<endl;
        cin>>guess;
        if(guess==randomNumber)

        {
            cout<<"You guessed right"<<endl;
            a=true;
            return 0;
        }

    if(guess>randomNumber)
    {
        cout<<"Your guess is higher than the correct answer"<<endl;


    }
    if(guess<randomNumber)
    {
        cout<<"Your guess is lower than the correct answer"<<endl;


    }

    }

return 0;
}
