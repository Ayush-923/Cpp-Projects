#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(nullptr));

    bool guessnum = false;
    int guesscount = 0;
    int ourguess ;
    int comGuess = rand() % 100 + 1;

    while (!guessnum)
    {
        cout<<"Enter your guess: "<<endl;
        cin>> ourguess;

        if(ourguess > 100 || ourguess < 1)
        {
            cout<<"number wasn't between 1 to 100"<<endl;
            guesscount++;
        }
        if (ourguess == comGuess)
        {
            cout<<"Congratulations you have guessed the number in "<<guesscount<<" guesses"<<endl;
            cout<<"Thanks for playing! " << endl;
        }
        else if (ourguess > comGuess)
        {
            cout<<"Your guess is too high! "<<endl;
        }
        else
        {
            cout<<"Your guess is too Low! "<<endl;
        }//end if-else

        guesscount++;
        

    }//end while

    return 0;
}