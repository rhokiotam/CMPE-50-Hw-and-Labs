// Gambling Sim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
class blackJack
{
private:
    int cards[2];
    int nextdeal;
public:
    blackJack()
    {
        cards[2] = { 0 };
        nextdeal = 0;
    }
    void deal()
    {
        int cards[2];
        for (int n = 0; n < 2; ++n)
        {
            cards[n] = (rand() % 13);
            cout << cards[n] << " ";
        }
    }
    void addCard()
    {

    }
};
int main()
{
    cout << "Blackjack Gambling Sim\n";
    int money;
    money = 10;
    cout << "You have $" << money << ". How much do you want to bet?\n";
    int bet = 0;
    cout << "1) $1\n" << "2) $5\n" << "3) $10\n" << "4) $1000\n" << "5) Double or nothing\n";
    cin >> bet;
    if (bet == 1)
    {
    
    }
    else if (bet == 2)
    {
       
    }
    else if (bet == 3)
    {
       
    }
    else if (bet == 4)
    {
       
    }
    else
    {
       
    }
}