#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

void rps(string input)
{
    if (input != "rock" && input != "Rock" && input != "paper" && input != "Paper" && input != "scissors" && input != "Scissors")
    {
        cout << "Please enter either Rock, Paper, or Scissors!" << endl;
        exit(1);
    }
    int player;
    if (input == "rock" || input == "Rock")
    {
        player = 0;
    }
    else if (input == "paper" || input == "Paper")
    {
        player = 1;
    }
    else if (input == "scissors" || input == "Scissors")
    {
        player = 2;
    }
    srand(time(NULL));
    unsigned int ai = rand() % 3;
    srand(ai);
    if (player == ai)
    {
        cout << "It's a tie!";
    }
    else if (player == 0 && ai == 1)
    {
        cout << "Player Loses! Player chose: " << input << endl << "Computer chose: Paper";
    }
    else if (player == 0 && ai == 2)
    {
        cout << "Player Wins! Player chose: " << input << endl << "Computer chose: Scissors";
    }
    else if (player == 1 && ai == 0)
    {
        cout << "Player Wins! Player chose: " << input << endl << "Computer chose: Rock";
    }
    else if (player == 1 && ai == 2)
    {
        cout << "Player Loses! Player chose: " << input << endl << "Computer chose: Scissors";
    }
    else if (player == 2 && ai == 0)
    {
        cout << "Player Loses! Player chose: " << input << endl << "Computer chose: Rock";
    }
    else if (player == 2 && ai == 1)
    {
        cout << "Player Wins! Player chose: " << input << endl << "Computer chose: Paper";
    }
};
int main()
{
    string input;
    cout << "Rock, Paper, or Scissors?" << endl;
    cin >> input;
    rps(input);
}
