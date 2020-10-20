// Gambling Sim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <cstdlib>
//#include <ctime>
#include <random>
//#define RAND_MAX 13
using namespace std;
int main()
{
    /*
    srand(time(nullptr));
    int random_variable = rand();
    cout << "Random value on [0 " << RAND_MAX << "]: ";
    cout << random_variable << "\n";
    */
    for (int n = 0; n != 2; ++n) {
        int x = 14;
        while (x > 13)
            x = 1 + rand() % 13;  // Note: 1+rand()%6 is biased
        cout << x << ' ';
    }
   
}