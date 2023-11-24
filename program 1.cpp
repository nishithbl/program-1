#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretnumber = rand()%100+1;
    int guess;
    int attempts=0;

    cout<<"welcome to the Number guessing game!\n";
    cout<<"try to guess the number between 1 and 100.\n";

    do {
        cout<<"enter your guess:";
        cin>> guess;
        if(guess>secretnumber){
            cout<<"too high ! Try Again.\n";
        }
        else if (guess<secretnumber){
            cout<<"Too low! Try again.\n";

        }
        else{
            cout<<"congratulation! You guessed the number in beteeen 1 and 100.\n";
        }
        }while (guess!=secretnumber);
        return 0;
    }