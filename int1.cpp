#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int secretNum=rand()%100 + 1;
    int guess;
    int attempts=0;
    cout<<"\t\t\tWelcome to the number guessing game!\n\n";
    cout<<"Think of a number between 1 and 100.\n";
    cout<<"Make a guess!\n";
    while(true) 
	{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess==secretNum) 
		{
            cout<<"Congratulations! You guessed it correct in "<<attempts<<" attempts.\n";
            break;
        } 
		else if(guess<secretNum) 
		{
            cout<<"Too low than the secret number! Try again.\n";
        } 
		else 
		{
            cout<<"Too high than the secret number! Try again.\n";
        }
    }
    
    return 0;
}
